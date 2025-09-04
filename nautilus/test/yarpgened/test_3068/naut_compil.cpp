/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3068
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3068
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
void test(val<signed char> var_3, val<int> var_5, val<unsigned short> var_6, val<unsigned short> var_11, val<int> var_14, val<int> zero, val<int*> var_16, val<int*> var_17, val<unsigned short*> var_18) {
    *var_16 = var_5;
    *var_17 = var_14;
    *var_18 = ((/* implicit */val<unsigned short>) max(((+(((/* implicit */val<int>) var_11)))), (((((/* implicit */val<bool>) var_11)) ? (((((/* implicit */val<bool>) var_14)) ? (var_14) : (((/* implicit */val<int>) var_6)))) : (((/* implicit */val<int>) var_3))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-120;
int var_5 = 354851548;
unsigned short var_6 = (unsigned short)64605;
unsigned short var_11 = (unsigned short)17167;
int var_14 = -823050637;
int zero = 0;
int var_16 = 1962509427;
int var_17 = -2018905377;
unsigned short var_18 = (unsigned short)60657;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 354851548;
    value_mismatch |= var_17 != -823050637;
    value_mismatch |= var_18 != (unsigned short)17167;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_6, var_11, var_14, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
