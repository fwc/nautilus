window.BENCHMARK_DATA = {
  "lastUpdate": 1754049078400,
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
      }
    ]
  }
}