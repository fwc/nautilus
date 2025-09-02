/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5322
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5322
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
void test(val<unsigned int> var_14, val<short> var_17, val<bool> var_18, val<int> zero, val<bool*> var_20, val<short*> var_21, val<short*> var_22, val<bool*> var_23, val<bool*> var_24) {
    *var_20 = ((/* implicit */val<bool>) 1592592774U);
    *var_21 = ((/* implicit */val<short>) (((val<bool>)0) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 2702374526U)) ? (1592592792U) : (2702374523U)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (((val<unsigned long long int>) 2702374522U)))) : (((/* implicit */val<unsigned long long int>) (((((val<bool>)1) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)0)))) / (((/* implicit */val<int>) (val<bool>)1)))))));
    *var_22 = ((/* implicit */val<short>) var_14);
    *var_23 ^= ((((/* implicit */val<int>) ((val<short>) var_17))) < ((-(((/* implicit */val<int>) (val<bool>)1)))));
    *var_24 = var_18;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_14 = 1866693144U;
short var_17 = (short)3441;
bool var_18 = (bool)1;
int zero = 0;
bool var_20 = (bool)0;
short var_21 = (short)27123;
short var_22 = (short)8397;
bool var_23 = (bool)1;
bool var_24 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (short)1;
    value_mismatch |= var_22 != (short)31256;
    value_mismatch |= var_23 != (bool)1;
    value_mismatch |= var_24 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_14, var_17, var_18, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
