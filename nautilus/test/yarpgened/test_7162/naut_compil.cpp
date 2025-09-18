/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7162
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7162
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
void test(val<signed char> var_0, val<long long int> var_1, val<signed char> var_2, val<unsigned int> var_4, val<int> var_5, val<signed char> var_6, val<short> var_7, val<unsigned short> var_8, val<int> var_9, val<int> var_11, val<unsigned char> var_12, val<signed char> var_13, val<unsigned short> var_14, val<unsigned short> var_15, val<int> var_16, val<unsigned int> var_17, val<int> zero, val<int*> var_18, val<int*> var_19, val<long long int*> var_20, val<long long int*> var_21, val<int*> var_22, val<unsigned long long int*> var_23, val<bool*> var_24, val<unsigned int*> var_25, val<bool*> var_26, val<unsigned long long int*> var_27, val<bool*> var_28, val<int*> var_29, val<unsigned int*> var_30, val<signed char*> var_31, val<unsigned short*> var_32) {
    if (((/* implicit */val<bool>) (((!(((((/* implicit */val<bool>) var_6)) && (((/* implicit */val<bool>) var_7)))))) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_14)))))
    {
        *var_18 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) min((var_16), (((/* implicit */val<int>) var_14))))) && (((/* implicit */val<bool>) var_0))));
        *var_19 = ((/* implicit */val<int>) ((533716310U) / (var_17)));
        *var_20 = ((/* implicit */val<long long int>) var_13);
        *var_21 = ((/* implicit */val<long long int>) var_14);
    }

    if (((/* implicit */val<bool>) (((((((+(((/* implicit */val<int>) var_7)))) / (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_0)) : (var_16))))) + (2147483647))) << (((((/* implicit */val<int>) var_14)) - (55639))))))
    {
        if (((/* implicit */val<bool>) ((((((/* implicit */val<int>) var_13)) + (2147483647))) << (max((var_11), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_15))))))))))
        {
            *var_22 = (-(((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((var_17) >= (((/* implicit */val<unsigned int>) var_16)))))) <= (((3761250989U) >> (((533716305U) - (533716290U)))))))));
            if (((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((11U) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))))) != (((/* implicit */val<unsigned int>) var_5)))))) >= ((((!(((/* implicit */val<bool>) var_2)))) ? (((((/* implicit */val<bool>) 4294967268U)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) : (var_1))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))))))
            {
                *var_23 = ((/* implicit */val<unsigned long long int>) var_6);
                *var_24 = (val<bool>)1;
            }

            *var_25 = ((/* implicit */val<unsigned int>) (((~(((/* implicit */val<int>) (val<signed char>)127)))) - (var_16)));
            if ((!(((/* implicit */val<bool>) var_7))))
            {
                *var_26 = ((/* implicit */val<bool>) var_5);
                *var_27 |= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (~(((((/* implicit */val<int>) (val<signed char>)127)) >> (((((/* implicit */val<int>) (val<unsigned short>)52349)) - (52338)))))))) ? (((/* implicit */val<unsigned int>) ((((((/* implicit */val<int>) (val<unsigned char>)0)) << (((((/* implicit */val<int>) var_0)) + (70))))) << (((((/* implicit */val<int>) max((var_15), (((/* implicit */val<unsigned short>) var_6))))) - (65486)))))) : (((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_15))) : (((var_4) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7)))))))));
                *var_28 = ((var_16) < (min((((/* implicit */val<int>) var_15)), (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) (val<unsigned short>)60983)) : (((/* implicit */val<int>) var_14)))))));
            }

            *var_29 = ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((val<unsigned long long int>) var_4)))))));
        }

        *var_30 = ((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_12))));
        *var_31 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_7)) ? (var_9) : (var_5)));
        *var_32 = ((/* implicit */val<unsigned short>) max((var_4), (((/* implicit */val<unsigned int>) var_9))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-40;
long long int var_1 = -5412045778656161187LL;
signed char var_2 = (signed char)51;
unsigned int var_4 = 4127631147U;
int var_5 = 74737060;
signed char var_6 = (signed char)-40;
short var_7 = (short)12781;
unsigned short var_8 = (unsigned short)60826;
int var_9 = 259184687;
int var_11 = -1821084506;
unsigned char var_12 = (unsigned char)195;
signed char var_13 = (signed char)-106;
unsigned short var_14 = (unsigned short)55639;
unsigned short var_15 = (unsigned short)63189;
int var_16 = -1141883;
unsigned int var_17 = 1136392402U;
int zero = 0;
int var_18 = 1278413339;
int var_19 = 912398241;
long long int var_20 = -1412679062627773115LL;
long long int var_21 = -1709099646366544210LL;
int var_22 = 625770185;
unsigned long long int var_23 = 14933657750766336310ULL;
bool var_24 = (bool)0;
unsigned int var_25 = 2311212854U;
bool var_26 = (bool)0;
unsigned long long int var_27 = 2988087045900449686ULL;
bool var_28 = (bool)1;
int var_29 = 941325151;
unsigned int var_30 = 4011682187U;
signed char var_31 = (signed char)-106;
unsigned short var_32 = (unsigned short)40137;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1;
    value_mismatch |= var_19 != 0;
    value_mismatch |= var_20 != -106LL;
    value_mismatch |= var_21 != 55639LL;
    value_mismatch |= var_22 != -1;
    value_mismatch |= var_23 != 18446744073709551576ULL;
    value_mismatch |= var_24 != (bool)1;
    value_mismatch |= var_25 != 1141755U;
    value_mismatch |= var_26 != (bool)0;
    value_mismatch |= var_27 != 2988087045900449686ULL;
    value_mismatch |= var_28 != (bool)1;
    value_mismatch |= var_29 != 1;
    value_mismatch |= var_30 != 195U;
    value_mismatch |= var_31 != (signed char)47;
    value_mismatch |= var_32 != (unsigned short)42795;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_11, var_12, var_13, var_14, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28, &var_29, &var_30, &var_31, &var_32);
  checksum();
}
