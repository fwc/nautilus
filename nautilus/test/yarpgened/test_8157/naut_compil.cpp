/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8157
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8157
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
void test(val<unsigned short> var_0, val<unsigned short> var_1, val<unsigned int> var_2, val<signed char> var_3, val<unsigned short> var_4, val<signed char> var_5, val<short> var_6, val<signed char> var_7, val<unsigned long long int> var_8, val<unsigned int> var_10, val<int> zero, val<signed char*> var_11, val<int*> var_12, val<unsigned short*> var_13, val<unsigned char*> var_14, val<unsigned int*> var_15) {
    *var_11 &= ((/* implicit */val<signed char>) ((((/* implicit */val<int>) ((val<unsigned char>) ((var_10) == (1666070061U))))) ^ (((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<bool>) 2628897234U)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) : (1859876184U)))))));
    *var_12 = ((/* implicit */val<int>) ((val<bool>) ((val<signed char>) max((var_0), (var_4)))));
    *var_13 = ((/* implicit */val<unsigned short>) max((*var_13), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((((/* implicit */val<int>) var_4)) != (((/* implicit */val<int>) var_0)))) ? (max((((/* implicit */val<unsigned long long int>) var_7)), (var_8))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((var_2) == (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4)))))))))) || (((/* implicit */val<bool>) ((val<unsigned char>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_4)))))))))));
    *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) var_6))))) ? (((((/* implicit */val<int>) var_1)) ^ (((/* implicit */val<int>) (val<unsigned short>)51735)))) : (((/* implicit */val<int>) ((val<signed char>) var_10)))))) <= (max((((/* implicit */val<unsigned int>) max((((/* implicit */val<short>) var_5)), (var_6)))), (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))) : (4294967273U)))))));
    *var_15 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((((val<int>) var_3)), (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<signed char>)96)) || (((/* implicit */val<bool>) (val<signed char>)-126)))))))) ? (min((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) var_3)), (-9)))), (max((((/* implicit */val<unsigned long long int>) (val<unsigned short>)59445)), (var_8))))) : (((/* implicit */val<unsigned long long int>) ((((val<long long int>) var_0)) * (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((584473565147712701ULL) <= (0ULL))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3644;
unsigned short var_1 = (unsigned short)14412;
unsigned int var_2 = 1645591010U;
signed char var_3 = (signed char)80;
unsigned short var_4 = (unsigned short)26186;
signed char var_5 = (signed char)108;
short var_6 = (short)8176;
signed char var_7 = (signed char)-50;
unsigned long long int var_8 = 10003058504218974274ULL;
unsigned int var_10 = 3263880353U;
int zero = 0;
signed char var_11 = (signed char)-104;
int var_12 = -2045300955;
unsigned short var_13 = (unsigned short)54664;
unsigned char var_14 = (unsigned char)65;
unsigned int var_15 = 2397420036U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)16;
    value_mismatch |= var_12 != 1;
    value_mismatch |= var_13 != (unsigned short)54664;
    value_mismatch |= var_14 != (unsigned char)0;
    value_mismatch |= var_15 != 80U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
