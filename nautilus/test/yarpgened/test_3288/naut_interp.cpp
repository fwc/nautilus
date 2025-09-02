/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3288
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3288
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
void test(val<int> var_1, val<unsigned long long int> var_2, val<unsigned short> var_5, val<unsigned int> var_7, val<unsigned long long int> var_8, val<unsigned short> var_9, val<signed char> var_10, val<short> var_11, val<signed char> var_12, val<unsigned int> var_13, val<bool> var_14, val<unsigned short> var_15, val<signed char> var_16, val<unsigned short> var_17, val<long long int> var_18, val<unsigned long long int> var_19, val<int> zero, val<unsigned int*> var_20, val<unsigned short*> var_21, val<bool*> var_22, val<unsigned long long int*> var_23, val<signed char*> var_24, val<int*> var_25, val<unsigned int*> var_26, val<unsigned int*> var_27, val<int*> var_28, val<long long int*> var_29, val<short*> var_30, val<unsigned int*> var_31, val<unsigned long long int*> var_32, val<bool*> var_33, val<unsigned short*> var_34) {
    if (((/* implicit */val<bool>) (val<signed char>)0))
    {
        *var_20 = ((/* implicit */val<unsigned int>) ((var_8) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)2048)))));
        *var_21 = ((/* implicit */val<unsigned short>) var_11);
        *var_22 = var_14;
    }
    else
    {
        if (((/* implicit */val<bool>) min((var_2), (((/* implicit */val<unsigned long long int>) ((((18446744073709551615ULL) ^ (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))))) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max((var_5), (((/* implicit */val<unsigned short>) (val<bool>)1))))))))))))
        {
            *var_23 = ((/* implicit */val<unsigned long long int>) min((*var_23), (((/* implicit */val<unsigned long long int>) ((min((((var_18) + (((/* implicit */val<long long int>) var_13)))), (((/* implicit */val<long long int>) (val<unsigned short>)63488)))) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))))))));
            if (((/* implicit */val<bool>) (-(((2586580934749598948ULL) & (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) <= (4294967295U))))))))))
            {
                *var_24 -= ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned long long int>) var_7)), (var_19)));
                *var_25 = ((/* implicit */val<int>) 61264381U);
            }

            *var_26 = var_13;
        }

        *var_27 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned short>) ((val<bool>) (val<unsigned short>)2040))), (var_17)))), (15860163138959952674ULL)));
        if (((/* implicit */val<bool>) ((((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_14))) >= (70368744177663ULL)))) - (((/* implicit */val<int>) max((max((var_17), (var_9))), (min((var_5), (((/* implicit */val<unsigned short>) var_10))))))))))
        {
            if (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_12)) - (((/* implicit */val<int>) var_16)))))
            {
                *var_28 = ((/* implicit */val<int>) max((*var_28), (((/* implicit */val<int>) var_19))));
                *var_29 = ((/* implicit */val<long long int>) min((*var_29), (((/* implicit */val<long long int>) var_9))));
            }

            *var_30 = ((/* implicit */val<short>) ((val<long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) var_16)) && (((/* implicit */val<bool>) 0U))))) - (((/* implicit */val<int>) ((16430115881137544035ULL) >= (((/* implicit */val<unsigned long long int>) 19U))))))));
        }
        else
        {
            *var_31 = ((/* implicit */val<unsigned int>) ((val<bool>) min((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) - (var_2))), (((/* implicit */val<unsigned long long int>) var_1)))));
            *var_32 = ((/* implicit */val<unsigned long long int>) (val<bool>)1);
            *var_33 *= (!(((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_15))))));
        }

    }

    *var_34 = ((/* implicit */val<unsigned short>) 18446744073709551615ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2139665081;
unsigned long long int var_2 = 11823295299791657887ULL;
unsigned short var_5 = (unsigned short)24682;
unsigned int var_7 = 1550865273U;
unsigned long long int var_8 = 9190310979140854006ULL;
unsigned short var_9 = (unsigned short)40800;
signed char var_10 = (signed char)104;
short var_11 = (short)-21236;
signed char var_12 = (signed char)25;
unsigned int var_13 = 3005373138U;
bool var_14 = (bool)1;
unsigned short var_15 = (unsigned short)14233;
signed char var_16 = (signed char)113;
unsigned short var_17 = (unsigned short)65425;
long long int var_18 = 2278216303580173573LL;
unsigned long long int var_19 = 17125558468639265839ULL;
int zero = 0;
unsigned int var_20 = 2421861012U;
unsigned short var_21 = (unsigned short)35487;
bool var_22 = (bool)1;
unsigned long long int var_23 = 5998360393772118790ULL;
signed char var_24 = (signed char)125;
int var_25 = -965705911;
unsigned int var_26 = 3952534386U;
unsigned int var_27 = 2808884455U;
int var_28 = 1348307564;
long long int var_29 = 9130386305725579069LL;
short var_30 = (short)-23026;
unsigned int var_31 = 3141236830U;
unsigned long long int var_32 = 13485470315281935845ULL;
bool var_33 = (bool)1;
unsigned short var_34 = (unsigned short)46031;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 2421861012U;
    value_mismatch |= var_21 != (unsigned short)35487;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != 0ULL;
    value_mismatch |= var_24 != (signed char)125;
    value_mismatch |= var_25 != -965705911;
    value_mismatch |= var_26 != 3005373138U;
    value_mismatch |= var_27 != 427019042U;
    value_mismatch |= var_28 != 1348307564;
    value_mismatch |= var_29 != 40800LL;
    value_mismatch |= var_30 != (short)-1;
    value_mismatch |= var_31 != 3141236830U;
    value_mismatch |= var_32 != 13485470315281935845ULL;
    value_mismatch |= var_33 != (bool)1;
    value_mismatch |= var_34 != (unsigned short)65535;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, var_17, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28, &var_29, &var_30, &var_31, &var_32, &var_33, &var_34);
  checksum();
  assert(!value_mismatch);
}
