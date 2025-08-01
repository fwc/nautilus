window.BENCHMARK_DATA = {
  "lastUpdate": 1754051537532,
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
      },
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
          "distinct": false,
          "id": "a13e1c2f14526a8decdd1734a056cb254b98d907",
          "message": "fixup! add format workflow",
          "timestamp": "2025-08-01T13:33:13+02:00",
          "tree_id": "9ff7c567448918784f8da2000e78ef317bbe7972",
          "url": "https://github.com/fwc/nautilus/commit/a13e1c2f14526a8decdd1734a056cb254b98d907"
        },
        "date": 1754048381480,
        "tool": "catch2",
        "benches": [
          {
            "name": "trace_add",
            "value": 1.35625,
            "range": "± 120.228",
            "unit": "us",
            "extra": "100 samples\n20 iterations"
          },
          {
            "name": "trace_ifThenElse",
            "value": 11.4499,
            "range": "± 1.14101",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_deeplyNestedIfElse",
            "value": 34.9075,
            "range": "± 3.20059",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "trace_loop",
            "value": 11.456,
            "range": "± 1.01141",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_ifInsideLoop",
            "value": 22.5116,
            "range": "± 3.16136",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_loopDirectCall",
            "value": 11.8581,
            "range": "± 1.193",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_pointerLoop",
            "value": 17.1717,
            "range": "± 1.7343",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_staticLoop",
            "value": 12.981,
            "range": "± 1.14023",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_fibonacci",
            "value": 12.6042,
            "range": "± 1.12825",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_gcd",
            "value": 10.4651,
            "range": "± 944.51",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "ssa_add",
            "value": 114.255,
            "range": "± 8.95658",
            "unit": "ns",
            "extra": "100 samples\n270 iterations"
          },
          {
            "name": "ssa_ifThenElse",
            "value": 371.106,
            "range": "± 20.2606",
            "unit": "ns",
            "extra": "100 samples\n83 iterations"
          },
          {
            "name": "ssa_deeplyNestedIfElse",
            "value": 976.524,
            "range": "± 56.177",
            "unit": "ns",
            "extra": "100 samples\n33 iterations"
          },
          {
            "name": "ssa_loop",
            "value": 409.293,
            "range": "± 40.8184",
            "unit": "ns",
            "extra": "100 samples\n79 iterations"
          },
          {
            "name": "ssa_ifInsideLoop",
            "value": 731.268,
            "range": "± 57.0732",
            "unit": "ns",
            "extra": "100 samples\n45 iterations"
          },
          {
            "name": "ssa_loopDirectCall",
            "value": 423.175,
            "range": "± 33.8124",
            "unit": "ns",
            "extra": "100 samples\n75 iterations"
          },
          {
            "name": "ssa_pointerLoop",
            "value": 509.209,
            "range": "± 39.7786",
            "unit": "ns",
            "extra": "100 samples\n65 iterations"
          },
          {
            "name": "ssa_staticLoop",
            "value": 378.679,
            "range": "± 26.6962",
            "unit": "ns",
            "extra": "100 samples\n80 iterations"
          },
          {
            "name": "ssa_fibonacci",
            "value": 440.742,
            "range": "± 44.411",
            "unit": "ns",
            "extra": "100 samples\n75 iterations"
          },
          {
            "name": "ssa_gcd",
            "value": 357.84,
            "range": "± 20.9784",
            "unit": "ns",
            "extra": "100 samples\n87 iterations"
          },
          {
            "name": "ir_add",
            "value": 514.951,
            "range": "± 27.4628",
            "unit": "ns",
            "extra": "100 samples\n60 iterations"
          },
          {
            "name": "ir_ifThenElse",
            "value": 2.3417,
            "range": "± 160.793",
            "unit": "us",
            "extra": "100 samples\n14 iterations"
          },
          {
            "name": "ir_deeplyNestedIfElse",
            "value": 6.00167,
            "range": "± 490",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "ir_loop",
            "value": 2.70943,
            "range": "± 213.016",
            "unit": "us",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "ir_ifInsideLoop",
            "value": 5.08901,
            "range": "± 345.377",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "ir_loopDirectCall",
            "value": 2.90199,
            "range": "± 173.027",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_pointerLoop",
            "value": 3.42076,
            "range": "± 321.725",
            "unit": "us",
            "extra": "100 samples\n10 iterations"
          },
          {
            "name": "ir_staticLoop",
            "value": 2.14983,
            "range": "± 205.572",
            "unit": "us",
            "extra": "100 samples\n15 iterations"
          },
          {
            "name": "ir_fibonacci",
            "value": 2.88361,
            "range": "± 238.981",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_gcd",
            "value": 2.4639,
            "range": "± 224.819",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "comp_mlir_add",
            "value": 7.87366,
            "range": "± 163.593",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifThenElse",
            "value": 8.47892,
            "range": "± 97.1356",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_deeplyNestedIfElse",
            "value": 7.4423,
            "range": "± 117.298",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loop",
            "value": 9.45768,
            "range": "± 153.04",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifInsideLoop",
            "value": 29.5624,
            "range": "± 382.471",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loopDirectCall",
            "value": 13.7984,
            "range": "± 96.5638",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_pointerLoop",
            "value": 28.9745,
            "range": "± 133.767",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_staticLoop",
            "value": 7.37787,
            "range": "± 124.702",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_fibonacci",
            "value": 12.6162,
            "range": "± 157.747",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_gcd",
            "value": 11.6446,
            "range": "± 110.519",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_add",
            "value": 25.0519,
            "range": "± 468.349",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_ifThenElse",
            "value": 25.6712,
            "range": "± 445.84",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_deeplyNestedIfElse",
            "value": 26.8886,
            "range": "± 470.319",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_loop",
            "value": 26.1726,
            "range": "± 462.954",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_ifInsideLoop",
            "value": 27.0965,
            "range": "± 532.609",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_loopDirectCall",
            "value": 26.6994,
            "range": "± 504.225",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_pointerLoop",
            "value": 26.1328,
            "range": "± 487.11",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_staticLoop",
            "value": 25.0714,
            "range": "± 279.707",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_fibonacci",
            "value": 26.1671,
            "range": "± 1.60878",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_gcd",
            "value": 25.6337,
            "range": "± 564.452",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_bc_add",
            "value": 1.04326,
            "range": "± 35.624",
            "unit": "us",
            "extra": "100 samples\n29 iterations"
          },
          {
            "name": "comp_bc_ifThenElse",
            "value": 2.62458,
            "range": "± 225.18",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "comp_bc_deeplyNestedIfElse",
            "value": 6.14426,
            "range": "± 647.792",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "comp_bc_loop",
            "value": 2.54766,
            "range": "± 194.697",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "comp_bc_ifInsideLoop",
            "value": 4.6849,
            "range": "± 418.661",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "comp_bc_loopDirectCall",
            "value": 3.8409,
            "range": "± 1.4031",
            "unit": "us",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "comp_bc_pointerLoop",
            "value": 3.13209,
            "range": "± 284.389",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "comp_bc_staticLoop",
            "value": 2.11504,
            "range": "± 205.581",
            "unit": "us",
            "extra": "100 samples\n15 iterations"
          },
          {
            "name": "comp_bc_fibonacci",
            "value": 3.77761,
            "range": "± 1.2443",
            "unit": "us",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "comp_bc_gcd",
            "value": 2.38208,
            "range": "± 197.887",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "exec_mlir_add",
            "value": 3.53393,
            "range": "± 0.491518",
            "unit": "ns",
            "extra": "100 samples\n8541 iterations"
          },
          {
            "name": "exec_mlir_fibonacci",
            "value": 4.93024,
            "range": "± 849.95",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "exec_mlir_sum",
            "value": 569.47,
            "range": "± 20.6126",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_add",
            "value": 4.38506,
            "range": "± 0.325285",
            "unit": "ns",
            "extra": "100 samples\n6820 iterations"
          },
          {
            "name": "exec_cpp_fibonacci",
            "value": 95.8438,
            "range": "± 11.0723",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_sum",
            "value": 36.1572,
            "range": "± 1.3808",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_add",
            "value": 44.7225,
            "range": "± 26.378",
            "unit": "ns",
            "extra": "100 samples\n1027 iterations"
          },
          {
            "name": "exec_bc_fibonacci",
            "value": 911.851,
            "range": "± 4.53785",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_sum",
            "value": 195.414,
            "range": "± 5.31339",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          }
        ]
      },
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
          "id": "b5e4343b22333eea1e863223aa2cd505c7e8a075",
          "message": "smash",
          "timestamp": "2025-08-01T13:42:10+02:00",
          "tree_id": "4d4aebfe7ad67bb489d62d78c0530dc3c6276b49",
          "url": "https://github.com/fwc/nautilus/commit/b5e4343b22333eea1e863223aa2cd505c7e8a075"
        },
        "date": 1754048878566,
        "tool": "catch2",
        "benches": [
          {
            "name": "trace_add",
            "value": 1.31916,
            "range": "± 129.124",
            "unit": "us",
            "extra": "100 samples\n24 iterations"
          },
          {
            "name": "trace_ifThenElse",
            "value": 11.3603,
            "range": "± 1.45102",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_deeplyNestedIfElse",
            "value": 34.6982,
            "range": "± 5.31924",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "trace_loop",
            "value": 11.3602,
            "range": "± 1.64658",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_ifInsideLoop",
            "value": 22.0928,
            "range": "± 2.66164",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_loopDirectCall",
            "value": 11.764,
            "range": "± 1.97751",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_pointerLoop",
            "value": 17.693,
            "range": "± 3.05708",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_staticLoop",
            "value": 11.2962,
            "range": "± 1.88862",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_fibonacci",
            "value": 12.8426,
            "range": "± 1.82747",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_gcd",
            "value": 10.9406,
            "range": "± 2.01078",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "ssa_add",
            "value": 111.666,
            "range": "± 6.16795",
            "unit": "ns",
            "extra": "100 samples\n272 iterations"
          },
          {
            "name": "ssa_ifThenElse",
            "value": 379.997,
            "range": "± 29.6274",
            "unit": "ns",
            "extra": "100 samples\n83 iterations"
          },
          {
            "name": "ssa_deeplyNestedIfElse",
            "value": 986.361,
            "range": "± 89.9411",
            "unit": "ns",
            "extra": "100 samples\n33 iterations"
          },
          {
            "name": "ssa_loop",
            "value": 401.729,
            "range": "± 31.7625",
            "unit": "ns",
            "extra": "100 samples\n80 iterations"
          },
          {
            "name": "ssa_ifInsideLoop",
            "value": 732.291,
            "range": "± 57.1828",
            "unit": "ns",
            "extra": "100 samples\n45 iterations"
          },
          {
            "name": "ssa_loopDirectCall",
            "value": 442.792,
            "range": "± 56.9469",
            "unit": "ns",
            "extra": "100 samples\n75 iterations"
          },
          {
            "name": "ssa_pointerLoop",
            "value": 501.917,
            "range": "± 41.4285",
            "unit": "ns",
            "extra": "100 samples\n65 iterations"
          },
          {
            "name": "ssa_staticLoop",
            "value": 407.548,
            "range": "± 60.8809",
            "unit": "ns",
            "extra": "100 samples\n77 iterations"
          },
          {
            "name": "ssa_fibonacci",
            "value": 434.754,
            "range": "± 31.3555",
            "unit": "ns",
            "extra": "100 samples\n74 iterations"
          },
          {
            "name": "ssa_gcd",
            "value": 363.41,
            "range": "± 25.6271",
            "unit": "ns",
            "extra": "100 samples\n87 iterations"
          },
          {
            "name": "ir_add",
            "value": 518.861,
            "range": "± 65.0735",
            "unit": "ns",
            "extra": "100 samples\n61 iterations"
          },
          {
            "name": "ir_ifThenElse",
            "value": 2.3521,
            "range": "± 260.027",
            "unit": "us",
            "extra": "100 samples\n14 iterations"
          },
          {
            "name": "ir_deeplyNestedIfElse",
            "value": 5.96316,
            "range": "± 571.496",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "ir_loop",
            "value": 2.72,
            "range": "± 289.571",
            "unit": "us",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "ir_ifInsideLoop",
            "value": 5.0931,
            "range": "± 416.866",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "ir_loopDirectCall",
            "value": 2.90503,
            "range": "± 191.976",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_pointerLoop",
            "value": 3.39643,
            "range": "± 288.447",
            "unit": "us",
            "extra": "100 samples\n10 iterations"
          },
          {
            "name": "ir_staticLoop",
            "value": 2.06792,
            "range": "± 158.99",
            "unit": "us",
            "extra": "100 samples\n16 iterations"
          },
          {
            "name": "ir_fibonacci",
            "value": 2.93091,
            "range": "± 331.647",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_gcd",
            "value": 3.71921,
            "range": "± 822.71",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "comp_mlir_add",
            "value": 8.34783,
            "range": "± 260.54",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifThenElse",
            "value": 9.05792,
            "range": "± 401.359",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_deeplyNestedIfElse",
            "value": 7.72768,
            "range": "± 228.375",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loop",
            "value": 10.0662,
            "range": "± 679.841",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifInsideLoop",
            "value": 31.6854,
            "range": "± 896.98",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loopDirectCall",
            "value": 15.422,
            "range": "± 496.573",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_pointerLoop",
            "value": 32.041,
            "range": "± 499.76",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_staticLoop",
            "value": 8.31581,
            "range": "± 320.161",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_fibonacci",
            "value": 14.8773,
            "range": "± 250.942",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_gcd",
            "value": 13.7358,
            "range": "± 231.75",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_add",
            "value": 27.9015,
            "range": "± 631.815",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_ifThenElse",
            "value": 28.4375,
            "range": "± 400.952",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_deeplyNestedIfElse",
            "value": 28.9061,
            "range": "± 571.362",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_loop",
            "value": 27.8663,
            "range": "± 585.883",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_ifInsideLoop",
            "value": 28.7279,
            "range": "± 575.91",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_loopDirectCall",
            "value": 28.3049,
            "range": "± 489.267",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_pointerLoop",
            "value": 28.4256,
            "range": "± 977.099",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_staticLoop",
            "value": 27.4199,
            "range": "± 404.292",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_fibonacci",
            "value": 27.964,
            "range": "± 338.575",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_cpp_gcd",
            "value": 27.9797,
            "range": "± 649.436",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_bc_add",
            "value": 1.22134,
            "range": "± 116.413",
            "unit": "us",
            "extra": "100 samples\n26 iterations"
          },
          {
            "name": "comp_bc_ifThenElse",
            "value": 2.79703,
            "range": "± 243.33",
            "unit": "us",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "comp_bc_deeplyNestedIfElse",
            "value": 7.10595,
            "range": "± 1.80511",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "comp_bc_loop",
            "value": 2.74892,
            "range": "± 204.108",
            "unit": "us",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "comp_bc_ifInsideLoop",
            "value": 4.94049,
            "range": "± 525.868",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "comp_bc_loopDirectCall",
            "value": 2.93435,
            "range": "± 264.621",
            "unit": "us",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "comp_bc_pointerLoop",
            "value": 3.37507,
            "range": "± 395.452",
            "unit": "us",
            "extra": "100 samples\n10 iterations"
          },
          {
            "name": "comp_bc_staticLoop",
            "value": 2.32388,
            "range": "± 192.32",
            "unit": "us",
            "extra": "100 samples\n14 iterations"
          },
          {
            "name": "comp_bc_fibonacci",
            "value": 2.99094,
            "range": "± 508.155",
            "unit": "us",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "comp_bc_gcd",
            "value": 2.56469,
            "range": "± 199.658",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "exec_mlir_add",
            "value": 3.47807,
            "range": "± 0.40239",
            "unit": "ns",
            "extra": "100 samples\n8618 iterations"
          },
          {
            "name": "exec_mlir_fibonacci",
            "value": 5.00066,
            "range": "± 1.14029",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "exec_mlir_sum",
            "value": 596.636,
            "range": "± 27.8094",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_add",
            "value": 4.39184,
            "range": "± 0.459663",
            "unit": "ns",
            "extra": "100 samples\n6076 iterations"
          },
          {
            "name": "exec_cpp_fibonacci",
            "value": 94.7721,
            "range": "± 6.72261",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_sum",
            "value": 35.9504,
            "range": "± 97.2101",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_add",
            "value": 30.5846,
            "range": "± 4.59668",
            "unit": "ns",
            "extra": "100 samples\n1020 iterations"
          },
          {
            "name": "exec_bc_fibonacci",
            "value": 914.173,
            "range": "± 14.7392",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_sum",
            "value": 195.816,
            "range": "± 2.13442",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          }
        ]
      },
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
          "id": "b42874bca00cc63f4fc99039b9cf50886b72251f",
          "message": "val_ptr: add binary, assign operators",
          "timestamp": "2025-08-01T13:45:35+02:00",
          "tree_id": "4d4aebfe7ad67bb489d62d78c0530dc3c6276b49",
          "url": "https://github.com/fwc/nautilus/commit/b42874bca00cc63f4fc99039b9cf50886b72251f"
        },
        "date": 1754049077750,
        "tool": "catch2",
        "benches": [
          {
            "name": "trace_add",
            "value": 1.32126,
            "range": "± 110.314",
            "unit": "us",
            "extra": "100 samples\n24 iterations"
          },
          {
            "name": "trace_ifThenElse",
            "value": 11.5421,
            "range": "± 1.32246",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_deeplyNestedIfElse",
            "value": 35.4327,
            "range": "± 4.39281",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "trace_loop",
            "value": 11.2837,
            "range": "± 1.48814",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_ifInsideLoop",
            "value": 22.0023,
            "range": "± 2.48884",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_loopDirectCall",
            "value": 11.9133,
            "range": "± 1.72529",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_pointerLoop",
            "value": 17.8075,
            "range": "± 2.41883",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_staticLoop",
            "value": 13.1112,
            "range": "± 1.75031",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_fibonacci",
            "value": 12.8329,
            "range": "± 1.72242",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_gcd",
            "value": 11.056,
            "range": "± 1.60589",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "ssa_add",
            "value": 118.31,
            "range": "± 15.2903",
            "unit": "ns",
            "extra": "100 samples\n275 iterations"
          },
          {
            "name": "ssa_ifThenElse",
            "value": 401.287,
            "range": "± 66.5181",
            "unit": "ns",
            "extra": "100 samples\n84 iterations"
          },
          {
            "name": "ssa_deeplyNestedIfElse",
            "value": 991.788,
            "range": "± 77.517",
            "unit": "ns",
            "extra": "100 samples\n33 iterations"
          },
          {
            "name": "ssa_loop",
            "value": 397.188,
            "range": "± 41.5204",
            "unit": "ns",
            "extra": "100 samples\n82 iterations"
          },
          {
            "name": "ssa_ifInsideLoop",
            "value": 734.683,
            "range": "± 77.6667",
            "unit": "ns",
            "extra": "100 samples\n45 iterations"
          },
          {
            "name": "ssa_loopDirectCall",
            "value": 427.66,
            "range": "± 47.1803",
            "unit": "ns",
            "extra": "100 samples\n76 iterations"
          },
          {
            "name": "ssa_pointerLoop",
            "value": 523.12,
            "range": "± 73.9943",
            "unit": "ns",
            "extra": "100 samples\n66 iterations"
          },
          {
            "name": "ssa_staticLoop",
            "value": 412.948,
            "range": "± 86.0269",
            "unit": "ns",
            "extra": "100 samples\n78 iterations"
          },
          {
            "name": "ssa_fibonacci",
            "value": 448.786,
            "range": "± 58.6206",
            "unit": "ns",
            "extra": "100 samples\n75 iterations"
          },
          {
            "name": "ssa_gcd",
            "value": 367.117,
            "range": "± 44.4307",
            "unit": "ns",
            "extra": "100 samples\n89 iterations"
          },
          {
            "name": "ir_add",
            "value": 503.231,
            "range": "± 40.1747",
            "unit": "ns",
            "extra": "100 samples\n61 iterations"
          },
          {
            "name": "ir_ifThenElse",
            "value": 2.4138,
            "range": "± 287.917",
            "unit": "us",
            "extra": "100 samples\n14 iterations"
          },
          {
            "name": "ir_deeplyNestedIfElse",
            "value": 5.97896,
            "range": "± 531.528",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "ir_loop",
            "value": 2.79033,
            "range": "± 337.063",
            "unit": "us",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "ir_ifInsideLoop",
            "value": 5.24332,
            "range": "± 613.631",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "ir_loopDirectCall",
            "value": 2.95999,
            "range": "± 315.829",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_pointerLoop",
            "value": 3.46831,
            "range": "± 303.195",
            "unit": "us",
            "extra": "100 samples\n10 iterations"
          },
          {
            "name": "ir_staticLoop",
            "value": 2.14057,
            "range": "± 264.095",
            "unit": "us",
            "extra": "100 samples\n16 iterations"
          },
          {
            "name": "ir_fibonacci",
            "value": 2.92069,
            "range": "± 316.389",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_gcd",
            "value": 2.48315,
            "range": "± 313.562",
            "unit": "us",
            "extra": "100 samples\n14 iterations"
          },
          {
            "name": "comp_mlir_add",
            "value": 7.86159,
            "range": "± 135.69",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifThenElse",
            "value": 8.52248,
            "range": "± 162.448",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_deeplyNestedIfElse",
            "value": 7.4836,
            "range": "± 144.005",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loop",
            "value": 9.47957,
            "range": "± 124.904",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifInsideLoop",
            "value": 30.3417,
            "range": "± 719.05",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loopDirectCall",
            "value": 13.9814,
            "range": "± 219.568",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_pointerLoop",
            "value": 29.5678,
            "range": "± 554.587",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_staticLoop",
            "value": 7.41482,
            "range": "± 115.742",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_fibonacci",
            "value": 12.7364,
            "range": "± 187.266",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_gcd",
            "value": 12.1113,
            "range": "± 274.384",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_mlir_add",
            "value": 3.49631,
            "range": "± 0.449945",
            "unit": "ns",
            "extra": "100 samples\n8713 iterations"
          },
          {
            "name": "exec_mlir_fibonacci",
            "value": 4.87757,
            "range": "± 717.838",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "exec_mlir_sum",
            "value": 575.279,
            "range": "± 26.1421",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_add",
            "value": 4.42059,
            "range": "± 0.557671",
            "unit": "ns",
            "extra": "100 samples\n6834 iterations"
          },
          {
            "name": "exec_cpp_fibonacci",
            "value": 93.9336,
            "range": "± 4.7377",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_sum",
            "value": 36.0864,
            "range": "± 1.34838",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_add",
            "value": 30.0742,
            "range": "± 3.33438",
            "unit": "ns",
            "extra": "100 samples\n1030 iterations"
          },
          {
            "name": "exec_bc_fibonacci",
            "value": 913.263,
            "range": "± 8.00826",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_sum",
            "value": 196.031,
            "range": "± 297.512",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          }
        ]
      },
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
          "id": "dcd64eb9b7ceb7c64118a2fb274cbe45a7d23ad6",
          "message": "FOO use clang-format-19",
          "timestamp": "2025-08-01T13:49:29+02:00",
          "tree_id": "b23788f2c1006507f131f6dcec454a96a5bfbb5a",
          "url": "https://github.com/fwc/nautilus/commit/dcd64eb9b7ceb7c64118a2fb274cbe45a7d23ad6"
        },
        "date": 1754049339034,
        "tool": "catch2",
        "benches": [
          {
            "name": "trace_add",
            "value": 1.38381,
            "range": "± 153.035",
            "unit": "us",
            "extra": "100 samples\n23 iterations"
          },
          {
            "name": "trace_ifThenElse",
            "value": 11.6107,
            "range": "± 1.09232",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_deeplyNestedIfElse",
            "value": 36.3002,
            "range": "± 6.05707",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "trace_loop",
            "value": 11.4641,
            "range": "± 1.75969",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_ifInsideLoop",
            "value": 23.1627,
            "range": "± 3.40177",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_loopDirectCall",
            "value": 12.1861,
            "range": "± 2.03349",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_pointerLoop",
            "value": 24.5772,
            "range": "± 3.60416",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_staticLoop",
            "value": 13.1198,
            "range": "± 1.94672",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_fibonacci",
            "value": 13.6326,
            "range": "± 2.8017",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_gcd",
            "value": 10.8547,
            "range": "± 1.41173",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "ssa_add",
            "value": 117.473,
            "range": "± 13.1614",
            "unit": "ns",
            "extra": "100 samples\n274 iterations"
          },
          {
            "name": "ssa_ifThenElse",
            "value": 386.409,
            "range": "± 32.0705",
            "unit": "ns",
            "extra": "100 samples\n83 iterations"
          },
          {
            "name": "ssa_deeplyNestedIfElse",
            "value": 1.01261,
            "range": "± 104.534",
            "unit": "us",
            "extra": "100 samples\n33 iterations"
          },
          {
            "name": "ssa_loop",
            "value": 409.071,
            "range": "± 52.909",
            "unit": "ns",
            "extra": "100 samples\n81 iterations"
          },
          {
            "name": "ssa_ifInsideLoop",
            "value": 736.25,
            "range": "± 79.2289",
            "unit": "ns",
            "extra": "100 samples\n45 iterations"
          },
          {
            "name": "ssa_loopDirectCall",
            "value": 431.068,
            "range": "± 46.63",
            "unit": "ns",
            "extra": "100 samples\n76 iterations"
          },
          {
            "name": "ssa_pointerLoop",
            "value": 508.703,
            "range": "± 52.1828",
            "unit": "ns",
            "extra": "100 samples\n63 iterations"
          },
          {
            "name": "ssa_staticLoop",
            "value": 394.702,
            "range": "± 60.4042",
            "unit": "ns",
            "extra": "100 samples\n81 iterations"
          },
          {
            "name": "ssa_fibonacci",
            "value": 442.85,
            "range": "± 49.8886",
            "unit": "ns",
            "extra": "100 samples\n77 iterations"
          },
          {
            "name": "ssa_gcd",
            "value": 377.968,
            "range": "± 55.953",
            "unit": "ns",
            "extra": "100 samples\n88 iterations"
          },
          {
            "name": "ir_add",
            "value": 549.551,
            "range": "± 63.9356",
            "unit": "ns",
            "extra": "100 samples\n59 iterations"
          },
          {
            "name": "ir_ifThenElse",
            "value": 2.44148,
            "range": "± 273.266",
            "unit": "us",
            "extra": "100 samples\n14 iterations"
          },
          {
            "name": "ir_deeplyNestedIfElse",
            "value": 5.9351,
            "range": "± 442.969",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "ir_loop",
            "value": 2.74735,
            "range": "± 277.113",
            "unit": "us",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "ir_ifInsideLoop",
            "value": 5.3287,
            "range": "± 744.589",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "ir_loopDirectCall",
            "value": 2.98475,
            "range": "± 274.655",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_pointerLoop",
            "value": 3.55989,
            "range": "± 560.516",
            "unit": "us",
            "extra": "100 samples\n10 iterations"
          },
          {
            "name": "ir_staticLoop",
            "value": 2.19212,
            "range": "± 233.537",
            "unit": "us",
            "extra": "100 samples\n15 iterations"
          },
          {
            "name": "ir_fibonacci",
            "value": 2.90416,
            "range": "± 235.213",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_gcd",
            "value": 2.4573,
            "range": "± 262.454",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "comp_mlir_add",
            "value": 7.96491,
            "range": "± 164.386",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifThenElse",
            "value": 8.75966,
            "range": "± 369.145",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_deeplyNestedIfElse",
            "value": 7.48496,
            "range": "± 156.641",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loop",
            "value": 9.97894,
            "range": "± 537.706",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifInsideLoop",
            "value": 30.5576,
            "range": "± 747.784",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loopDirectCall",
            "value": 14.0128,
            "range": "± 217.307",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_pointerLoop",
            "value": 30.3953,
            "range": "± 985.786",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_staticLoop",
            "value": 7.42054,
            "range": "± 131.823",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_fibonacci",
            "value": 13.0404,
            "range": "± 581.679",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_gcd",
            "value": 12.5059,
            "range": "± 716.798",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_mlir_add",
            "value": 3.51092,
            "range": "± 0.449752",
            "unit": "ns",
            "extra": "100 samples\n8434 iterations"
          },
          {
            "name": "exec_mlir_fibonacci",
            "value": 4.84706,
            "range": "± 702.799",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "exec_mlir_sum",
            "value": 561.858,
            "range": "± 29.1339",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_add",
            "value": 4.41835,
            "range": "± 0.435463",
            "unit": "ns",
            "extra": "100 samples\n6775 iterations"
          },
          {
            "name": "exec_cpp_fibonacci",
            "value": 95.5666,
            "range": "± 12.0692",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_sum",
            "value": 36.008,
            "range": "± 188.324",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_add",
            "value": 30.4372,
            "range": "± 3.51041",
            "unit": "ns",
            "extra": "100 samples\n1022 iterations"
          },
          {
            "name": "exec_bc_fibonacci",
            "value": 911.579,
            "range": "± 7.36156",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_sum",
            "value": 196.104,
            "range": "± 272.567",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          }
        ]
      },
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
          "id": "81ba86fb9c9fe7e919d141969caf50c4458d0285",
          "message": "CI: add format check",
          "timestamp": "2025-08-01T14:03:18+02:00",
          "tree_id": "1edf3dba0674eb9f44893ec07f53a8835baa6295",
          "url": "https://github.com/fwc/nautilus/commit/81ba86fb9c9fe7e919d141969caf50c4458d0285"
        },
        "date": 1754050207685,
        "tool": "catch2",
        "benches": [
          {
            "name": "trace_add",
            "value": 1.34584,
            "range": "± 120.552",
            "unit": "us",
            "extra": "100 samples\n24 iterations"
          },
          {
            "name": "trace_ifThenElse",
            "value": 11.4226,
            "range": "± 1.02857",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_deeplyNestedIfElse",
            "value": 35.282,
            "range": "± 3.80796",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "trace_loop",
            "value": 11.3298,
            "range": "± 1.10516",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_ifInsideLoop",
            "value": 22.2135,
            "range": "± 1.99894",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_loopDirectCall",
            "value": 11.7561,
            "range": "± 1.45394",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_pointerLoop",
            "value": 16.8458,
            "range": "± 2.10167",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_staticLoop",
            "value": 12.0831,
            "range": "± 802.964",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_fibonacci",
            "value": 12.7631,
            "range": "± 1.35339",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_gcd",
            "value": 10.4393,
            "range": "± 1.05677",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "ssa_add",
            "value": 114.09,
            "range": "± 11.3",
            "unit": "ns",
            "extra": "100 samples\n276 iterations"
          },
          {
            "name": "ssa_ifThenElse",
            "value": 372.641,
            "range": "± 22.1372",
            "unit": "ns",
            "extra": "100 samples\n83 iterations"
          },
          {
            "name": "ssa_deeplyNestedIfElse",
            "value": 975.358,
            "range": "± 70.863",
            "unit": "ns",
            "extra": "100 samples\n33 iterations"
          },
          {
            "name": "ssa_loop",
            "value": 384.053,
            "range": "± 21.9837",
            "unit": "ns",
            "extra": "100 samples\n81 iterations"
          },
          {
            "name": "ssa_ifInsideLoop",
            "value": 715.379,
            "range": "± 38.4824",
            "unit": "ns",
            "extra": "100 samples\n45 iterations"
          },
          {
            "name": "ssa_loopDirectCall",
            "value": 425.741,
            "range": "± 29.803",
            "unit": "ns",
            "extra": "100 samples\n75 iterations"
          },
          {
            "name": "ssa_pointerLoop",
            "value": 495.862,
            "range": "± 31.5573",
            "unit": "ns",
            "extra": "100 samples\n66 iterations"
          },
          {
            "name": "ssa_staticLoop",
            "value": 380.576,
            "range": "± 49.6368",
            "unit": "ns",
            "extra": "100 samples\n82 iterations"
          },
          {
            "name": "ssa_fibonacci",
            "value": 437.367,
            "range": "± 43.5268",
            "unit": "ns",
            "extra": "100 samples\n76 iterations"
          },
          {
            "name": "ssa_gcd",
            "value": 365.849,
            "range": "± 29.0818",
            "unit": "ns",
            "extra": "100 samples\n87 iterations"
          },
          {
            "name": "ir_add",
            "value": 502.11,
            "range": "± 22.8465",
            "unit": "ns",
            "extra": "100 samples\n61 iterations"
          },
          {
            "name": "ir_ifThenElse",
            "value": 2.30176,
            "range": "± 294.558",
            "unit": "us",
            "extra": "100 samples\n14 iterations"
          },
          {
            "name": "ir_deeplyNestedIfElse",
            "value": 5.99631,
            "range": "± 475.095",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "ir_loop",
            "value": 2.69886,
            "range": "± 226.491",
            "unit": "us",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "ir_ifInsideLoop",
            "value": 5.0385,
            "range": "± 374.119",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "ir_loopDirectCall",
            "value": 2.90784,
            "range": "± 180.986",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_pointerLoop",
            "value": 3.42271,
            "range": "± 273.643",
            "unit": "us",
            "extra": "100 samples\n10 iterations"
          },
          {
            "name": "ir_staticLoop",
            "value": 2.12423,
            "range": "± 246.825",
            "unit": "us",
            "extra": "100 samples\n15 iterations"
          },
          {
            "name": "ir_fibonacci",
            "value": 2.81596,
            "range": "± 146.73",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_gcd",
            "value": 2.42792,
            "range": "± 247.555",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "comp_mlir_add",
            "value": 7.88937,
            "range": "± 118.204",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifThenElse",
            "value": 8.54546,
            "range": "± 207.728",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_deeplyNestedIfElse",
            "value": 7.4936,
            "range": "± 130.465",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loop",
            "value": 9.5768,
            "range": "± 243.62",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifInsideLoop",
            "value": 29.8664,
            "range": "± 323.743",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loopDirectCall",
            "value": 13.9411,
            "range": "± 267.766",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_pointerLoop",
            "value": 29.2258,
            "range": "± 432.414",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_staticLoop",
            "value": 7.38932,
            "range": "± 131.777",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_fibonacci",
            "value": 12.6126,
            "range": "± 176.655",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_gcd",
            "value": 11.707,
            "range": "± 174.87",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_mlir_add",
            "value": 3.44529,
            "range": "± 0.2723",
            "unit": "ns",
            "extra": "100 samples\n8658 iterations"
          },
          {
            "name": "exec_mlir_fibonacci",
            "value": 4.73547,
            "range": "± 290.177",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "exec_mlir_sum",
            "value": 524.203,
            "range": "± 16.4133",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_add",
            "value": 4.48641,
            "range": "± 0.664679",
            "unit": "ns",
            "extra": "100 samples\n6794 iterations"
          },
          {
            "name": "exec_cpp_fibonacci",
            "value": 95.6538,
            "range": "± 8.2652",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_sum",
            "value": 35.868,
            "range": "± 93.442",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_add",
            "value": 30.3601,
            "range": "± 3.73447",
            "unit": "ns",
            "extra": "100 samples\n1022 iterations"
          },
          {
            "name": "exec_bc_fibonacci",
            "value": 917.322,
            "range": "± 25.1345",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_sum",
            "value": 196.049,
            "range": "± 344.451",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          }
        ]
      },
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
          "id": "e0d77d21d471a08af9df1498453bc758c726d2a2",
          "message": "CI: add format check",
          "timestamp": "2025-08-01T14:04:52+02:00",
          "tree_id": "17cff90e7fa42cd130c8f032892fb1776be5aac4",
          "url": "https://github.com/fwc/nautilus/commit/e0d77d21d471a08af9df1498453bc758c726d2a2"
        },
        "date": 1754050230451,
        "tool": "catch2",
        "benches": [
          {
            "name": "trace_add",
            "value": 1.3743,
            "range": "± 266.064",
            "unit": "us",
            "extra": "100 samples\n23 iterations"
          },
          {
            "name": "trace_ifThenElse",
            "value": 11.349,
            "range": "± 1.54045",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_deeplyNestedIfElse",
            "value": 34.8789,
            "range": "± 4.50146",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "trace_loop",
            "value": 11.4069,
            "range": "± 1.48378",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_ifInsideLoop",
            "value": 22.2358,
            "range": "± 2.82645",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_loopDirectCall",
            "value": 11.6761,
            "range": "± 1.17596",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_pointerLoop",
            "value": 16.9724,
            "range": "± 2.53424",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_staticLoop",
            "value": 12.5222,
            "range": "± 896.814",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_fibonacci",
            "value": 13.0234,
            "range": "± 2.14983",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_gcd",
            "value": 10.4421,
            "range": "± 1.41665",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "ssa_add",
            "value": 116.115,
            "range": "± 21.1317",
            "unit": "ns",
            "extra": "100 samples\n274 iterations"
          },
          {
            "name": "ssa_ifThenElse",
            "value": 368.118,
            "range": "± 16.4467",
            "unit": "ns",
            "extra": "100 samples\n83 iterations"
          },
          {
            "name": "ssa_deeplyNestedIfElse",
            "value": 965.688,
            "range": "± 54.8672",
            "unit": "ns",
            "extra": "100 samples\n33 iterations"
          },
          {
            "name": "ssa_loop",
            "value": 378.641,
            "range": "± 17.9944",
            "unit": "ns",
            "extra": "100 samples\n81 iterations"
          },
          {
            "name": "ssa_ifInsideLoop",
            "value": 724.532,
            "range": "± 56.3656",
            "unit": "ns",
            "extra": "100 samples\n45 iterations"
          },
          {
            "name": "ssa_loopDirectCall",
            "value": 407.595,
            "range": "± 20.7008",
            "unit": "ns",
            "extra": "100 samples\n75 iterations"
          },
          {
            "name": "ssa_pointerLoop",
            "value": 495.705,
            "range": "± 33.4725",
            "unit": "ns",
            "extra": "100 samples\n66 iterations"
          },
          {
            "name": "ssa_staticLoop",
            "value": 368.684,
            "range": "± 31.9141",
            "unit": "ns",
            "extra": "100 samples\n81 iterations"
          },
          {
            "name": "ssa_fibonacci",
            "value": 416.843,
            "range": "± 23.1264",
            "unit": "ns",
            "extra": "100 samples\n76 iterations"
          },
          {
            "name": "ssa_gcd",
            "value": 348.648,
            "range": "± 17.0741",
            "unit": "ns",
            "extra": "100 samples\n87 iterations"
          },
          {
            "name": "ir_add",
            "value": 498.853,
            "range": "± 26.6252",
            "unit": "ns",
            "extra": "100 samples\n60 iterations"
          },
          {
            "name": "ir_ifThenElse",
            "value": 2.28468,
            "range": "± 127.312",
            "unit": "us",
            "extra": "100 samples\n14 iterations"
          },
          {
            "name": "ir_deeplyNestedIfElse",
            "value": 5.92419,
            "range": "± 426.073",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "ir_loop",
            "value": 2.65712,
            "range": "± 324.883",
            "unit": "us",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "ir_ifInsideLoop",
            "value": 5.00863,
            "range": "± 305.52",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "ir_loopDirectCall",
            "value": 2.888,
            "range": "± 245.258",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_pointerLoop",
            "value": 3.34534,
            "range": "± 197.06",
            "unit": "us",
            "extra": "100 samples\n10 iterations"
          },
          {
            "name": "ir_staticLoop",
            "value": 2.02062,
            "range": "± 84.4196",
            "unit": "us",
            "extra": "100 samples\n16 iterations"
          },
          {
            "name": "ir_fibonacci",
            "value": 2.81491,
            "range": "± 138.843",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_gcd",
            "value": 2.39539,
            "range": "± 142.938",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "comp_mlir_add",
            "value": 7.94107,
            "range": "± 153.137",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifThenElse",
            "value": 8.51396,
            "range": "± 172.041",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_deeplyNestedIfElse",
            "value": 7.50204,
            "range": "± 121.946",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loop",
            "value": 9.49904,
            "range": "± 156.727",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifInsideLoop",
            "value": 30.2791,
            "range": "± 535.036",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loopDirectCall",
            "value": 14.2706,
            "range": "± 288.326",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_pointerLoop",
            "value": 29.8822,
            "range": "± 369.642",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_staticLoop",
            "value": 7.50058,
            "range": "± 136.7",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_fibonacci",
            "value": 12.9189,
            "range": "± 250.404",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_gcd",
            "value": 12.1553,
            "range": "± 375.703",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_mlir_add",
            "value": 3.54745,
            "range": "± 0.568232",
            "unit": "ns",
            "extra": "100 samples\n8646 iterations"
          },
          {
            "name": "exec_mlir_fibonacci",
            "value": 4.72748,
            "range": "± 306.81",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "exec_mlir_sum",
            "value": 531.349,
            "range": "± 22.2719",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_add",
            "value": 4.50354,
            "range": "± 0.903618",
            "unit": "ns",
            "extra": "100 samples\n6791 iterations"
          },
          {
            "name": "exec_cpp_fibonacci",
            "value": 95.1053,
            "range": "± 8.199",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_sum",
            "value": 35.8887,
            "range": "± 70.6471",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_add",
            "value": 29.6007,
            "range": "± 2.01238",
            "unit": "ns",
            "extra": "100 samples\n1021 iterations"
          },
          {
            "name": "exec_bc_fibonacci",
            "value": 910.692,
            "range": "± 4.89626",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_sum",
            "value": 196.231,
            "range": "± 1.4174",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          }
        ]
      },
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
          "id": "9cdb127891411fc4216b3befbd0844b257ab4040",
          "message": "CI: add format check",
          "timestamp": "2025-08-01T14:06:26+02:00",
          "tree_id": "8fb8324c9c4338ca35785cab2365bab231fd36d3",
          "url": "https://github.com/fwc/nautilus/commit/9cdb127891411fc4216b3befbd0844b257ab4040"
        },
        "date": 1754050399447,
        "tool": "catch2",
        "benches": [
          {
            "name": "trace_add",
            "value": 1.26384,
            "range": "± 57.5461",
            "unit": "us",
            "extra": "100 samples\n24 iterations"
          },
          {
            "name": "trace_ifThenElse",
            "value": 11.2393,
            "range": "± 829.772",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_deeplyNestedIfElse",
            "value": 34.564,
            "range": "± 2.81588",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "trace_loop",
            "value": 11.2419,
            "range": "± 1.14358",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_ifInsideLoop",
            "value": 21.8899,
            "range": "± 1.7096",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_loopDirectCall",
            "value": 11.7004,
            "range": "± 1.10568",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_pointerLoop",
            "value": 16.899,
            "range": "± 1.54638",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_staticLoop",
            "value": 12.3265,
            "range": "± 830.757",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_fibonacci",
            "value": 12.8054,
            "range": "± 1.48634",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_gcd",
            "value": 10.4918,
            "range": "± 800.667",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "ssa_add",
            "value": 108.431,
            "range": "± 4.47663",
            "unit": "ns",
            "extra": "100 samples\n273 iterations"
          },
          {
            "name": "ssa_ifThenElse",
            "value": 375.159,
            "range": "± 22.7412",
            "unit": "ns",
            "extra": "100 samples\n83 iterations"
          },
          {
            "name": "ssa_deeplyNestedIfElse",
            "value": 958.3,
            "range": "± 22.0499",
            "unit": "ns",
            "extra": "100 samples\n33 iterations"
          },
          {
            "name": "ssa_loop",
            "value": 376.05,
            "range": "± 15.7698",
            "unit": "ns",
            "extra": "100 samples\n81 iterations"
          },
          {
            "name": "ssa_ifInsideLoop",
            "value": 723.652,
            "range": "± 89.9732",
            "unit": "ns",
            "extra": "100 samples\n46 iterations"
          },
          {
            "name": "ssa_loopDirectCall",
            "value": 404.908,
            "range": "± 19.183",
            "unit": "ns",
            "extra": "100 samples\n76 iterations"
          },
          {
            "name": "ssa_pointerLoop",
            "value": 485.885,
            "range": "± 23.1365",
            "unit": "ns",
            "extra": "100 samples\n66 iterations"
          },
          {
            "name": "ssa_staticLoop",
            "value": 385.33,
            "range": "± 70.3421",
            "unit": "ns",
            "extra": "100 samples\n80 iterations"
          },
          {
            "name": "ssa_fibonacci",
            "value": 415.925,
            "range": "± 19.1195",
            "unit": "ns",
            "extra": "100 samples\n76 iterations"
          },
          {
            "name": "ssa_gcd",
            "value": 345.976,
            "range": "± 13.0616",
            "unit": "ns",
            "extra": "100 samples\n85 iterations"
          },
          {
            "name": "ir_add",
            "value": 505.393,
            "range": "± 24.8728",
            "unit": "ns",
            "extra": "100 samples\n60 iterations"
          },
          {
            "name": "ir_ifThenElse",
            "value": 2.28727,
            "range": "± 170.419",
            "unit": "us",
            "extra": "100 samples\n14 iterations"
          },
          {
            "name": "ir_deeplyNestedIfElse",
            "value": 5.95682,
            "range": "± 379.358",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "ir_loop",
            "value": 2.62719,
            "range": "± 161.738",
            "unit": "us",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "ir_ifInsideLoop",
            "value": 4.99994,
            "range": "± 282.988",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "ir_loopDirectCall",
            "value": 2.8829,
            "range": "± 165.068",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_pointerLoop",
            "value": 3.3404,
            "range": "± 208.06",
            "unit": "us",
            "extra": "100 samples\n10 iterations"
          },
          {
            "name": "ir_staticLoop",
            "value": 2.0663,
            "range": "± 119.654",
            "unit": "us",
            "extra": "100 samples\n15 iterations"
          },
          {
            "name": "ir_fibonacci",
            "value": 2.83743,
            "range": "± 154.544",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_gcd",
            "value": 2.3524,
            "range": "± 121.627",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "comp_mlir_add",
            "value": 7.93289,
            "range": "± 120.89",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifThenElse",
            "value": 8.59582,
            "range": "± 188.776",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_deeplyNestedIfElse",
            "value": 7.52218,
            "range": "± 66.5582",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loop",
            "value": 9.5288,
            "range": "± 63.0876",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifInsideLoop",
            "value": 29.7835,
            "range": "± 715.744",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loopDirectCall",
            "value": 13.9303,
            "range": "± 62.872",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_pointerLoop",
            "value": 29.1212,
            "range": "± 166.99",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_staticLoop",
            "value": 7.43474,
            "range": "± 34.828",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_fibonacci",
            "value": 12.795,
            "range": "± 186.064",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_gcd",
            "value": 11.7194,
            "range": "± 50.3911",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_mlir_add",
            "value": 3.4767,
            "range": "± 0.445748",
            "unit": "ns",
            "extra": "100 samples\n8674 iterations"
          },
          {
            "name": "exec_mlir_fibonacci",
            "value": 4.88257,
            "range": "± 698.049",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "exec_mlir_sum",
            "value": 512.911,
            "range": "± 13.1949",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_add",
            "value": 4.36359,
            "range": "± 0.24787",
            "unit": "ns",
            "extra": "100 samples\n6801 iterations"
          },
          {
            "name": "exec_cpp_fibonacci",
            "value": 95.6254,
            "range": "± 8.91416",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_sum",
            "value": 35.882,
            "range": "± 67.158",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_add",
            "value": 30.0791,
            "range": "± 3.218",
            "unit": "ns",
            "extra": "100 samples\n1025 iterations"
          },
          {
            "name": "exec_bc_fibonacci",
            "value": 911.225,
            "range": "± 5.00253",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_sum",
            "value": 196.454,
            "range": "± 2.38327",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          }
        ]
      },
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
          "id": "aa73ee928f291a92852f4355b2b66c03b9b4ca63",
          "message": "CI: add format check",
          "timestamp": "2025-08-01T14:15:41+02:00",
          "tree_id": "b319fe92ee6d918d9b816433f4817541c2e32719",
          "url": "https://github.com/fwc/nautilus/commit/aa73ee928f291a92852f4355b2b66c03b9b4ca63"
        },
        "date": 1754050920350,
        "tool": "catch2",
        "benches": [
          {
            "name": "trace_add",
            "value": 1.26698,
            "range": "± 80.4108",
            "unit": "us",
            "extra": "100 samples\n24 iterations"
          },
          {
            "name": "trace_ifThenElse",
            "value": 11.4148,
            "range": "± 1.48505",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_deeplyNestedIfElse",
            "value": 34.8143,
            "range": "± 5.37736",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "trace_loop",
            "value": 10.719,
            "range": "± 1.49808",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_ifInsideLoop",
            "value": 21.8395,
            "range": "± 2.4188",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_loopDirectCall",
            "value": 11.8283,
            "range": "± 1.5386",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_pointerLoop",
            "value": 16.9699,
            "range": "± 2.35198",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_staticLoop",
            "value": 12.5918,
            "range": "± 1.20113",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_fibonacci",
            "value": 12.8521,
            "range": "± 1.77142",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_gcd",
            "value": 10.4818,
            "range": "± 1.55097",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "ssa_add",
            "value": 108.383,
            "range": "± 4.44991",
            "unit": "ns",
            "extra": "100 samples\n268 iterations"
          },
          {
            "name": "ssa_ifThenElse",
            "value": 373.629,
            "range": "± 21.5867",
            "unit": "ns",
            "extra": "100 samples\n82 iterations"
          },
          {
            "name": "ssa_deeplyNestedIfElse",
            "value": 975.352,
            "range": "± 60.1579",
            "unit": "ns",
            "extra": "100 samples\n33 iterations"
          },
          {
            "name": "ssa_loop",
            "value": 350.895,
            "range": "± 19.2802",
            "unit": "ns",
            "extra": "100 samples\n80 iterations"
          },
          {
            "name": "ssa_ifInsideLoop",
            "value": 711.464,
            "range": "± 52.0357",
            "unit": "ns",
            "extra": "100 samples\n44 iterations"
          },
          {
            "name": "ssa_loopDirectCall",
            "value": 699.039,
            "range": "± 180.681",
            "unit": "ns",
            "extra": "100 samples\n76 iterations"
          },
          {
            "name": "ssa_pointerLoop",
            "value": 485.645,
            "range": "± 23.1511",
            "unit": "ns",
            "extra": "100 samples\n64 iterations"
          },
          {
            "name": "ssa_staticLoop",
            "value": 351.049,
            "range": "± 16.5632",
            "unit": "ns",
            "extra": "100 samples\n78 iterations"
          },
          {
            "name": "ssa_fibonacci",
            "value": 420.68,
            "range": "± 30.2442",
            "unit": "ns",
            "extra": "100 samples\n75 iterations"
          },
          {
            "name": "ssa_gcd",
            "value": 350.948,
            "range": "± 20.6785",
            "unit": "ns",
            "extra": "100 samples\n89 iterations"
          },
          {
            "name": "ir_add",
            "value": 488.517,
            "range": "± 23.6298",
            "unit": "ns",
            "extra": "100 samples\n61 iterations"
          },
          {
            "name": "ir_ifThenElse",
            "value": 2.05958,
            "range": "± 104.532",
            "unit": "us",
            "extra": "100 samples\n14 iterations"
          },
          {
            "name": "ir_deeplyNestedIfElse",
            "value": 5.61007,
            "range": "± 543.091",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "ir_loop",
            "value": 2.65075,
            "range": "± 156.635",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_ifInsideLoop",
            "value": 4.99512,
            "range": "± 308.14",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "ir_loopDirectCall",
            "value": 2.90841,
            "range": "± 176.756",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_pointerLoop",
            "value": 3.35613,
            "range": "± 195.409",
            "unit": "us",
            "extra": "100 samples\n10 iterations"
          },
          {
            "name": "ir_staticLoop",
            "value": 2.04031,
            "range": "± 103.414",
            "unit": "us",
            "extra": "100 samples\n15 iterations"
          },
          {
            "name": "ir_fibonacci",
            "value": 2.84519,
            "range": "± 179.761",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_gcd",
            "value": 2.37766,
            "range": "± 171.049",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "comp_mlir_add",
            "value": 7.87633,
            "range": "± 170.291",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifThenElse",
            "value": 8.40457,
            "range": "± 179.389",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_deeplyNestedIfElse",
            "value": 7.42711,
            "range": "± 138.001",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loop",
            "value": 9.54244,
            "range": "± 393.928",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifInsideLoop",
            "value": 29.6205,
            "range": "± 596.162",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loopDirectCall",
            "value": 13.9101,
            "range": "± 271.219",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_pointerLoop",
            "value": 29.2778,
            "range": "± 694.097",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_staticLoop",
            "value": 7.39897,
            "range": "± 185.84",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_fibonacci",
            "value": 12.7132,
            "range": "± 277.023",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_gcd",
            "value": 11.6957,
            "range": "± 214.724",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_mlir_add",
            "value": 3.48523,
            "range": "± 0.455442",
            "unit": "ns",
            "extra": "100 samples\n8499 iterations"
          },
          {
            "name": "exec_mlir_fibonacci",
            "value": 4.75556,
            "range": "± 451.666",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "exec_mlir_sum",
            "value": 223.867,
            "range": "± 21.0605",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_add",
            "value": 4.40019,
            "range": "± 0.507681",
            "unit": "ns",
            "extra": "100 samples\n6691 iterations"
          },
          {
            "name": "exec_cpp_fibonacci",
            "value": 94.4297,
            "range": "± 8.48791",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_sum",
            "value": 35.2147,
            "range": "± 469.065",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_add",
            "value": 29.3162,
            "range": "± 2.40667",
            "unit": "ns",
            "extra": "100 samples\n1006 iterations"
          },
          {
            "name": "exec_bc_fibonacci",
            "value": 911.417,
            "range": "± 5.42031",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_sum",
            "value": 194.438,
            "range": "± 1.94786",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          }
        ]
      },
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
          "id": "22d163367eee19a2e5341b15c148229e86531d4d",
          "message": "format",
          "timestamp": "2025-08-01T14:17:06+02:00",
          "tree_id": "a29f0dad40401caa8031c0839afff87c4b560752",
          "url": "https://github.com/fwc/nautilus/commit/22d163367eee19a2e5341b15c148229e86531d4d"
        },
        "date": 1754051049665,
        "tool": "catch2",
        "benches": [
          {
            "name": "trace_add",
            "value": 1.33595,
            "range": "± 125.514",
            "unit": "us",
            "extra": "100 samples\n24 iterations"
          },
          {
            "name": "trace_ifThenElse",
            "value": 11.4216,
            "range": "± 867.971",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_deeplyNestedIfElse",
            "value": 34.8112,
            "range": "± 3.22138",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "trace_loop",
            "value": 11.2489,
            "range": "± 806.276",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_ifInsideLoop",
            "value": 22.042,
            "range": "± 1.7935",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_loopDirectCall",
            "value": 11.6098,
            "range": "± 891.231",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_pointerLoop",
            "value": 17.0731,
            "range": "± 1.6017",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_staticLoop",
            "value": 12.5514,
            "range": "± 908.025",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_fibonacci",
            "value": 12.6732,
            "range": "± 1.23268",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_gcd",
            "value": 10.3899,
            "range": "± 781.946",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "ssa_add",
            "value": 115.521,
            "range": "± 9.27298",
            "unit": "ns",
            "extra": "100 samples\n273 iterations"
          },
          {
            "name": "ssa_ifThenElse",
            "value": 371.236,
            "range": "± 19.2951",
            "unit": "ns",
            "extra": "100 samples\n84 iterations"
          },
          {
            "name": "ssa_deeplyNestedIfElse",
            "value": 988.344,
            "range": "± 120.214",
            "unit": "ns",
            "extra": "100 samples\n33 iterations"
          },
          {
            "name": "ssa_loop",
            "value": 402.433,
            "range": "± 40.2876",
            "unit": "ns",
            "extra": "100 samples\n80 iterations"
          },
          {
            "name": "ssa_ifInsideLoop",
            "value": 730.989,
            "range": "± 62.8155",
            "unit": "ns",
            "extra": "100 samples\n45 iterations"
          },
          {
            "name": "ssa_loopDirectCall",
            "value": 415.81,
            "range": "± 26.7501",
            "unit": "ns",
            "extra": "100 samples\n73 iterations"
          },
          {
            "name": "ssa_pointerLoop",
            "value": 512.142,
            "range": "± 47.8345",
            "unit": "ns",
            "extra": "100 samples\n65 iterations"
          },
          {
            "name": "ssa_staticLoop",
            "value": 367.685,
            "range": "± 42.0716",
            "unit": "ns",
            "extra": "100 samples\n80 iterations"
          },
          {
            "name": "ssa_fibonacci",
            "value": 430.67,
            "range": "± 41.0341",
            "unit": "ns",
            "extra": "100 samples\n75 iterations"
          },
          {
            "name": "ssa_gcd",
            "value": 356.37,
            "range": "± 26.6737",
            "unit": "ns",
            "extra": "100 samples\n87 iterations"
          },
          {
            "name": "ir_add",
            "value": 550.761,
            "range": "± 119.521",
            "unit": "ns",
            "extra": "100 samples\n62 iterations"
          },
          {
            "name": "ir_ifThenElse",
            "value": 2.35504,
            "range": "± 212.5",
            "unit": "us",
            "extra": "100 samples\n14 iterations"
          },
          {
            "name": "ir_deeplyNestedIfElse",
            "value": 5.8703,
            "range": "± 363.554",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "ir_loop",
            "value": 2.70745,
            "range": "± 295.177",
            "unit": "us",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "ir_ifInsideLoop",
            "value": 5.07707,
            "range": "± 367.286",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "ir_loopDirectCall",
            "value": 2.98347,
            "range": "± 395.248",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_pointerLoop",
            "value": 3.39482,
            "range": "± 233.39",
            "unit": "us",
            "extra": "100 samples\n10 iterations"
          },
          {
            "name": "ir_staticLoop",
            "value": 2.12435,
            "range": "± 194.993",
            "unit": "us",
            "extra": "100 samples\n16 iterations"
          },
          {
            "name": "ir_fibonacci",
            "value": 2.86444,
            "range": "± 214.178",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_gcd",
            "value": 2.4305,
            "range": "± 197.357",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "comp_mlir_add",
            "value": 7.83439,
            "range": "± 70.7164",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifThenElse",
            "value": 8.45118,
            "range": "± 29.4181",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_deeplyNestedIfElse",
            "value": 7.43606,
            "range": "± 58.5481",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loop",
            "value": 9.4773,
            "range": "± 44.8237",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifInsideLoop",
            "value": 29.5936,
            "range": "± 91.8533",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loopDirectCall",
            "value": 13.945,
            "range": "± 103.012",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_pointerLoop",
            "value": 29.2366,
            "range": "± 532.69",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_staticLoop",
            "value": 7.39506,
            "range": "± 140.713",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_fibonacci",
            "value": 12.652,
            "range": "± 184.031",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_gcd",
            "value": 11.6527,
            "range": "± 169.817",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_mlir_add",
            "value": 3.45113,
            "range": "± 0.30713",
            "unit": "ns",
            "extra": "100 samples\n8621 iterations"
          },
          {
            "name": "exec_mlir_fibonacci",
            "value": 4.83679,
            "range": "± 639.88",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "exec_mlir_sum",
            "value": 209.849,
            "range": "± 14.5327",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_add",
            "value": 4.43009,
            "range": "± 0.759132",
            "unit": "ns",
            "extra": "100 samples\n6799 iterations"
          },
          {
            "name": "exec_cpp_fibonacci",
            "value": 95.114,
            "range": "± 7.59478",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_sum",
            "value": 35.4307,
            "range": "± 91.3524",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_add",
            "value": 30.2524,
            "range": "± 2.92712",
            "unit": "ns",
            "extra": "100 samples\n1022 iterations"
          },
          {
            "name": "exec_bc_fibonacci",
            "value": 912.33,
            "range": "± 7.57707",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_sum",
            "value": 195.739,
            "range": "± 619.157",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          }
        ]
      },
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
          "id": "e019ccd341b859dc6ba8148026ca2c1abd08d284",
          "message": "CI: use homebrew clang-18 on macos",
          "timestamp": "2025-08-01T14:20:12+02:00",
          "tree_id": "845e3dc3f3686624e570f26f314f68aee8540b94",
          "url": "https://github.com/fwc/nautilus/commit/e019ccd341b859dc6ba8148026ca2c1abd08d284"
        },
        "date": 1754051203534,
        "tool": "catch2",
        "benches": [
          {
            "name": "trace_add",
            "value": 1.29786,
            "range": "± 82.6771",
            "unit": "us",
            "extra": "100 samples\n24 iterations"
          },
          {
            "name": "trace_ifThenElse",
            "value": 11.3718,
            "range": "± 1.38506",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_deeplyNestedIfElse",
            "value": 34.7875,
            "range": "± 4.76416",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "trace_loop",
            "value": 11.331,
            "range": "± 1.6881",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_ifInsideLoop",
            "value": 22.0698,
            "range": "± 2.58422",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_loopDirectCall",
            "value": 11.8037,
            "range": "± 1.73099",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_pointerLoop",
            "value": 16.7476,
            "range": "± 2.58821",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_staticLoop",
            "value": 10.8824,
            "range": "± 1.0335",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_fibonacci",
            "value": 12.7441,
            "range": "± 1.72503",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_gcd",
            "value": 10.6062,
            "range": "± 1.51591",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "ssa_add",
            "value": 113.585,
            "range": "± 10.9105",
            "unit": "ns",
            "extra": "100 samples\n264 iterations"
          },
          {
            "name": "ssa_ifThenElse",
            "value": 383.768,
            "range": "± 31.5162",
            "unit": "ns",
            "extra": "100 samples\n84 iterations"
          },
          {
            "name": "ssa_deeplyNestedIfElse",
            "value": 982.347,
            "range": "± 63.0377",
            "unit": "ns",
            "extra": "100 samples\n33 iterations"
          },
          {
            "name": "ssa_loop",
            "value": 392.149,
            "range": "± 27.0636",
            "unit": "ns",
            "extra": "100 samples\n82 iterations"
          },
          {
            "name": "ssa_ifInsideLoop",
            "value": 727.154,
            "range": "± 54.1745",
            "unit": "ns",
            "extra": "100 samples\n46 iterations"
          },
          {
            "name": "ssa_loopDirectCall",
            "value": 415.027,
            "range": "± 28.0095",
            "unit": "ns",
            "extra": "100 samples\n75 iterations"
          },
          {
            "name": "ssa_pointerLoop",
            "value": 491.859,
            "range": "± 47.4773",
            "unit": "ns",
            "extra": "100 samples\n67 iterations"
          },
          {
            "name": "ssa_staticLoop",
            "value": 375.083,
            "range": "± 49.4273",
            "unit": "ns",
            "extra": "100 samples\n79 iterations"
          },
          {
            "name": "ssa_fibonacci",
            "value": 418.702,
            "range": "± 15.6868",
            "unit": "ns",
            "extra": "100 samples\n76 iterations"
          },
          {
            "name": "ssa_gcd",
            "value": 350.383,
            "range": "± 17.6442",
            "unit": "ns",
            "extra": "100 samples\n89 iterations"
          },
          {
            "name": "ir_add",
            "value": 541.108,
            "range": "± 31.1404",
            "unit": "ns",
            "extra": "100 samples\n57 iterations"
          },
          {
            "name": "ir_ifThenElse",
            "value": 2.33674,
            "range": "± 150.769",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "ir_deeplyNestedIfElse",
            "value": 6.02079,
            "range": "± 546.806",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "ir_loop",
            "value": 2.70204,
            "range": "± 199.353",
            "unit": "us",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "ir_ifInsideLoop",
            "value": 5.09006,
            "range": "± 543.775",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "ir_loopDirectCall",
            "value": 2.96889,
            "range": "± 224.213",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_pointerLoop",
            "value": 3.51477,
            "range": "± 277.929",
            "unit": "us",
            "extra": "100 samples\n10 iterations"
          },
          {
            "name": "ir_staticLoop",
            "value": 2.13704,
            "range": "± 172.795",
            "unit": "us",
            "extra": "100 samples\n15 iterations"
          },
          {
            "name": "ir_fibonacci",
            "value": 2.86903,
            "range": "± 172.547",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_gcd",
            "value": 2.4251,
            "range": "± 111.598",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "comp_mlir_add",
            "value": 8.15882,
            "range": "± 175.771",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifThenElse",
            "value": 8.83655,
            "range": "± 193.299",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_deeplyNestedIfElse",
            "value": 7.76693,
            "range": "± 222.442",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loop",
            "value": 10.2185,
            "range": "± 180.343",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifInsideLoop",
            "value": 31.1443,
            "range": "± 502.516",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loopDirectCall",
            "value": 14.8283,
            "range": "± 299.828",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_pointerLoop",
            "value": 30.9727,
            "range": "± 726.148",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_staticLoop",
            "value": 7.58262,
            "range": "± 147.76",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_fibonacci",
            "value": 13.4429,
            "range": "± 450.068",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_gcd",
            "value": 12.5059,
            "range": "± 390.219",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_mlir_add",
            "value": 3.52093,
            "range": "± 0.499985",
            "unit": "ns",
            "extra": "100 samples\n8713 iterations"
          },
          {
            "name": "exec_mlir_fibonacci",
            "value": 4.77831,
            "range": "± 437.701",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "exec_mlir_sum",
            "value": 598.233,
            "range": "± 32.067",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_add",
            "value": 4.36523,
            "range": "± 0.246051",
            "unit": "ns",
            "extra": "100 samples\n6835 iterations"
          },
          {
            "name": "exec_cpp_fibonacci",
            "value": 96.1567,
            "range": "± 9.16185",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_sum",
            "value": 35.9835,
            "range": "± 442.342",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_add",
            "value": 30.2658,
            "range": "± 3.00258",
            "unit": "ns",
            "extra": "100 samples\n1029 iterations"
          },
          {
            "name": "exec_bc_fibonacci",
            "value": 917.926,
            "range": "± 33.0786",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_sum",
            "value": 196.093,
            "range": "± 345.952",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          }
        ]
      },
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
          "id": "03ec5e9cb07bb00b32fdf9b410fc0d026335873e",
          "message": "fixup! CI: add format check",
          "timestamp": "2025-08-01T14:26:36+02:00",
          "tree_id": "d390836541775d366f38569745680f8f1c486ad4",
          "url": "https://github.com/fwc/nautilus/commit/03ec5e9cb07bb00b32fdf9b410fc0d026335873e"
        },
        "date": 1754051536899,
        "tool": "catch2",
        "benches": [
          {
            "name": "trace_add",
            "value": 1.38304,
            "range": "± 125.682",
            "unit": "us",
            "extra": "100 samples\n23 iterations"
          },
          {
            "name": "trace_ifThenElse",
            "value": 11.4053,
            "range": "± 1.37741",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_deeplyNestedIfElse",
            "value": 35.17,
            "range": "± 5.44464",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "trace_loop",
            "value": 11.3066,
            "range": "± 1.49334",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_ifInsideLoop",
            "value": 22.0529,
            "range": "± 2.69657",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_loopDirectCall",
            "value": 11.8185,
            "range": "± 1.93918",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_pointerLoop",
            "value": 17.7874,
            "range": "± 3.96372",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_staticLoop",
            "value": 11.0255,
            "range": "± 1.03885",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_fibonacci",
            "value": 12.9373,
            "range": "± 1.79176",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_gcd",
            "value": 10.4776,
            "range": "± 1.63038",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "ssa_add",
            "value": 110.083,
            "range": "± 7.07673",
            "unit": "ns",
            "extra": "100 samples\n275 iterations"
          },
          {
            "name": "ssa_ifThenElse",
            "value": 372.742,
            "range": "± 23.6073",
            "unit": "ns",
            "extra": "100 samples\n83 iterations"
          },
          {
            "name": "ssa_deeplyNestedIfElse",
            "value": 981.141,
            "range": "± 50.5471",
            "unit": "ns",
            "extra": "100 samples\n33 iterations"
          },
          {
            "name": "ssa_loop",
            "value": 381.897,
            "range": "± 20.4587",
            "unit": "ns",
            "extra": "100 samples\n81 iterations"
          },
          {
            "name": "ssa_ifInsideLoop",
            "value": 717.916,
            "range": "± 37.6811",
            "unit": "ns",
            "extra": "100 samples\n45 iterations"
          },
          {
            "name": "ssa_loopDirectCall",
            "value": 415.954,
            "range": "± 23.6381",
            "unit": "ns",
            "extra": "100 samples\n75 iterations"
          },
          {
            "name": "ssa_pointerLoop",
            "value": 489.114,
            "range": "± 28.013",
            "unit": "ns",
            "extra": "100 samples\n65 iterations"
          },
          {
            "name": "ssa_staticLoop",
            "value": 396.412,
            "range": "± 40.8595",
            "unit": "ns",
            "extra": "100 samples\n78 iterations"
          },
          {
            "name": "ssa_fibonacci",
            "value": 426.646,
            "range": "± 23.9999",
            "unit": "ns",
            "extra": "100 samples\n74 iterations"
          },
          {
            "name": "ssa_gcd",
            "value": 346.603,
            "range": "± 16.6371",
            "unit": "ns",
            "extra": "100 samples\n88 iterations"
          },
          {
            "name": "ir_add",
            "value": 540.8,
            "range": "± 25.3124",
            "unit": "ns",
            "extra": "100 samples\n56 iterations"
          },
          {
            "name": "ir_ifThenElse",
            "value": 2.37507,
            "range": "± 142.391",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "ir_deeplyNestedIfElse",
            "value": 6.14416,
            "range": "± 596.668",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "ir_loop",
            "value": 2.68341,
            "range": "± 126.518",
            "unit": "us",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "ir_ifInsideLoop",
            "value": 5.09132,
            "range": "± 315.516",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "ir_loopDirectCall",
            "value": 2.9809,
            "range": "± 226.114",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_pointerLoop",
            "value": 3.56171,
            "range": "± 550.701",
            "unit": "us",
            "extra": "100 samples\n9 iterations"
          },
          {
            "name": "ir_staticLoop",
            "value": 2.28017,
            "range": "± 134.141",
            "unit": "us",
            "extra": "100 samples\n14 iterations"
          },
          {
            "name": "ir_fibonacci",
            "value": 2.93368,
            "range": "± 195.844",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_gcd",
            "value": 2.37102,
            "range": "± 73.6259",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "comp_mlir_add",
            "value": 7.95597,
            "range": "± 153.185",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifThenElse",
            "value": 8.72277,
            "range": "± 231.247",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_deeplyNestedIfElse",
            "value": 7.54758,
            "range": "± 134.982",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loop",
            "value": 9.7635,
            "range": "± 271.335",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifInsideLoop",
            "value": 31.0071,
            "range": "± 676.639",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loopDirectCall",
            "value": 14.3023,
            "range": "± 302.794",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_pointerLoop",
            "value": 30.499,
            "range": "± 534.796",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_staticLoop",
            "value": 7.50903,
            "range": "± 134.678",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_fibonacci",
            "value": 12.9958,
            "range": "± 243.721",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_gcd",
            "value": 11.9727,
            "range": "± 234.843",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_mlir_add",
            "value": 3.4446,
            "range": "± 0.27938",
            "unit": "ns",
            "extra": "100 samples\n8651 iterations"
          },
          {
            "name": "exec_mlir_fibonacci",
            "value": 4.76823,
            "range": "± 454.426",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "exec_mlir_sum",
            "value": 583.695,
            "range": "± 28.967",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_add",
            "value": 4.37245,
            "range": "± 0.40684",
            "unit": "ns",
            "extra": "100 samples\n6786 iterations"
          },
          {
            "name": "exec_cpp_fibonacci",
            "value": 94.8331,
            "range": "± 8.40398",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_cpp_sum",
            "value": 35.9162,
            "range": "± 86.101",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_add",
            "value": 29.1886,
            "range": "± 0.761511",
            "unit": "ns",
            "extra": "100 samples\n1021 iterations"
          },
          {
            "name": "exec_bc_fibonacci",
            "value": 911.417,
            "range": "± 5.1601",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_bc_sum",
            "value": 196.045,
            "range": "± 261.868",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          }
        ]
      }
    ]
  }
}