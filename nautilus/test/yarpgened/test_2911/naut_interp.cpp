/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2911
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2911
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
void test(val<int> var_0, val<unsigned short> var_1, val<bool> var_3, val<long long int> var_4, val<long long int> var_5, val<bool> var_6, val<unsigned int> var_7, val<short> var_8, val<short> var_9, val<unsigned long long int> var_10, val<unsigned short> var_11, val<long long int> var_12, val<unsigned short> var_14, val<unsigned short> var_15, val<int> var_16, val<signed char> var_18, val<int> zero, val<signed char*> var_19, val<long long int*> var_20, val<unsigned int*> var_21, val<signed char*> var_22, val<unsigned int*> var_23, val<signed char*> var_24, val<unsigned int*> var_25, val<bool*> var_26, val<bool*> var_27, val<unsigned short*> var_28, val<short*> var_29, val<short*> var_30, val<unsigned int*> var_31, val<signed char*> var_32, val<unsigned int*> var_33, val<unsigned short*> var_34, val<unsigned int*> var_35, val<short*> var_36) {
    *var_19 = ((/* implicit */val<signed char>) (+(((/* implicit */val<int>) var_11))));
    if (((/* implicit */val<bool>) ((val<unsigned char>) (val<unsigned char>)245)))
    {
        if (((/* implicit */val<bool>) var_4))
        {
            *var_20 = ((/* implicit */val<long long int>) var_3);
            *var_21 = ((/* implicit */val<unsigned int>) var_14);
        }

        *var_22 = ((/* implicit */val<signed char>) var_3);
        *var_23 = ((/* implicit */val<unsigned int>) (-(var_0)));
    }
    else
    {
        if (var_3)
        {
            if (((/* implicit */val<bool>) ((val<unsigned int>) ((((/* implicit */val<bool>) max((((/* implicit */val<int>) var_15)), (var_16)))) ? (var_12) : (var_5)))))
            {
                if (((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_15)))))
                {
                    *var_24 = ((/* implicit */val<signed char>) var_8);
                    *var_25 = ((/* implicit */val<unsigned int>) var_8);
                }

                *var_26 = ((/* implicit */val<bool>) var_10);
            }
            else
            {
                *var_27 = ((/* implicit */val<bool>) ((val<long long int>) ((val<signed char>) min((((/* implicit */val<long long int>) var_18)), (var_12)))));
                *var_28 = ((/* implicit */val<unsigned short>) ((val<long long int>) max((var_7), (((/* implicit */val<unsigned int>) ((val<unsigned char>) var_7))))));
                *var_29 = ((/* implicit */val<short>) min((((/* implicit */val<unsigned short>) var_9)), (max((((/* implicit */val<unsigned short>) ((val<signed char>) var_15))), (((val<unsigned short>) var_3))))));
                *var_30 = ((/* implicit */val<short>) ((val<long long int>) ((val<unsigned short>) 17677863842252602672ULL)));
            }

            *var_31 = ((/* implicit */val<unsigned int>) var_9);
            *var_32 = ((/* implicit */val<signed char>) (-(((((/* implicit */val<bool>) var_7)) ? (((val<long long int>) -4819788524067234565LL)) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1)))))));
        }

        *var_33 = ((/* implicit */val<unsigned int>) var_0);
        *var_34 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned long long int>) ((val<short>) ((val<unsigned int>) var_14)))), (((val<unsigned long long int>) var_6))));
        *var_35 = ((/* implicit */val<unsigned int>) min((var_12), (((/* implicit */val<long long int>) var_14))));
    }

    *var_36 = ((/* implicit */val<short>) ((val<int>) ((val<unsigned char>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_14))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1795797551;
unsigned short var_1 = (unsigned short)39747;
bool var_3 = (bool)0;
long long int var_4 = 290372266937674800LL;
long long int var_5 = -5776360896376431767LL;
bool var_6 = (bool)1;
unsigned int var_7 = 2713024173U;
short var_8 = (short)-14224;
short var_9 = (short)2802;
unsigned long long int var_10 = 4100592230914952711ULL;
unsigned short var_11 = (unsigned short)42050;
long long int var_12 = 6744183167424862365LL;
unsigned short var_14 = (unsigned short)44686;
unsigned short var_15 = (unsigned short)55406;
int var_16 = 1057438343;
signed char var_18 = (signed char)-116;
int zero = 0;
signed char var_19 = (signed char)-11;
long long int var_20 = -8876084321260605267LL;
unsigned int var_21 = 3372841843U;
signed char var_22 = (signed char)8;
unsigned int var_23 = 2873544592U;
signed char var_24 = (signed char)-110;
unsigned int var_25 = 2123520247U;
bool var_26 = (bool)0;
bool var_27 = (bool)1;
unsigned short var_28 = (unsigned short)1265;
short var_29 = (short)-8223;
short var_30 = (short)-4560;
unsigned int var_31 = 1743122282U;
signed char var_32 = (signed char)-91;
unsigned int var_33 = 610497891U;
unsigned short var_34 = (unsigned short)54815;
unsigned int var_35 = 1020378060U;
short var_36 = (short)-13372;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)66;
    value_mismatch |= var_20 != 0LL;
    value_mismatch |= var_21 != 44686U;
    value_mismatch |= var_22 != (signed char)0;
    value_mismatch |= var_23 != 1795797551U;
    value_mismatch |= var_24 != (signed char)-110;
    value_mismatch |= var_25 != 2123520247U;
    value_mismatch |= var_26 != (bool)0;
    value_mismatch |= var_27 != (bool)1;
    value_mismatch |= var_28 != (unsigned short)1265;
    value_mismatch |= var_29 != (short)-8223;
    value_mismatch |= var_30 != (short)-4560;
    value_mismatch |= var_31 != 1743122282U;
    value_mismatch |= var_32 != (signed char)-91;
    value_mismatch |= var_33 != 610497891U;
    value_mismatch |= var_34 != (unsigned short)54815;
    value_mismatch |= var_35 != 1020378060U;
    value_mismatch |= var_36 != (short)67;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_14, var_15, var_16, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28, &var_29, &var_30, &var_31, &var_32, &var_33, &var_34, &var_35, &var_36);
  checksum();
  assert(!value_mismatch);
}
