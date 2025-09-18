/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6172
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6172
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<short> var_0, val<short> var_11, val<short> var_14, val<int> zero, val<int*> var_15, val<short*> var_16, val<long long int*> var_17) {
    *var_15 &= ((/* implicit */val<int>) var_11);
    *var_16 = ((/* implicit */val<short>) min((*var_16), (var_14)));
    *var_17 &= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) (val<signed char>)59)) : (((/* implicit */val<int>) (val<short>)21))))) ? (((/* implicit */val<int>) var_11)) : (-2146336605)))) ? (((/* implicit */val<int>) var_11)) : (2146336604)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6557;
short var_11 = (short)-17064;
short var_14 = (short)-16456;
int zero = 0;
int var_15 = -445266931;
short var_16 = (short)-6190;
long long int var_17 = 1450706124576858248LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != -445283320;
    value_mismatch |= var_16 != (short)-16456;
    value_mismatch |= var_17 != 1450706124576858120LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_11, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
}
