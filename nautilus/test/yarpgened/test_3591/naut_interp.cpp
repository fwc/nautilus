/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3591
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3591
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
void test(val<unsigned short> var_0, val<short> var_1, val<int> var_2, val<long long int> var_3, val<unsigned char> var_4, val<long long int> var_5, val<unsigned long long int> var_6, val<long long int> var_7, val<long long int> var_8, val<signed char> var_9, val<int> zero, val<long long int*> var_10, val<unsigned short*> var_11, val<short*> var_12, val<long long int*> var_13, val<unsigned long long int*> var_14, val<signed char*> var_15) {
    if (((/* implicit */val<bool>) 3418562240U))
    {
        *var_10 = ((((/* implicit */val<bool>) var_8)) ? (var_8) : (max((var_7), ((-(var_3))))));
        *var_11 = ((/* implicit */val<unsigned short>) var_3);
        *var_12 += ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((val<unsigned int>) ((val<bool>) 10651827415059786726ULL)))) ? (((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_9))))) ? (min((((/* implicit */val<unsigned long long int>) var_2)), (5266072968295197626ULL))) : (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_0))))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((min((3418562240U), (((/* implicit */val<unsigned int>) var_1)))) == (((((/* implicit */val<bool>) var_8)) ? (1159939528U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4)))))))))));
        *var_13 &= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(var_6)))) ? (((/* implicit */val<unsigned long long int>) ((194173936293270918LL) % (var_5)))) : (((7794916658649764889ULL) % (((/* implicit */val<unsigned long long int>) var_3))))))) ? ((~(((((/* implicit */val<unsigned long long int>) -194173936293270919LL)) - (5266072968295197626ULL))))) : (7794916658649764894ULL)));
        *var_14 = ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) | (min((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) (val<unsigned char>)140)), (var_2)))), (max((((/* implicit */val<unsigned long long int>) 3418562244U)), (1125899906841600ULL))))));
    }

    *var_15 |= ((/* implicit */val<signed char>) ((((((((/* implicit */val<bool>) (-9223372036854775807LL - 1LL))) ? (var_6) : (((/* implicit */val<unsigned long long int>) var_5)))) & (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<short>) var_4)))))) & (min((((((/* implicit */val<unsigned long long int>) var_5)) ^ (18445618173802710027ULL))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 1125899906841599ULL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) : (var_3))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36970;
short var_1 = (short)4324;
int var_2 = 753865911;
long long int var_3 = 275507288224124009LL;
unsigned char var_4 = (unsigned char)131;
long long int var_5 = -7922570994781148078LL;
unsigned long long int var_6 = 9829315104536801381ULL;
long long int var_7 = -8292287815106612425LL;
long long int var_8 = -2566114126410132143LL;
signed char var_9 = (signed char)-60;
int zero = 0;
long long int var_10 = 4629812423989490537LL;
unsigned short var_11 = (unsigned short)35155;
short var_12 = (short)-6415;
long long int var_13 = 3482987180375851270LL;
unsigned long long int var_14 = 2561701286755670677ULL;
signed char var_15 = (signed char)-70;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -2566114126410132143LL;
    value_mismatch |= var_11 != (unsigned short)19561;
    value_mismatch |= var_12 != (short)-1112;
    value_mismatch |= var_13 != 19703390263574784LL;
    value_mismatch |= var_14 != 18446744073709551607ULL;
    value_mismatch |= var_15 != (signed char)-69;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
