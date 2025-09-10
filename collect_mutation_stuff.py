import sys
from collections import defaultdict


def collect_file(inp):

    patches_per_file = {}

    yg_tests = set()
    ct_tests = set()

    mutant_killed_by_yg = defaultdict(set)
    mutant_killed_by_ct = defaultdict(set)

    all_mutations = set()
    cannot_build = set()
    cannot_apply = set()

    skip_strings = [
        "hunk FAILED",
        "build donezo",
        "tests written out to",
        "after_",
    ]

    for l in inp.split("\n"):
        if not l.strip():
            continue

        skip = False
        for s in skip_strings:
            if s in l:
                skip = True
        if skip:
            continue

        if l[0] == "[":
            continue

        if l[0] == "^":
            continue
        if l[0] == "\x1b":
            continue
        if l[0] == " ":
            continue
        if l[0] == "/":
            continue
        if l[0] == "-":
            continue

        words = l.split()

        if len(words) == 1:
            if words[0].startswith("ctestcase::"):
                ct_tests.add(words[0].split("::")[1])
            else:
                yg_tests.add(words[0])

        elif words[0] == "mutant":
            mutant = words[1]
            ygtest = words[4]
            mutant_killed_by_yg[mutant].add(ygtest)
        elif words[1] == "mutant" and words[3] == "killed" and "_test_" in words[5]:
            mutant = words[2]
            ygtest = words[5]
            mutant_killed_by_yg[mutant].add(ygtest)
            
        elif words[1] == "mutant" and words[3] == "killed" and words[5] == "ctest":
            mutant = words[2]
            cttest = words[7]
            mutant_killed_by_ct[mutant].add(cttest)

        elif words[0] == "Generated":
            if words[4] not in patches_per_file:
                patches_per_file[words[4]] = words[1]
            elif patches_per_file[words[4]] != words[1] and "JITCompiler" not in words[4]:
                print(f"WARNING: differing no. of patches for file {words[4]}: {patches_per_file[words[4]]} != {words[1]}")


        elif words[1] == "checking":
            all_mutations.add(words[2])
        elif words[1] == "cannot" and words[2] == "build":
            cannot_build.add(words[3])
        elif words[1] == "cannot" and words[2] == "apply":
            cannot_apply.add(words[3])
        elif (words[1] == "running" or words[0] == "patching" or words[0] == "Hunk"
                  or len(words) > 2 and words[2] == "generated." or words[0] == "Refresh"
                  or words[0] == "mutanalysis.sh:"):
            pass
        else:
            print(l)

    return patches_per_file, yg_tests, ct_tests, mutant_killed_by_yg, mutant_killed_by_ct, all_mutations, cannot_build, cannot_apply


def merge_set(a: set, b: set):
    if not a:
        return b
    if not b:
        return a
    if a == b:
        return a
    raise RuntimeError("merge_set")

def merge_dict(a: dict, b: dict):
    if not a:
        return b
    if not b:
        return a

    shared_keys = set(a.keys()).intersection(set(b.keys()))
    for k in shared_keys:
        if a[k] != b[k]:
            raise RuntimeError(f"Shared value differs for key {k}: {a[k]} != {b[k]}")
    
    return a | b

def merge_dict_warning(a: dict, b: dict, key_domain: set):
    if not a:
        return b

    a_shared = key_domain.intersection(a.keys())
    b_shared = key_domain.intersection(b.keys())

    for k in a_shared.symmetric_difference(b_shared):
        print("flaky?!", k)
    
    res = defaultdict(set)
    
    for k in a_shared.intersection(b_shared):
        if a[k] != b[k]:
            print(f"disagreement at key {k}. lens {len(a[k])} {len(b[k])}")
        res[k] = a[k].intersection(b[k])
    
    for k in set(a.keys()).difference(key_domain):
        res[k] = a[k]
    for k in set(b.keys()).difference(key_domain):
        res[k] = b[k]
    
    return res


def merge_all(a, b):
    if not a:
        return b

    a_all_mutations: set

    a_patches_per_file, a_yg_tests, a_ct_tests, a_mutant_killed_by_yg, a_mutant_killed_by_ct, a_all_mutations, a_cannot_build, a_cannot_apply = a
    b_patches_per_file, b_yg_tests, b_ct_tests, b_mutant_killed_by_yg, b_mutant_killed_by_ct, b_all_mutations, b_cannot_build, b_cannot_apply = b

    if a_yg_tests != b_yg_tests:
        print("a", len(a_yg_tests))
        print("b", len(b_yg_tests))
        raise RuntimeError("Disagreement about which yg_tests exist")
    if a_ct_tests != b_ct_tests:
        raise RuntimeError("Disagreement about which ct_tests exist")
    
    if not a_all_mutations <= b_all_mutations and not b_all_mutations <= a_all_mutations:
        print("mutations not subset..")

    patches_per_file = merge_dict(a_patches_per_file, b_patches_per_file)

    shared_mutations = a_all_mutations.intersection(b_all_mutations)

    if shared_mutations.intersection(a_cannot_build) != shared_mutations.intersection(b_cannot_build):
        raise RuntimeError("Disagreement about which patches can be build")
    if shared_mutations.intersection(a_cannot_apply) != shared_mutations.intersection(b_cannot_apply):
        raise RuntimeError("Disagreement about which patches can be applied")

    cannot_build = a_cannot_build.union(b_cannot_build)
    cannot_apply = a_cannot_apply.union(b_cannot_apply)
    
    mutant_killed_by_yg = merge_dict_warning(a_mutant_killed_by_yg, b_mutant_killed_by_yg, shared_mutations)
    mutant_killed_by_ct = merge_dict_warning(a_mutant_killed_by_ct, b_mutant_killed_by_ct, shared_mutations)

    return patches_per_file, a_yg_tests, a_ct_tests, mutant_killed_by_yg, mutant_killed_by_ct, a_all_mutations.union(b_all_mutations), cannot_build, cannot_apply


def flip_dict(d: dict[str, set]) -> dict[str, set]:
    r = defaultdict(set)
    for k, vs in d.items():
        for v in vs:
            r[v].add(k)
    return r


def main():

    patches_per_file = {}

    yg_tests = set()
    ct_tests = set()

    yg_kills = defaultdict(set)
    ct_kills = defaultdict(set)

    mutant_killed_by_yg = defaultdict(set)
    mutant_killed_by_ct = defaultdict(set)
    all_mutations = set()
    cannot_build = set()
    cannot_apply = set()

    merger = None

    for file in sys.argv[1:]:
        with open(file, encoding="utf-8") as f:
            inp = f.read()

        merger = merge_all(merger, collect_file(inp))
    
    patches_per_file, yg_tests, ct_tests, mutant_killed_by_yg, mutant_killed_by_ct, all_mutations, cannot_build, cannot_apply = merger 

    print("--------------------------------------")
    yg_unknown_tests = set(yg_kills.keys()).difference(yg_tests)
    if yg_unknown_tests:
        print("WARNING: uknown tests", yg_unknown_tests)
    ct_unknown_tests = set(ct_kills.keys()).difference(ct_tests)
    if ct_unknown_tests:
        print("WARNING: uknown tests", ct_unknown_tests)
    print("--------------------------------------")

    applyable = set(all_mutations).difference(cannot_apply)
    buildable = set(all_mutations).difference(cannot_apply).difference(cannot_build)

    print("generated mutations:", len(all_mutations))
    print("applyable mutations:", len(applyable))
    print("buildable mutations:", len(buildable))
    print("   killed mutations:", len(buildable.intersection(set(mutant_killed_by_yg.keys()).union(set(mutant_killed_by_ct.keys())))))
    print("surviving mutations:", len(buildable.difference(set(mutant_killed_by_yg.keys()).union(set(mutant_killed_by_ct.keys())))))
    print()
    print("killed by yg:", len(mutant_killed_by_yg))
    print("killed by ct:", len(mutant_killed_by_ct))
    print("killed by yg \\ ct", len(set(mutant_killed_by_yg.keys()).difference(mutant_killed_by_ct)))
    print("killed by ct \\ yg", len(set(mutant_killed_by_ct.keys()).difference(mutant_killed_by_yg)))

    print()

    mutant_len = max(len(m) for m in buildable)

    print(f"{"mutant":<{mutant_len}} killed by")
    print(f"{"      ":<{mutant_len}} {"yg":>4} {"ct":>3}")

    for mutant in sorted(buildable):
        if mutant_killed_by_yg[mutant] and not mutant_killed_by_ct[mutant]:
            print(f"{mutant:<{mutant_len}} {len(mutant_killed_by_yg[mutant]) if mutant in mutant_killed_by_yg else 0:>4} {len(mutant_killed_by_ct[mutant]) if mutant in mutant_killed_by_ct else 0:>3}")
    print()
    for mutant in sorted(buildable):
        if mutant_killed_by_ct[mutant] and not mutant_killed_by_yg[mutant]:
            print(f"{mutant:<{mutant_len}} {len(mutant_killed_by_yg[mutant]) if mutant in mutant_killed_by_yg else 0:>4} {len(mutant_killed_by_ct[mutant]) if mutant in mutant_killed_by_ct else 0:>3}")
    # print()
    # for mutant in sorted(buildable):
    #     if not mutant_killed_by_yg[mutant] and not mutant_killed_by_ct[mutant]:
    #         print(f"{mutant:<{mutant_len}} {len(mutant_killed_by_yg[mutant]) if mutant in mutant_killed_by_yg else 0:>4} {len(mutant_killed_by_ct[mutant]) if mutant in mutant_killed_by_ct else 0:>3}")
    
    print()

    yg_kills = flip_dict(mutant_killed_by_yg)
    ct_kills = flip_dict(mutant_killed_by_ct)

    yg_useless_tests = yg_tests.difference(yg_kills.keys())
    ct_useless_tests = ct_tests.difference(ct_kills.keys())
    print("no. of seemingly useless yg tests:", len(yg_useless_tests))
    print("no. of seemingly useless ct tests:", len(ct_useless_tests))

    print()

    yg_top_killers = list(reversed(sorted(yg_kills.items(), key=lambda x: len(x[1]))))
    ct_top_killers = list(reversed(sorted(ct_kills.items(), key=lambda x: len(x[1]))))

    print("top 5 yg killers")
    for test, kills in yg_top_killers[:5]:
        print(f"{test:<50} {len(kills)}")
    print()
    print("top 5 ct killers")
    for test, kills in ct_top_killers[:5]:
        print(f"{test:<50} {len(kills)}")

    mutants_report = "report_mutants.txt"
    with open(mutants_report, "w", encoding="utf-8") as f:
        f.write(f"{"mutant":<{mutant_len}} killed by")
        f.write("\n")
        f.write(f"{"      ":<{mutant_len}} {"yg":>4} {"ct":>3}")
        f.write("\n")
        for mutant in sorted(buildable):
            f.write(f"{mutant:<{mutant_len}} {len(mutant_killed_by_yg[mutant]) if mutant in mutant_killed_by_yg else 0:>4} {len(mutant_killed_by_ct[mutant]) if mutant in mutant_killed_by_ct else 0:>3}")
            f.write("\n")

    useless_ct_tests = "report_useless_ctests.txt"
    with open(useless_ct_tests, "w", encoding="utf-8") as f:
        for ct in sorted(ct_useless_tests):
            f.write(ct + "\n")

    print()
    print(f"{mutants_report}, {useless_ct_tests} written")

if __name__ == "__main__":
    main()
