/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3380
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3380
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
void test(val<unsigned short> var_0, val<long long int> var_1, val<unsigned short> var_2, val<unsigned char> var_3, val<unsigned int> var_5, val<int> var_6, val<unsigned int> var_7, val<unsigned int> var_8, val<unsigned char> var_10, val<signed char> var_11, val<int> zero, val<short*> var_12, val<unsigned int*> var_13, val<long long int*> var_14, val<long long int*> var_15, val<short*> var_16, val<unsigned int*> var_17, val<long long int*> var_18, val<long long int*> var_19, val<unsigned long long int*> var_20, val<unsigned int*> var_21, val<long long int*> var_22, val<unsigned char*> var_23) {
    if (((/* implicit */val<bool>) var_2))
    {
        *var_12 = ((/* implicit */val<short>) var_3);
        *var_13 = ((/* implicit */val<unsigned int>) var_0);
        if (((/* implicit */val<bool>) var_10))
        {
            *var_14 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(-2923869337387421949LL)))) ? ((~(((/* implicit */val<int>) var_3)))) : (((/* implicit */val<int>) ((val<short>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))) > (5267291148256080249LL)))))));
            *var_15 = ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_2))));
            *var_16 = ((/* implicit */val<short>) -1);
            *var_17 = ((/* implicit */val<unsigned int>) var_3);
        }

    }

    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((-6711723267141392343LL), (((/* implicit */val<long long int>) var_11))))) ? (((/* implicit */val<long long int>) var_5)) : (((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned char>)127)) & (((/* implicit */val<int>) (val<short>)22451))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_2)))))) : (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<long long int>) var_7)) : (var_1))))))))
    {
        if ((!(((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<signed char>)-96)))))))
        {
            *var_18 = ((/* implicit */val<long long int>) var_8);
            *var_19 = -230499350375409691LL;
            *var_20 = ((/* implicit */val<unsigned long long int>) min((*var_20), (((((/* implicit */val<bool>) var_10)) ? ((((!(((/* implicit */val<bool>) 36028797018963967LL)))) ? (((1207914057309689367ULL) ^ (((/* implicit */val<unsigned long long int>) var_8)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)53228))))) : (((/* implicit */val<unsigned long long int>) max(((((val<bool>)1) ? (((/* implicit */val<long long int>) 4294967294U)) : (var_1))), (((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) -494863073))))))))))));
            *var_21 = ((/* implicit */val<unsigned int>) -6711723267141392343LL);
        }

        *var_22 = ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) var_6)), (var_8)));
        *var_23 = ((/* implicit */val<unsigned char>) var_8);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42090;
long long int var_1 = -6157900604156593714LL;
unsigned short var_2 = (unsigned short)8943;
unsigned char var_3 = (unsigned char)233;
unsigned int var_5 = 2007670666U;
int var_6 = 807471294;
unsigned int var_7 = 2277938143U;
unsigned int var_8 = 1444863602U;
unsigned char var_10 = (unsigned char)134;
signed char var_11 = (signed char)99;
int zero = 0;
short var_12 = (short)2512;
unsigned int var_13 = 2836332707U;
long long int var_14 = -1362281797333267527LL;
long long int var_15 = 7799729303740517502LL;
short var_16 = (short)-20557;
unsigned int var_17 = 3894301338U;
long long int var_18 = -1997960692561768985LL;
long long int var_19 = 1988286217200377766LL;
unsigned long long int var_20 = 4818708759894889061ULL;
unsigned int var_21 = 2925438565U;
long long int var_22 = -6054969269010696715LL;
unsigned char var_23 = (unsigned char)143;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)233;
    value_mismatch |= var_13 != 42090U;
    value_mismatch |= var_14 != -234LL;
    value_mismatch |= var_15 != 8943LL;
    value_mismatch |= var_16 != (short)-1;
    value_mismatch |= var_17 != 233U;
    value_mismatch |= var_18 != -1997960692561768985LL;
    value_mismatch |= var_19 != 1988286217200377766LL;
    value_mismatch |= var_20 != 4818708759894889061ULL;
    value_mismatch |= var_21 != 2925438565U;
    value_mismatch |= var_22 != 1444863602LL;
    value_mismatch |= var_23 != (unsigned char)114;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_7, var_8, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
