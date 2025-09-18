/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4908
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4908
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
void test(val<long long int> var_0, val<int> var_1, val<bool> var_2, val<signed char> var_3, val<int> var_4, val<unsigned char> var_5, val<int> var_6, val<int> var_7, val<signed char> var_8, val<int> var_9, val<long long int> var_10, val<unsigned short> var_11, val<signed char> var_12, val<int> zero, val<unsigned char*> var_15, val<long long int*> var_16, val<unsigned long long int*> var_17, val<signed char*> var_18, val<int*> var_19, val<int*> var_20, val<unsigned int*> var_21, val<unsigned int*> var_22, val<int*> var_23, val<unsigned int*> var_24, val<signed char*> var_25, val<unsigned int*> var_26, val<signed char*> var_27, val<short*> var_28, val<unsigned long long int*> var_29, val<long long int*> var_30, val<unsigned char*> var_31, val<signed char*> var_32, val<int*> var_33, val<unsigned int*> var_34, val<unsigned char*> var_35) {
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_12)) ? (max((var_1), (((/* implicit */val<int>) (val<unsigned char>)2)))) : (((/* implicit */val<int>) var_11))));
    *var_16 = ((/* implicit */val<long long int>) max((*var_16), (((/* implicit */val<long long int>) ((val<unsigned short>) ((((/* implicit */val<bool>) 2847878749U)) ? (((/* implicit */val<int>) (val<unsigned char>)234)) : (((/* implicit */val<int>) (val<bool>)0))))))));
    if (((/* implicit */val<bool>) (-(var_7))))
    {
        if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<long long int>) var_7)) : ((((!(((/* implicit */val<bool>) 18446744073709551602ULL)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) : ((~(9223372036854775779LL))))))))
        {
            *var_17 = ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<int>) ((var_1) == (((/* implicit */val<int>) (val<bool>)1))))) > (-1275266839))) ? ((~((+(((/* implicit */val<int>) var_3)))))) : (var_4)));
            *var_18 = ((/* implicit */val<signed char>) min((5803079663447899595ULL), (((/* implicit */val<unsigned long long int>) 1275266825))));
            *var_19 = ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_3))))) ? (((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_8))))) ? (((((/* implicit */val<int>) var_5)) + ((-2147483647 - 1)))) : (var_9))) : (var_6));
        }
        else
        {
            *var_20 = min((var_7), (var_9));
            *var_21 |= min((((/* implicit */val<unsigned int>) var_7)), (max((((/* implicit */val<unsigned int>) var_11)), (min((4294967295U), (((/* implicit */val<unsigned int>) (-2147483647 - 1))))))));
        }

        *var_22 = ((/* implicit */val<unsigned int>) var_5);
        *var_23 = ((-1275266839) ^ (((/* implicit */val<int>) var_12)));
    }
    else
    {
        *var_24 = ((/* implicit */val<unsigned int>) max((9223372036854775779LL), (((/* implicit */val<long long int>) var_9))));
        *var_25 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_5)) != ((+(var_9)))));
        if (((((/* implicit */val<bool>) var_1)) && (((/* implicit */val<bool>) var_7))))
        {
            *var_26 = ((/* implicit */val<unsigned int>) var_6);
            if (((/* implicit */val<bool>) var_11))
            {
                *var_27 = ((/* implicit */val<signed char>) max((((/* implicit */val<int>) (val<short>)-11)), (904551963)));
                *var_28 = ((/* implicit */val<short>) ((val<unsigned int>) var_5));
                *var_29 = (((val<bool>)0) ? (15236947025408694562ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)20))));
            }

            if (((/* implicit */val<bool>) max((((/* implicit */val<unsigned short>) var_2)), (((val<unsigned short>) ((var_10) ^ (var_0)))))))
            {
                *var_30 = ((/* implicit */val<long long int>) (val<unsigned char>)22);
                *var_31 = ((/* implicit */val<unsigned char>) max((var_8), (((/* implicit */val<signed char>) (val<bool>)1))));
            }
            else
            {
                *var_32 = ((/* implicit */val<signed char>) (~(var_9)));
                *var_33 = ((/* implicit */val<int>) var_8);
            }

            *var_34 = ((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) ((val<signed char>) var_12)))));
        }

        *var_35 = ((/* implicit */val<unsigned char>) max((*var_35), (((/* implicit */val<unsigned char>) ((9223372036854775807LL) >> (((/* implicit */val<int>) var_3)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 476501761347480131LL;
int var_1 = 572471972;
bool var_2 = (bool)1;
signed char var_3 = (signed char)52;
int var_4 = 33494017;
unsigned char var_5 = (unsigned char)5;
int var_6 = -155312816;
int var_7 = 193732117;
signed char var_8 = (signed char)-1;
int var_9 = -1097947274;
long long int var_10 = 865871096003180622LL;
unsigned short var_11 = (unsigned short)45597;
signed char var_12 = (signed char)46;
int zero = 0;
unsigned char var_15 = (unsigned char)85;
long long int var_16 = -4993977858807647171LL;
unsigned long long int var_17 = 3941861776142588947ULL;
signed char var_18 = (signed char)-18;
int var_19 = 1983986204;
int var_20 = 52395116;
unsigned int var_21 = 4046083660U;
unsigned int var_22 = 1883467411U;
int var_23 = -1652326947;
unsigned int var_24 = 1475294678U;
signed char var_25 = (signed char)43;
unsigned int var_26 = 2247409740U;
signed char var_27 = (signed char)-31;
short var_28 = (short)25119;
unsigned long long int var_29 = 10623296769262814056ULL;
long long int var_30 = 4212670224186979085LL;
unsigned char var_31 = (unsigned char)151;
signed char var_32 = (signed char)-74;
int var_33 = 527357371;
unsigned int var_34 = 2978603444U;
unsigned char var_35 = (unsigned char)74;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)164;
    value_mismatch |= var_16 != 234LL;
    value_mismatch |= var_17 != 18446744073709551563ULL;
    value_mismatch |= var_18 != (signed char)9;
    value_mismatch |= var_19 != -2147483643;
    value_mismatch |= var_20 != 52395116;
    value_mismatch |= var_21 != 4046083660U;
    value_mismatch |= var_22 != 5U;
    value_mismatch |= var_23 != -1275266873;
    value_mismatch |= var_24 != 1475294678U;
    value_mismatch |= var_25 != (signed char)43;
    value_mismatch |= var_26 != 2247409740U;
    value_mismatch |= var_27 != (signed char)-31;
    value_mismatch |= var_28 != (short)25119;
    value_mismatch |= var_29 != 10623296769262814056ULL;
    value_mismatch |= var_30 != 4212670224186979085LL;
    value_mismatch |= var_31 != (unsigned char)151;
    value_mismatch |= var_32 != (signed char)-74;
    value_mismatch |= var_33 != 527357371;
    value_mismatch |= var_34 != 2978603444U;
    value_mismatch |= var_35 != (unsigned char)74;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28, &var_29, &var_30, &var_31, &var_32, &var_33, &var_34, &var_35);
  checksum();
}
