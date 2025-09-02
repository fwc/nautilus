/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8253
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8253
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
void test(val<unsigned int> var_0, val<unsigned int> var_2, val<unsigned char> var_3, val<unsigned char> var_4, val<int> var_5, val<unsigned int> var_6, val<unsigned int> var_7, val<bool> var_8, val<signed char> var_9, val<unsigned int> var_10, val<short> var_11, val<long long int> var_12, val<unsigned char> var_13, val<int> zero, val<bool*> var_14, val<unsigned long long int*> var_15, val<unsigned char*> var_16, val<unsigned long long int*> var_17, val<unsigned long long int*> var_18, val<unsigned int*> var_19, val<unsigned long long int*> var_20, val<unsigned long long int*> var_21, val<short*> var_22, val<unsigned long long int*> var_23, val<unsigned long long int*> var_24, val<unsigned int*> var_25, val<short*> var_26, val<unsigned long long int*> var_27, val<long long int*> var_28) {
    *var_14 &= ((/* implicit */val<bool>) var_4);
    *var_15 &= ((/* implicit */val<unsigned long long int>) var_3);
    if (((/* implicit */val<bool>) ((val<short>) (((+(13729678890884193364ULL))) << (((/* implicit */val<int>) var_9))))))
    {
        if (((/* implicit */val<bool>) min((min((max((var_10), (((/* implicit */val<unsigned int>) var_5)))), (((/* implicit */val<unsigned int>) var_8)))), (var_2))))
        {
            *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_0)) ? (((((/* implicit */val<bool>) (~(1101714798U)))) ? (max((1086778214U), (((/* implicit */val<unsigned int>) -554440692)))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)(-127 - 1))))));
            if (((/* implicit */val<bool>) var_0))
            {
                *var_17 |= ((/* implicit */val<unsigned long long int>) 517077162U);
                *var_18 &= ((/* implicit */val<unsigned long long int>) ((1431646900U) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))));
                *var_19 += ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))) : (((((/* implicit */val<bool>) 3966971203U)) ? (((((/* implicit */val<bool>) -554440710)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))) : (var_12))) : (min((var_12), (((/* implicit */val<long long int>) var_7))))))));
                *var_20 &= ((/* implicit */val<unsigned long long int>) (+(max((max((var_2), (var_7))), (((/* implicit */val<unsigned int>) ((var_12) == (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))))))))));
                *var_21 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_10)) ? (var_7) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_11)) ? (554440712) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) -554440710))))))))));
            }

        }
        else
        {
            *var_22 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (val<short>)-1)) ? (((/* implicit */val<int>) (val<short>)32767)) : (((/* implicit */val<int>) var_13))));
            *var_23 = ((/* implicit */val<unsigned long long int>) (+(var_6)));
        }

        *var_24 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (val<unsigned char>)135))));
        *var_25 ^= ((/* implicit */val<unsigned int>) min((((/* implicit */val<unsigned long long int>) ((val<bool>) ((val<unsigned char>) (val<unsigned char>)27)))), ((~(2569854150394308673ULL)))));
        *var_26 = ((/* implicit */val<short>) max((*var_26), (((/* implicit */val<short>) ((((/* implicit */val<bool>) var_12)) ? (((((((/* implicit */val<int>) (val<bool>)1)) < (((/* implicit */val<int>) (val<short>)297)))) ? (((/* implicit */val<unsigned long long int>) 3208189081U)) : (8204346831883076866ULL))) : (((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<bool>) -554440704)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)58))) : (16383U))), (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_9)))))))))))));
    }
    else
    {
        *var_27 = ((/* implicit */val<unsigned long long int>) var_0);
        *var_28 = ((/* implicit */val<long long int>) var_7);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2205618628U;
unsigned int var_2 = 3272625642U;
unsigned char var_3 = (unsigned char)226;
unsigned char var_4 = (unsigned char)226;
int var_5 = 53867059;
unsigned int var_6 = 1711201737U;
unsigned int var_7 = 3375766861U;
bool var_8 = (bool)0;
signed char var_9 = (signed char)23;
unsigned int var_10 = 772844743U;
short var_11 = (short)10334;
long long int var_12 = -7851443646818413311LL;
unsigned char var_13 = (unsigned char)132;
int zero = 0;
bool var_14 = (bool)0;
unsigned long long int var_15 = 13652147296843945179ULL;
unsigned char var_16 = (unsigned char)231;
unsigned long long int var_17 = 4209772769108226129ULL;
unsigned long long int var_18 = 383429097804351676ULL;
unsigned int var_19 = 4273317719U;
unsigned long long int var_20 = 1871480908620748706ULL;
unsigned long long int var_21 = 1643314680676188106ULL;
short var_22 = (short)8564;
unsigned long long int var_23 = 13561930246725150470ULL;
unsigned long long int var_24 = 8558155513138478414ULL;
unsigned int var_25 = 2923952482U;
short var_26 = (short)-3399;
unsigned long long int var_27 = 590017769798715497ULL;
long long int var_28 = -9068461368080443746LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)0;
    value_mismatch |= var_15 != 194ULL;
    value_mismatch |= var_16 != (unsigned char)231;
    value_mismatch |= var_17 != 4209772769108226129ULL;
    value_mismatch |= var_18 != 383429097804351676ULL;
    value_mismatch |= var_19 != 4273317719U;
    value_mismatch |= var_20 != 1871480908620748706ULL;
    value_mismatch |= var_21 != 1643314680676188106ULL;
    value_mismatch |= var_22 != (short)8564;
    value_mismatch |= var_23 != 13561930246725150470ULL;
    value_mismatch |= var_24 != 8558155513138478414ULL;
    value_mismatch |= var_25 != 2923952482U;
    value_mismatch |= var_26 != (short)-3399;
    value_mismatch |= var_27 != 2205618628ULL;
    value_mismatch |= var_28 != 3375766861LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28);
  checksum();
  assert(!value_mismatch);
}
