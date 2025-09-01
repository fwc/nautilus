#!/usr/bin/env python3

import sys
import json


def main():
    with open(sys.argv[1]) as f:
        gcovr_json = json.load(f)

    lines_tot = 0
    lines_cov = 0
    funct_tot = 0
    funct_cov = 0
    brnch_tot = 0
    brnch_cov = 0

    for file in gcovr_json["files"]:
        if not file["filename"].startswith("nautilus/include") and not file["filename"].startswith("nautilus/src"):
            continue

        lines_tot += file["line_total"]
        lines_cov += file["line_covered"]
        funct_tot += file["function_total"]
        funct_cov += file["function_covered"]
        brnch_tot += file["branch_total"]
        brnch_cov += file["branch_covered"]

    print(f"lines: {lines_cov * 100 / lines_tot:.2f} ", end="")
    print(f"funct: {funct_cov * 100 / funct_tot:.2f} ", end="")
    print(f"brnch: {brnch_cov * 100 / brnch_tot:.2f}")





if __name__ == "__main__":
    main()