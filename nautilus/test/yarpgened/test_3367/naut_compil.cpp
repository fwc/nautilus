/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3367
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3367
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
void test(val<short> var_0, val<bool> var_1, val<signed char> var_3, val<bool> var_4, val<int> var_7, val<short> var_8, val<signed char> var_12, val<signed char> var_13, val<int> zero, val<signed char*> var_14, val<signed char*> var_15, val<signed char*> var_16) {
    *var_14 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((val<int>) ((val<signed char>) 160955848)))) ? (((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) (val<bool>)1)) : (160955864))) < ((-(((/* implicit */val<int>) var_12))))))) : (((((/* implicit */val<bool>) min((((/* implicit */val<short>) var_1)), (var_8)))) ? (((((/* implicit */val<bool>) var_3)) ? (var_7) : (160955838))) : (((/* implicit */val<int>) ((var_7) == (160955848))))))));
    *var_15 |= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) ((val<bool>) var_0))) : ((((-(var_7))) - (((var_4) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) (val<signed char>)-5))))))));
    *var_16 = ((/* implicit */val<signed char>) min((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 1963433780)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_0))))) ? (((/* implicit */val<int>) min((var_3), (((/* implicit */val<signed char>) (val<bool>)1))))) : (((/* implicit */val<int>) ((val<signed char>) var_4))))), (((/* implicit */val<int>) min((var_3), (var_13))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1245;
bool var_1 = (bool)0;
signed char var_3 = (signed char)28;
bool var_4 = (bool)1;
int var_7 = 1513056232;
short var_8 = (short)27883;
signed char var_12 = (signed char)102;
signed char var_13 = (signed char)101;
int zero = 0;
signed char var_14 = (signed char)-112;
signed char var_15 = (signed char)-106;
signed char var_16 = (signed char)-41;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)0;
    value_mismatch |= var_15 != (signed char)-105;
    value_mismatch |= var_16 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_7, var_8, var_12, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
