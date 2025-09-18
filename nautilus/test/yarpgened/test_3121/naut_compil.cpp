/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3121
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3121
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
void test(val<signed char> var_0, val<unsigned char> var_3, val<unsigned char> var_6, val<bool> var_12, val<unsigned int> var_14, val<int> zero, val<unsigned char*> var_15, val<unsigned int*> var_16, val<short*> var_17) {
    *var_15 |= ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned int>) var_6)), (((var_14) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0)))))));
    *var_16 = ((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_12))));
    *var_17 &= ((/* implicit */val<short>) ((((/* implicit */val<bool>) min((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)85))) - (2335909991U))), (1959057326U)))) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<signed char>)63))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
unsigned char var_3 = (unsigned char)3;
unsigned char var_6 = (unsigned char)176;
bool var_12 = (bool)0;
unsigned int var_14 = 3540740708U;
int zero = 0;
unsigned char var_15 = (unsigned char)95;
unsigned int var_16 = 2516847019U;
short var_17 = (short)-22126;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)223;
    value_mismatch |= var_16 != 0U;
    value_mismatch |= var_17 != (short)2;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_12, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
}
