/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2649
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2649
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<int> var_1, val<int> var_3, val<int> var_4, val<int> zero, val<short*> var_12, val<int*> var_13, val<short*> var_14) {
    *var_12 = ((/* implicit */val<short>) ((val<int>) (-(((/* implicit */val<int>) (val<unsigned short>)63009)))));
    *var_13 |= var_4;
    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<int>) max(((val<unsigned short>)63009), ((val<unsigned short>)63031)))) & (max((((/* implicit */val<int>) ((var_1) > (var_4)))), (var_3)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 270618297;
int var_3 = -1376563979;
int var_4 = -632777821;
int zero = 0;
short var_12 = (short)3982;
int var_13 = -549831583;
short var_14 = (short)8922;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)2527;
    value_mismatch |= var_13 != -545603613;
    value_mismatch |= var_14 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, zero, &var_12, &var_13, &var_14);
  checksum();
}
