/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8249
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8249
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
void test(val<unsigned long long int> var_1, val<unsigned short> var_3, val<unsigned int> var_4, val<unsigned short> var_5, val<unsigned long long int> var_6, val<int> var_7, val<long long int> var_9, val<bool> var_11, val<bool> var_12, val<long long int> var_13, val<short> var_14, val<int> var_15, val<unsigned char> var_16, val<short> var_17, val<int> zero, val<signed char*> var_18, val<bool*> var_19, val<int*> var_20, val<unsigned int*> var_21, val<unsigned char*> var_22, val<int*> var_23, val<long long int*> var_24, val<unsigned char*> var_25, val<unsigned int*> var_26, val<bool*> var_27, val<unsigned int*> var_28) {
    *var_18 = ((/* implicit */val<signed char>) var_13);
    *var_19 = ((/* implicit */val<bool>) min((*var_19), (((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_12)))))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)65535)) ? (9223372036854775792LL) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_6))))) : (((/* implicit */val<int>) ((val<bool>) var_9)))))))))
    {
        *var_20 = ((/* implicit */val<int>) var_17);
        if (((val<bool>) (+((~(7799099466092984029LL))))))
        {
            if (((/* implicit */val<bool>) -7799099466092984037LL))
            {
                if (((/* implicit */val<bool>) ((val<unsigned char>) ((((val<bool>) var_3)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_14))) : (max((var_4), (((/* implicit */val<unsigned int>) var_17))))))))
                {
                    *var_21 = ((/* implicit */val<unsigned int>) var_14);
                    *var_22 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<int>) var_12)) : (((val<int>) 0U))));
                }

                *var_23 = ((/* implicit */val<int>) ((((val<bool>) (~(-9223372036854775793LL)))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) min((-7799099466092984008LL), (((/* implicit */val<long long int>) (val<unsigned char>)201))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned short>) var_15)))) : (max((var_9), (-9223372036854775793LL)))))) : (((((/* implicit */val<bool>) ((val<unsigned int>) 2693376923076975641ULL))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_7)) ? (-7799099466092984037LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)32767)))))) : (var_6)))));
                *var_24 = ((/* implicit */val<long long int>) (val<signed char>)127);
            }

            *var_25 = ((/* implicit */val<unsigned char>) ((val<int>) (~(((/* implicit */val<int>) ((((/* implicit */val<int>) var_11)) <= (((/* implicit */val<int>) var_5))))))));
            *var_26 = ((/* implicit */val<unsigned int>) max((*var_26), ((+((+(((4294967278U) - (var_4)))))))));
        }

        *var_27 = ((/* implicit */val<bool>) var_1);
        *var_28 &= ((/* implicit */val<unsigned int>) var_9);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3957284396140164004ULL;
unsigned short var_3 = (unsigned short)3565;
unsigned int var_4 = 3032389618U;
unsigned short var_5 = (unsigned short)13512;
unsigned long long int var_6 = 14582800364458668336ULL;
int var_7 = -462804600;
long long int var_9 = 3819613977734046818LL;
bool var_11 = (bool)0;
bool var_12 = (bool)1;
long long int var_13 = -8428309029464426206LL;
short var_14 = (short)4195;
int var_15 = -1952303618;
unsigned char var_16 = (unsigned char)115;
short var_17 = (short)-15084;
int zero = 0;
signed char var_18 = (signed char)-95;
bool var_19 = (bool)1;
int var_20 = 744931676;
unsigned int var_21 = 2552398992U;
unsigned char var_22 = (unsigned char)24;
int var_23 = -1580397918;
long long int var_24 = 7941219226223788106LL;
unsigned char var_25 = (unsigned char)179;
unsigned int var_26 = 1038055588U;
bool var_27 = (bool)0;
unsigned int var_28 = 249656873U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)34;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != -15084;
    value_mismatch |= var_21 != 4195U;
    value_mismatch |= var_22 != (unsigned char)1;
    value_mismatch |= var_23 != 13822;
    value_mismatch |= var_24 != 127LL;
    value_mismatch |= var_25 != (unsigned char)254;
    value_mismatch |= var_26 != 1262577660U;
    value_mismatch |= var_27 != (bool)1;
    value_mismatch |= var_28 != 14705696U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_6, var_7, var_9, var_11, var_12, var_13, var_14, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28);
  checksum();
  assert(!value_mismatch);
}
