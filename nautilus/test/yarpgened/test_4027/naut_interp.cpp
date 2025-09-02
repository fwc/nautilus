/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4027
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4027
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
void test(val<unsigned int> var_0, val<signed char> var_1, val<unsigned int> var_2, val<bool> var_3, val<bool> var_4, val<unsigned int> var_5, val<signed char> var_6, val<signed char> var_7, val<bool> var_8, val<bool> var_9, val<signed char> var_10, val<signed char> var_11, val<bool> var_12, val<unsigned int> var_13, val<bool> var_14, val<bool> var_15, val<int> zero, val<unsigned int*> var_16, val<bool*> var_17, val<unsigned int*> var_18, val<signed char*> var_19, val<bool*> var_20, val<signed char*> var_21, val<signed char*> var_22, val<bool*> var_23, val<signed char*> var_24, val<bool*> var_25, val<unsigned int*> var_26, val<bool*> var_27, val<signed char*> var_28, val<bool*> var_29, val<bool*> var_30, val<unsigned int*> var_31, val<bool*> var_32, val<bool*> var_33, val<signed char*> var_34, val<signed char*> var_35, val<bool*> var_36, val<signed char*> var_37) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11))) & (min((((/* implicit */val<unsigned int>) ((((((/* implicit */val<int>) var_10)) + (2147483647))) >> (((var_0) - (2267438342U)))))), (((((/* implicit */val<bool>) var_5)) ? (var_2) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-30))))))))))
    {
        if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) : (((var_13) % (var_0)))))) ? (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) min((((/* implicit */val<signed char>) var_4)), ((val<signed char>)30))))))) : (var_2))))
        {
            *var_16 = ((/* implicit */val<unsigned int>) min((*var_16), (((/* implicit */val<unsigned int>) var_12))));
            *var_17 = ((/* implicit */val<bool>) min((*var_17), ((!(((/* implicit */val<bool>) max((((/* implicit */val<signed char>) max((var_4), (var_14)))), (min((var_7), (((/* implicit */val<signed char>) (val<bool>)1)))))))))));
            if (var_15)
            {
                *var_18 = ((/* implicit */val<unsigned int>) var_1);
                *var_19 = ((/* implicit */val<signed char>) var_3);
                if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_9)) << (((((/* implicit */val<int>) var_3)) * (((/* implicit */val<int>) var_3))))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) + (var_13)))) ? (((/* implicit */val<int>) (val<signed char>)-98)) : (((/* implicit */val<int>) ((var_5) <= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_15)))))))) : (((/* implicit */val<int>) var_10)))))
                {
                    *var_20 &= ((/* implicit */val<bool>) var_2);
                    if (((/* implicit */val<bool>) var_1))
                    {
                        *var_21 = ((/* implicit */val<signed char>) min((*var_21), (((/* implicit */val<signed char>) min((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_12))))) ? (min((var_13), (((/* implicit */val<unsigned int>) var_9)))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)41))))), (((/* implicit */val<unsigned int>) min((((((/* implicit */val<bool>) 4294967295U)) ? (((/* implicit */val<int>) (val<signed char>)89)) : (((/* implicit */val<int>) (val<signed char>)-28)))), (((/* implicit */val<int>) (val<bool>)1))))))))));
                        *var_22 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<bool>)1)) + (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_6)))))))), (min(((((val<bool>)1) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-14))) : (988265188U))), (((/* implicit */val<unsigned int>) var_11))))));
                        *var_23 = ((/* implicit */val<bool>) max((*var_23), (((/* implicit */val<bool>) (val<signed char>)121))));
                    }

                    if ((val<bool>)1)
                    {
                        *var_24 = ((/* implicit */val<signed char>) var_15);
                        *var_25 = ((/* implicit */val<bool>) ((val<signed char>) var_11));
                    }

                }

                if (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_9)) - (((/* implicit */val<int>) var_10)))))
                {
                    *var_26 = ((/* implicit */val<unsigned int>) (val<bool>)1);
                    if (var_3)
                    {
                        *var_27 &= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(((((/* implicit */val<int>) var_4)) << (((var_0) - (2267438354U)))))))) ? (((/* implicit */val<int>) var_15)) : (((/* implicit */val<int>) var_1))));
                        *var_28 = var_10;
                        *var_29 *= ((/* implicit */val<bool>) min((((/* implicit */val<int>) var_11)), ((((!(((/* implicit */val<bool>) var_11)))) ? (((/* implicit */val<int>) var_15)) : (((((/* implicit */val<int>) var_8)) << (((/* implicit */val<int>) var_3))))))));
                    }
                    else
                    {
                        *var_30 = var_4;
                        *var_31 = ((/* implicit */val<unsigned int>) min((*var_31), (min((min((((/* implicit */val<unsigned int>) min(((val<signed char>)112), ((val<signed char>)40)))), (((val<unsigned int>) var_3)))), (min((((/* implicit */val<unsigned int>) (((val<bool>)1) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) (val<bool>)1))))), (var_0)))))));
                    }

                    *var_32 = ((/* implicit */val<bool>) (~(((/* implicit */val<int>) (!(var_8))))));
                    if ((val<bool>)1)
                    {
                        *var_33 = ((/* implicit */val<bool>) var_7);
                        *var_34 = ((/* implicit */val<signed char>) ((var_3) ? (((((/* implicit */val<bool>) (((val<bool>)1) ? (var_2) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3)))))) ? (min((((/* implicit */val<unsigned int>) var_3)), (2697272920U))) : (((/* implicit */val<unsigned int>) ((var_4) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_6))))))) : (var_0)));
                    }

                }

            }

        }

        *var_35 = ((/* implicit */val<signed char>) var_0);
    }

    *var_36 = ((/* implicit */val<bool>) min((*var_36), (((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) (((+(((/* implicit */val<int>) var_14)))) * (((/* implicit */val<int>) var_1))))) * (var_0))))));
    *var_37 = ((/* implicit */val<signed char>) ((291096365U) + (var_2)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2267438365U;
signed char var_1 = (signed char)-75;
unsigned int var_2 = 2293620506U;
bool var_3 = (bool)0;
bool var_4 = (bool)0;
unsigned int var_5 = 2391783386U;
signed char var_6 = (signed char)87;
signed char var_7 = (signed char)-48;
bool var_8 = (bool)0;
bool var_9 = (bool)0;
signed char var_10 = (signed char)-96;
signed char var_11 = (signed char)-64;
bool var_12 = (bool)0;
unsigned int var_13 = 1326657366U;
bool var_14 = (bool)0;
bool var_15 = (bool)1;
int zero = 0;
unsigned int var_16 = 983529938U;
bool var_17 = (bool)1;
unsigned int var_18 = 2051426188U;
signed char var_19 = (signed char)58;
bool var_20 = (bool)0;
signed char var_21 = (signed char)3;
signed char var_22 = (signed char)52;
bool var_23 = (bool)1;
signed char var_24 = (signed char)127;
bool var_25 = (bool)1;
unsigned int var_26 = 1941673283U;
bool var_27 = (bool)1;
signed char var_28 = (signed char)-51;
bool var_29 = (bool)1;
bool var_30 = (bool)0;
unsigned int var_31 = 1216808586U;
bool var_32 = (bool)1;
bool var_33 = (bool)1;
signed char var_34 = (signed char)-35;
signed char var_35 = (signed char)-29;
bool var_36 = (bool)0;
signed char var_37 = (signed char)86;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0U;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != 4294967221U;
    value_mismatch |= var_19 != (signed char)0;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != (signed char)0;
    value_mismatch |= var_22 != (signed char)1;
    value_mismatch |= var_23 != (bool)1;
    value_mismatch |= var_24 != (signed char)1;
    value_mismatch |= var_25 != (bool)1;
    value_mismatch |= var_26 != 1U;
    value_mismatch |= var_27 != (bool)1;
    value_mismatch |= var_28 != (signed char)-51;
    value_mismatch |= var_29 != (bool)1;
    value_mismatch |= var_30 != (bool)0;
    value_mismatch |= var_31 != 0U;
    value_mismatch |= var_32 != (bool)1;
    value_mismatch |= var_33 != (bool)1;
    value_mismatch |= var_34 != (signed char)29;
    value_mismatch |= var_35 != (signed char)29;
    value_mismatch |= var_36 != (bool)0;
    value_mismatch |= var_37 != (signed char)71;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28, &var_29, &var_30, &var_31, &var_32, &var_33, &var_34, &var_35, &var_36, &var_37);
  checksum();
  assert(!value_mismatch);
}
