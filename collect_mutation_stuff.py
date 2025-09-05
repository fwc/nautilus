import sys
from collections import defaultdict


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

    for file in sys.argv[1:]:
        with open(file, encoding="utf-8") as f:
            inp = f.read()

        for l in inp.split("\n"):
            if not l:
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
                yg_kills[ygtest].add(mutant)
            
            elif words[1] == "mutant" and words[3] == "killed" and words[5] == "ctest":
                mutant = words[2]
                cttest = words[7]
                mutant_killed_by_ct[mutant].add(cttest)
                ct_kills[cttest].add(mutant)

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
            elif words[1] == "running" or words[0] == "patching" or words[0] == "Hunk":
                pass
            else:
                print(l)

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
        print(f"{mutant:<{mutant_len}} {len(mutant_killed_by_yg[mutant]) if mutant in mutant_killed_by_yg else 0:>4} {len(mutant_killed_by_ct[mutant]) if mutant in mutant_killed_by_ct else 0:>3}")
    
    print()

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


if __name__ == "__main__":
    main()