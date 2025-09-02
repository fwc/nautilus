/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3944
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3944
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
void test(val<short> var_1, val<unsigned short> var_2, val<unsigned long long int> var_3, val<unsigned int> var_4, val<short> var_6, val<int> var_7, val<unsigned long long int> var_8, val<signed char> var_9, val<unsigned long long int> var_10, val<short> var_11, val<int> zero, val<short*> var_12, val<unsigned long long int*> var_13, val<bool*> var_14, val<unsigned long long int*> var_15, val<unsigned char*> var_16, val<unsigned int*> var_17, val<unsigned char*> var_18, val<bool*> var_19, val<unsigned long long int*> var_20, val<signed char*> var_21, val<unsigned long long int*> var_22, val<short*> var_23, val<unsigned long long int*> var_24, val<short*> var_25) {
    *var_12 = ((/* implicit */val<short>) var_3);
    if (((/* implicit */val<bool>) max((max((var_10), (((/* implicit */val<unsigned long long int>) ((val<unsigned char>) var_11))))), (var_8))))
    {
        *var_13 &= ((/* implicit */val<unsigned long long int>) var_6);
        *var_14 = (!(((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) max((-660551048), (((/* implicit */val<int>) var_9))))) | (8622493642224241356ULL)))));
        *var_15 -= ((/* implicit */val<unsigned long long int>) min(((+(((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) : (-6803451799037693289LL))))), (((/* implicit */val<long long int>) var_9))));
    }

    *var_16 = ((/* implicit */val<unsigned char>) min((*var_16), (((/* implicit */val<unsigned char>) max((var_1), (((/* implicit */val<short>) ((((/* implicit */val<int>) (val<unsigned short>)27883)) < (((val<int>) var_3))))))))));
    if (((/* implicit */val<bool>) max((9824250431485310260ULL), (((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<short>)-32759)) ? (4294967295U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))) + (((((/* implicit */val<bool>) var_10)) ? (9824250431485310249ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))))))))))
    {
        if (((/* implicit */val<bool>) max((((/* implicit */val<unsigned short>) var_9)), ((val<unsigned short>)3941))))
        {
            *var_17 = ((/* implicit */val<unsigned int>) max((*var_17), (((/* implicit */val<unsigned int>) (val<short>)-32744))));
            *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) (val<short>)-32747)), ((-(((/* implicit */val<int>) (val<short>)1473))))))) : ((-(((((/* implicit */val<bool>) (val<unsigned short>)3)) ? (var_4) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6)))))))));
            *var_19 = ((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) max((((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) (val<signed char>)73)) : (((/* implicit */val<int>) (val<short>)-32759)))), (((((/* implicit */val<bool>) (val<signed char>)-90)) ? (((/* implicit */val<int>) (val<signed char>)122)) : (((/* implicit */val<int>) (val<unsigned short>)15))))))), (((((/* implicit */val<bool>) ((val<unsigned short>) (val<unsigned char>)243))) ? (max((var_4), (((/* implicit */val<unsigned int>) var_1)))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) (val<short>)-32759)) : (((/* implicit */val<int>) (val<short>)32744)))))))));
            *var_20 = ((/* implicit */val<unsigned long long int>) max(((val<unsigned short>)3181), (((/* implicit */val<unsigned short>) (val<short>)32735))));
        }

        *var_21 &= ((/* implicit */val<signed char>) max((((/* implicit */val<int>) (val<signed char>)42)), ((-(((/* implicit */val<int>) var_11))))));
        if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)1136)) ? (var_10) : (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) (val<signed char>)-92)) ? (((/* implicit */val<int>) (val<short>)-32759)) : (((/* implicit */val<int>) var_9)))) + (((/* implicit */val<int>) var_6))))))))
        {
            *var_22 = ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((var_7), (((/* implicit */val<int>) (val<short>)1136))))) ? (((/* implicit */val<int>) ((((/* implicit */val<int>) var_6)) != (((/* implicit */val<int>) var_9))))) : (((/* implicit */val<int>) var_2))))) % (var_10));
            *var_23 = var_1;
        }

        *var_24 = var_8;
    }

    *var_25 = var_6;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28691;
unsigned short var_2 = (unsigned short)47758;
unsigned long long int var_3 = 17153988747262159227ULL;
unsigned int var_4 = 2098287658U;
short var_6 = (short)-13679;
int var_7 = 1663145148;
unsigned long long int var_8 = 170552182129907076ULL;
signed char var_9 = (signed char)-60;
unsigned long long int var_10 = 8024033101746489513ULL;
short var_11 = (short)-28974;
int zero = 0;
short var_12 = (short)-29981;
unsigned long long int var_13 = 5152642969039938350ULL;
bool var_14 = (bool)1;
unsigned long long int var_15 = 16088769246473580691ULL;
unsigned char var_16 = (unsigned char)3;
unsigned int var_17 = 2850919395U;
unsigned char var_18 = (unsigned char)218;
bool var_19 = (bool)1;
unsigned long long int var_20 = 3407617355477578028ULL;
signed char var_21 = (signed char)26;
unsigned long long int var_22 = 3689684210994692798ULL;
short var_23 = (short)25385;
unsigned long long int var_24 = 16404554633495194604ULL;
short var_25 = (short)4840;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)-5765;
    value_mismatch |= var_13 != 5152642969039929856ULL;
    value_mismatch |= var_14 != (bool)0;
    value_mismatch |= var_15 != 16088769246473609665ULL;
    value_mismatch |= var_16 != (unsigned char)3;
    value_mismatch |= var_17 != 4294934552U;
    value_mismatch |= var_18 != (unsigned char)21;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 32735ULL;
    value_mismatch |= var_21 != (signed char)10;
    value_mismatch |= var_22 != 1ULL;
    value_mismatch |= var_23 != (short)28691;
    value_mismatch |= var_24 != 170552182129907076ULL;
    value_mismatch |= var_25 != (short)-13679;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_6, var_7, var_8, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
