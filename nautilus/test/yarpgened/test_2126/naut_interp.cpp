/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2126
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2126
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
void test(val<signed char> var_4, val<unsigned int> var_6, val<unsigned short> var_11, val<bool> var_13, val<int> var_14, val<int> zero, val<short*> var_17, val<int*> var_18) {
    *var_17 = ((/* implicit */val<short>) max((*var_17), (((/* implicit */val<short>) var_13))));
    *var_18 = ((((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) (val<unsigned short>)8706)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) : (var_6)))))) ? ((-(((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_13)), (var_11)))))) : (((((/* implicit */val<int>) ((val<signed char>) var_14))) | ((-(((/* implicit */val<int>) var_4)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-1;
unsigned int var_6 = 3634297233U;
unsigned short var_11 = (unsigned short)6114;
bool var_13 = (bool)1;
int var_14 = 695150762;
int zero = 0;
short var_17 = (short)-11120;
int var_18 = 1962483126;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)1;
    value_mismatch |= var_18 != -6114;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_11, var_13, var_14, zero, &var_17, &var_18);
  checksum();
}
