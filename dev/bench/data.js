window.BENCHMARK_DATA = {
  "lastUpdate": 1754048162415,
  "repoUrl": "https://github.com/fwc/nautilus",
  "entries": {
    "Tracing Benchmark": [
      {
        "commit": {
          "author": {
            "email": "matthis@posteo.de",
            "name": "Matthis Gördel",
            "username": "fwc"
          },
          "committer": {
            "email": "matthis@posteo.de",
            "name": "Matthis Gördel",
            "username": "fwc"
          },
          "distinct": true,
          "id": "83bdb3e09a2b9de3d4d940175cc7aab73d27566e",
          "message": "fixup: cmake format target",
          "timestamp": "2025-08-01T13:25:53+02:00",
          "tree_id": "e58ea5216585bcf7e7ab67283e316826809a145e",
          "url": "https://github.com/fwc/nautilus/commit/83bdb3e09a2b9de3d4d940175cc7aab73d27566e"
        },
        "date": 1754048161927,
        "tool": "catch2",
        "benches": [
          {
            "name": "trace_add",
            "value": 1.31843,
            "range": "± 106.784",
            "unit": "us",
            "extra": "100 samples\n24 iterations"
          },
          {
            "name": "trace_ifThenElse",
            "value": 11.4113,
            "range": "± 1.76151",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_deeplyNestedIfElse",
            "value": 34.7095,
            "range": "± 4.47806",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "trace_loop",
            "value": 11.346,
            "range": "± 1.55536",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_ifInsideLoop",
            "value": 21.9631,
            "range": "± 2.49573",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_loopDirectCall",
            "value": 11.7849,
            "range": "± 2.01009",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_pointerLoop",
            "value": 17.1591,
            "range": "± 2.6989",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_staticLoop",
            "value": 11.0196,
            "range": "± 1.03618",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_fibonacci",
            "value": 13.0395,
            "range": "± 1.68238",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_gcd",
            "value": 10.6825,
            "range": "± 1.30154",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "ssa_add",
            "value": 120.948,
            "range": "± 17.5728",
            "unit": "ns",
            "extra": "100 samples\n270 iterations"
          },
          {
            "name": "ssa_ifThenElse",
            "value": 377.243,
            "range": "± 31.1597",
            "unit": "ns",
            "extra": "100 samples\n82 iterations"
          },
          {
            "name": "ssa_deeplyNestedIfElse",
            "value": 991.06,
            "range": "± 63.5557",
            "unit": "ns",
            "extra": "100 samples\n33 iterations"
          },
          {
            "name": "ssa_loop",
            "value": 408.272,
            "range": "± 28.3046",
            "unit": "ns",
            "extra": "100 samples\n77 iterations"
          },
          {
            "name": "ssa_ifInsideLoop",
            "value": 752.901,
            "range": "± 57.5095",
            "unit": "ns",
            "extra": "100 samples\n44 iterations"
          },
          {
            "name": "ssa_loopDirectCall",
            "value": 433.939,
            "range": "± 44.6052",
            "unit": "ns",
            "extra": "100 samples\n73 iterations"
          },
          {
            "name": "ssa_pointerLoop",
            "value": 519,
            "range": "± 50.4041",
            "unit": "ns",
            "extra": "100 samples\n64 iterations"
          },
          {
            "name": "ssa_staticLoop",
            "value": 395.641,
            "range": "± 50.677",
            "unit": "ns",
            "extra": "100 samples\n78 iterations"
          },
          {
            "name": "ssa_fibonacci",
            "value": 440.009,
            "range": "± 29.7763",
            "unit": "ns",
            "extra": "100 samples\n68 iterations"
          },
          {
            "name": "ssa_gcd",
            "value": 379.259,
            "range": "± 35.5319",
            "unit": "ns",
            "extra": "100 samples\n85 iterations"
          },
          {
            "name": "ir_add",
            "value": 530.013,
            "range": "± 52.1239",
            "unit": "ns",
            "extra": "100 samples\n61 iterations"
          },
          {
            "name": "ir_ifThenElse",
            "value": 2.35061,
            "range": "± 186.702",
            "unit": "us",
            "extra": "100 samples\n14 iterations"
          },
          {
            "name": "ir_deeplyNestedIfElse",
            "value": 5.99844,
            "range": "± 587.763",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "ir_loop",
            "value": 2.69394,
            "range": "± 203.89",
            "unit": "us",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "ir_ifInsideLoop",
            "value": 5.06795,
            "range": "± 345.4",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "ir_loopDirectCall",
            "value": 2.95072,
            "range": "± 248.205",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_pointerLoop",
            "value": 3.41263,
            "range": "± 289.877",
            "unit": "us",
            "extra": "100 samples\n10 iterations"
          },
          {
            "name": "ir_staticLoop",
            "value": 2.09188,
            "range": "± 190.59",
            "unit": "us",
            "extra": "100 samples\n15 iterations"
          },
          {
            "name": "ir_fibonacci",
            "value": 2.92682,
            "range": "± 245.181",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_gcd",
            "value": 2.41259,
            "range": "± 164.539",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "comp_mlir_add",
            "value": 7.83022,
            "range": "± 138.019",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifThenElse",
            "value": 8.93339,
            "range": "± 389.065",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_deeplyNestedIfElse",
            "value": 7.48666,
            "range": "± 447.411",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loop",
            "value": 9.50715,
            "range": "± 175.79",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifInsideLoop",
            "value": 30.7839,
            "range": "± 515.24",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loopDirectCall",
            "value": 13.9916,
            "range": "± 360.533",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_pointerLoop",
            "value": 29.7972,
            "range": "± 1.39951",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_staticLoop",
            "value": 7.36237,
            "range": "± 131.742",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_fibonacci",
            "value": 12.7206,
            "range": "± 253.178",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_gcd",
            "value": 11.7183,
            "range": "± 232.779",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_mlir_add",
            "value": 3.4698,
            "range": "± 0.370735",
            "unit": "ns",
            "extra": "100 samples\n8641 iterations"
          },
          {
            "name": "exec_mlir_fibonacci",
            "value": 4.89635,
            "range": "± 864.606",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "exec_mlir_sum",
            "value": 240.298,
            "range": "± 18.5449",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_add",
            "value": 4.49588,
            "range": "± 0.686654",
            "unit": "ns",
            "extra": "100 samples\n6778 iterations"
          },
          {
            "name": "exec_cpp_fibonacci",
            "value": 93.7585,
            "range": "± 6.20146",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_sum",
            "value": 35.5163,
            "range": "± 162.023",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_add",
            "value": 30.2308,
            "range": "± 3.66273",
            "unit": "ns",
            "extra": "100 samples\n1019 iterations"
          },
          {
            "name": "exec_bc_fibonacci",
            "value": 910.989,
            "range": "± 4.61563",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_sum",
            "value": 195.808,
            "range": "± 441.882",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          }
        ]
      }
    ]
  }
}