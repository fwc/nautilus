/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1828
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1828
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
void test(val<bool> var_0, val<bool> var_1, val<unsigned short> var_2, val<unsigned char> var_3, val<signed char> var_4, val<unsigned short> var_5, val<short> var_6, val<unsigned short> var_7, val<unsigned char> var_8, val<int> zero, val<signed char*> var_11, val<unsigned int*> var_12, val<unsigned char*> var_13, val<unsigned int*> var_14, val<unsigned int*> var_15) {
    *var_11 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_4)))) : (((/* implicit */val<int>) var_8))))) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_0))));
    *var_12 &= max((((((/* implicit */val<bool>) (val<unsigned short>)37940)) ? (979704619U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))))), (((/* implicit */val<unsigned int>) var_5)));
    *var_13 = ((/* implicit */val<unsigned char>) (((+(((/* implicit */val<int>) var_5)))) * ((~(((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_0))))))));
    *var_14 = ((/* implicit */val<unsigned int>) (-(((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_4)) / (((/* implicit */val<int>) var_1))))) ? (((/* implicit */val<int>) ((((/* implicit */val<int>) var_2)) != (((/* implicit */val<int>) var_5))))) : (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) > (5954369986410809920LL))))))));
    *var_15 = ((/* implicit */val<unsigned int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
bool var_1 = (bool)1;
unsigned short var_2 = (unsigned short)24193;
unsigned char var_3 = (unsigned char)166;
signed char var_4 = (signed char)108;
unsigned short var_5 = (unsigned short)39955;
short var_6 = (short)26902;
unsigned short var_7 = (unsigned short)4875;
unsigned char var_8 = (unsigned char)59;
int zero = 0;
signed char var_11 = (signed char)-64;
unsigned int var_12 = 3615551878U;
unsigned char var_13 = (unsigned char)100;
unsigned int var_14 = 3851826412U;
unsigned int var_15 = 3862371977U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)-90;
    value_mismatch |= var_12 != 301994242U;
    value_mismatch |= var_13 != (unsigned char)28;
    value_mismatch |= var_14 != 4294967295U;
    value_mismatch |= var_15 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
