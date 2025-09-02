/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3108
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3108
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
void test(val<short> var_0, val<signed char> var_2, val<unsigned int> var_3, val<unsigned long long int> var_5, val<short> var_6, val<short> var_9, val<short> var_12, val<unsigned long long int> var_13, val<unsigned char> var_15, val<short> var_16, val<long long int> var_17, val<bool> var_18, val<int> zero, val<bool*> var_19, val<long long int*> var_20, val<long long int*> var_21, val<bool*> var_22, val<bool*> var_23) {
    *var_19 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<signed char>) (val<unsigned char>)32)))) ^ (1039220219U)))) ? (((/* implicit */val<unsigned int>) (~((+(((/* implicit */val<int>) (val<unsigned char>)20))))))) : (2013265920U)));
    *var_20 = ((/* implicit */val<long long int>) ((((((((/* implicit */val<bool>) var_2)) ? (var_13) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_18))))) == (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_9)) ? (var_17) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_15)))))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)223))))) : (((/* implicit */val<int>) var_12))));
    *var_21 &= ((/* implicit */val<long long int>) var_0);
    *var_22 = var_18;
    *var_23 -= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_15))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<short>)17098)) ? (((/* implicit */val<int>) (val<signed char>)107)) : (((/* implicit */val<int>) (val<signed char>)(-127 - 1)))))) : (18446744073709551590ULL)))) ? (max((((((/* implicit */val<bool>) var_3)) ? (var_5) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))))), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_16))))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((var_6), (var_6)))) ? (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) (val<unsigned char>)235)) : (((/* implicit */val<int>) var_0)))) : (((/* implicit */val<int>) ((val<signed char>) (val<short>)-12297))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15690;
signed char var_2 = (signed char)26;
unsigned int var_3 = 2046859074U;
unsigned long long int var_5 = 9715461079258073831ULL;
short var_6 = (short)20265;
short var_9 = (short)20802;
short var_12 = (short)-32500;
unsigned long long int var_13 = 12019832177946137755ULL;
unsigned char var_15 = (unsigned char)29;
short var_16 = (short)14478;
long long int var_17 = 987094019641277758LL;
bool var_18 = (bool)0;
int zero = 0;
bool var_19 = (bool)1;
long long int var_20 = 888680192806473432LL;
long long int var_21 = 7504702640928083359LL;
bool var_22 = (bool)0;
bool var_23 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != -32500LL;
    value_mismatch |= var_21 != 7504702640928080022LL;
    value_mismatch |= var_22 != (bool)0;
    value_mismatch |= var_23 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_6, var_9, var_12, var_13, var_15, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
