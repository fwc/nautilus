/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1089
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1089
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
void test(val<signed char> var_0, val<unsigned int> var_2, val<bool> var_3, val<short> var_5, val<unsigned char> var_8, val<unsigned int> var_9, val<bool> var_10, val<int> zero, val<unsigned char*> var_11, val<unsigned int*> var_12, val<unsigned int*> var_13, val<bool*> var_14, val<short*> var_15) {
    *var_11 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<unsigned int>) var_10)), (max((((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))) : (var_9))), (var_2)))));
    *var_12 = ((/* implicit */val<unsigned int>) max((*var_12), (((/* implicit */val<unsigned int>) var_3))));
    *var_13 = ((((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_8))))) / (min((((/* implicit */val<unsigned int>) var_0)), (max((((/* implicit */val<unsigned int>) var_0)), (536870912U))))));
    *var_14 = ((/* implicit */val<bool>) (val<short>)-24862);
    *var_15 = ((/* implicit */val<short>) (-(((((/* implicit */val<bool>) var_9)) ? (((((/* implicit */val<bool>) 7696581394432LL)) ? (536870898U) : (701726884U))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned char>)2)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) (val<bool>)1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-104;
unsigned int var_2 = 3427093037U;
bool var_3 = (bool)1;
short var_5 = (short)12586;
unsigned char var_8 = (unsigned char)25;
unsigned int var_9 = 4165280371U;
bool var_10 = (bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)12;
unsigned int var_12 = 1018730592U;
unsigned int var_13 = 3801492914U;
bool var_14 = (bool)0;
short var_15 = (short)-6925;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)1;
    value_mismatch |= var_12 != 1018730592U;
    value_mismatch |= var_13 != 1U;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (short)14;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
