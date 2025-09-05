import sys
from collections import defaultdict


def main():

    yg_tests = set()
    ct_tests = set()

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
            if words[0] == "mutant":
                mutant = words[1]
                ygtest = words[4]
                yg_tests.add(ygtest)
                mutant_killed_by_yg[mutant].add(ygtest)
            
            elif words[1] == "mutant" and words[3] == "killed" and words[5] == "ctest":
                mutant = words[2]
                cttest = words[7]
                ct_tests.add(cttest)
                mutant_killed_by_ct[mutant].add(cttest)
            elif words[1] == "checking":
                all_mutations.add(words[2])
            elif words[1] == "cannot" and words[2] == "build":
                cannot_build.add(words[3])
            elif words[1] == "cannot" and words[2] == "apply":
                cannot_apply.add(words[3])
            elif words[1] == "running":
                pass
            else:
                print(l)

    # for mutant, killers in mutant_killed_by.items():
    #     print(mutant, len(killers))

    applyable = set(all_mutations).difference(cannot_apply)
    buildable = set(all_mutations).difference(cannot_apply).difference(cannot_build)

    print("generated mutations:", len(all_mutations))
    print("applyable mutations:", len(applyable))
    print("buildable mutations:", len(buildable))
    print("   killed mutations:", len(buildable.intersection(set(mutant_killed_by_yg.keys()).union(set(mutant_killed_by_ct.keys())))))
    print("surviving mutations:", len(buildable.difference(set(mutant_killed_by_yg.keys()).union(set(mutant_killed_by_ct.keys())))))
    print("killed by yg:", len(mutant_killed_by_yg))
    print("killed by ct:", len(mutant_killed_by_ct))
    print("killed by yg \\ ct", len(set(mutant_killed_by_yg.keys()).difference(mutant_killed_by_ct)))
    print("killed by ct \\ ct", len(set(mutant_killed_by_ct.keys()).difference(mutant_killed_by_yg)))

    print()

    mutant_len = max(len(m) for m in buildable)

    for mutant in sorted(buildable):
        print(f"{mutant:<{mutant_len}} {len(mutant_killed_by_yg[mutant]) if mutant in mutant_killed_by_yg else 0:>4} {len(mutant_killed_by_ct[mutant]) if mutant in mutant_killed_by_ct else 0:>3}")
    
    print()


if __name__ == "__main__":
    main()