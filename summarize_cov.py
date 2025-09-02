#!/usr/bin/env python3

import sys
import json

import matplotlib.pyplot as plt


def summarize_file(arg):
    with open(arg) as f:
        gcovr_json = json.load(f)

    lines_cov = 0
    lines_tot = 0
    funct_cov = 0
    funct_tot = 0
    brnch_cov = 0
    brnch_tot = 0

    for file in gcovr_json["files"]:
        if not file["filename"].startswith("nautilus/include") and not file["filename"].startswith("nautilus/src"):
            continue

        lines_cov += file["line_covered"]
        lines_tot += file["line_total"]
        funct_cov += file["function_covered"]
        funct_tot += file["function_total"]
        brnch_cov += file["branch_covered"]
        brnch_tot += file["branch_total"]

    return lines_cov / lines_tot, funct_cov / funct_tot, brnch_cov / brnch_tot


def main():

    if sys.argv[1] != "baseline":
        print(f"Usage: {sys.argv[0]} baseline $baseline $files...")
        sys.exit(1)

    ts_lines, ts_funct, ts_brnch = summarize_file(sys.argv[2])

    covs = [summarize_file(f) for f in sys.argv[3:]]

    lines, funct, brnch = zip(*covs)

    # Create subplots
    fig, axes = plt.subplots(1, 3, figsize=(15, 5))

    x_axis = range(1, len(lines) * 10, 10)

    axes[0].plot(x_axis, lines, marker='o', label="YARPGen'ed tests")
    axes[0].axhline(y=ts_lines, color='r', linestyle='--', label="handwritten tests")
    axes[0].set_xlabel("No. of executed generated cases")
    axes[0].set_title("Line Coverage")
    axes[0].legend()

    axes[1].plot(x_axis, funct, marker='o', label="YARPGen'ed tests")
    axes[1].axhline(y=ts_funct, color='r', linestyle='--', label="handwritten tests")
    axes[1].set_xlabel("No. of executed generated cases")
    axes[1].set_title("Function Coverage")
    axes[1].legend()

    axes[2].plot(x_axis, brnch, marker='o', label="YARPGen'ed tests")
    axes[2].axhline(y=ts_brnch, color='r', linestyle='--', label="handwritten tests")
    axes[2].set_xlabel("No. of executed generated cases")
    axes[2].set_title("Branch Coverage")
    axes[2].legend()

    # fig.suptitle("Comparing Data and Baseline")
    fig.suptitle("Coverage achieved by tests generated with YARPGen", fontsize=16)

    plt.tight_layout()

    out_name = "cov_per_tests.pdf"
    plt.savefig(out_name)
    print(f"{out_name} written")


if __name__ == "__main__":
    main()
