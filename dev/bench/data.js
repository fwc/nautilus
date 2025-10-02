window.BENCHMARK_DATA = {
  "lastUpdate": 1759413567183,
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
          "id": "9c9dead34571c69544df694b591ef0127d094272",
          "message": "collect_mutation_stuff",
          "timestamp": "2025-10-02T14:03:43+02:00",
          "tree_id": "2ca26e3e9e7959f95cf6b13532642e5daa2745ff",
          "url": "https://github.com/fwc/nautilus/commit/9c9dead34571c69544df694b591ef0127d094272"
        },
        "date": 1759413565946,
        "tool": "catch2",
        "benches": [
          {
            "name": "trace_add",
            "value": 1.35868,
            "range": "± 152.072",
            "unit": "us",
            "extra": "100 samples\n22 iterations"
          },
          {
            "name": "trace_ifThenElse",
            "value": 10.9906,
            "range": "± 2.10058",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_deeplyNestedIfElse",
            "value": 33.7135,
            "range": "± 6.9744",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "trace_loop",
            "value": 10.9805,
            "range": "± 2.08584",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_ifInsideLoop",
            "value": 21.3804,
            "range": "± 3.7415",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_loopDirectCall",
            "value": 11.4923,
            "range": "± 2.10679",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_pointerLoop",
            "value": 17.0789,
            "range": "± 3.71729",
            "unit": "us",
            "extra": "100 samples\n2 iterations"
          },
          {
            "name": "trace_staticLoop",
            "value": 13.2106,
            "range": "± 1.56457",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_fibonacci",
            "value": 12.6228,
            "range": "± 2.55519",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "trace_gcd",
            "value": 10.2248,
            "range": "± 2.03637",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "ssa_add",
            "value": 118.466,
            "range": "± 15.688",
            "unit": "ns",
            "extra": "100 samples\n261 iterations"
          },
          {
            "name": "ssa_ifThenElse",
            "value": 380.416,
            "range": "± 30.4426",
            "unit": "ns",
            "extra": "100 samples\n80 iterations"
          },
          {
            "name": "ssa_deeplyNestedIfElse",
            "value": 1.00789,
            "range": "± 74.6633",
            "unit": "us",
            "extra": "100 samples\n32 iterations"
          },
          {
            "name": "ssa_loop",
            "value": 417.241,
            "range": "± 27.4033",
            "unit": "ns",
            "extra": "100 samples\n74 iterations"
          },
          {
            "name": "ssa_ifInsideLoop",
            "value": 759.054,
            "range": "± 83.7474",
            "unit": "ns",
            "extra": "100 samples\n43 iterations"
          },
          {
            "name": "ssa_loopDirectCall",
            "value": 452.484,
            "range": "± 34.5305",
            "unit": "ns",
            "extra": "100 samples\n70 iterations"
          },
          {
            "name": "ssa_pointerLoop",
            "value": 550.076,
            "range": "± 51.8505",
            "unit": "ns",
            "extra": "100 samples\n59 iterations"
          },
          {
            "name": "ssa_staticLoop",
            "value": 393.797,
            "range": "± 22.3202",
            "unit": "ns",
            "extra": "100 samples\n74 iterations"
          },
          {
            "name": "ssa_fibonacci",
            "value": 460.095,
            "range": "± 20.4792",
            "unit": "ns",
            "extra": "100 samples\n69 iterations"
          },
          {
            "name": "ssa_gcd",
            "value": 376.524,
            "range": "± 19.9062",
            "unit": "ns",
            "extra": "100 samples\n83 iterations"
          },
          {
            "name": "ir_add",
            "value": 516.433,
            "range": "± 37.2681",
            "unit": "ns",
            "extra": "100 samples\n57 iterations"
          },
          {
            "name": "ir_ifThenElse",
            "value": 2.45053,
            "range": "± 298.921",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "ir_deeplyNestedIfElse",
            "value": 5.97407,
            "range": "± 486.47",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "ir_loop",
            "value": 2.7053,
            "range": "± 266.782",
            "unit": "us",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "ir_ifInsideLoop",
            "value": 5.2693,
            "range": "± 668.021",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "ir_loopDirectCall",
            "value": 3.05752,
            "range": "± 250.407",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_pointerLoop",
            "value": 3.46203,
            "range": "± 308.157",
            "unit": "us",
            "extra": "100 samples\n9 iterations"
          },
          {
            "name": "ir_staticLoop",
            "value": 2.1545,
            "range": "± 312.842",
            "unit": "us",
            "extra": "100 samples\n15 iterations"
          },
          {
            "name": "ir_fibonacci",
            "value": 2.97299,
            "range": "± 312.211",
            "unit": "us",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "ir_gcd",
            "value": 2.56059,
            "range": "± 471.946",
            "unit": "us",
            "extra": "100 samples\n13 iterations"
          },
          {
            "name": "comp_mlir_add",
            "value": 8.99878,
            "range": "± 291.303",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifThenElse",
            "value": 9.75109,
            "range": "± 298.813",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_deeplyNestedIfElse",
            "value": 8.80664,
            "range": "± 381",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loop",
            "value": 11.4324,
            "range": "± 457.124",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_ifInsideLoop",
            "value": 34.4276,
            "range": "± 466.765",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_loopDirectCall",
            "value": 16.6071,
            "range": "± 626.549",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_pointerLoop",
            "value": 33.8619,
            "range": "± 467.005",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_staticLoop",
            "value": 8.51782,
            "range": "± 318.516",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_fibonacci",
            "value": 14.8019,
            "range": "± 412.175",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "comp_mlir_gcd",
            "value": 13.7526,
            "range": "± 407.232",
            "unit": "ms",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "exec_mlir_add",
            "value": 3.19816,
            "range": "± 0.463558",
            "unit": "ns",
            "extra": "100 samples\n9516 iterations"
          },
          {
            "name": "exec_mlir_fibonacci",
            "value": 4.75099,
            "range": "± 304.936",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "exec_mlir_sum",
            "value": 584.881,
            "range": "± 24.8959",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          }
        ]
      }
    ]
  }
}