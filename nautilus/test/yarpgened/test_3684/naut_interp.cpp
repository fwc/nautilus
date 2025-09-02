/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3684
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3684
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
void test(val<bool> var_0, val<bool> var_2, val<unsigned char> var_3, val<unsigned short> var_4, val<unsigned short> var_5, val<unsigned char> var_7, val<bool> var_8, val<unsigned char> var_9, val<unsigned int> var_10, val<unsigned short> var_11, val<unsigned long long int> var_12, val<unsigned int> var_14, val<bool> var_16, val<int> zero, val<bool*> var_17, val<bool*> var_18, val<unsigned int*> var_19, val<unsigned char*> var_20, val<unsigned long long int*> var_21, val<unsigned long long int*> var_22, val<signed char*> var_23, val<unsigned char*> var_24, val<unsigned char*> var_25, val<unsigned char*> var_26) {
    if ((!(((/* implicit */val<bool>) var_7))))
    {
        *var_17 = ((/* implicit */val<bool>) max((*var_17), (((/* implicit */val<bool>) var_12))));
        if ((val<bool>)1)
        {
            *var_18 ^= ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_5))))) >= (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_11)) && (((/* implicit */val<bool>) var_3))))));
            *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_2))))) : (min((4294967295U), (((/* implicit */val<unsigned int>) var_8))))))) ? (((((/* implicit */val<bool>) ((var_8) ? (var_12) : (((/* implicit */val<unsigned long long int>) 336031741U))))) ? (((/* implicit */val<int>) (val<bool>)0)) : ((~(((/* implicit */val<int>) (val<unsigned char>)255)))))) : (((/* implicit */val<int>) var_8))));
            if (((val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_7)) - (((/* implicit */val<int>) (val<unsigned char>)244))))) ? (((/* implicit */val<int>) (val<unsigned char>)255)) : ((+(((/* implicit */val<int>) var_4)))))))
            {
                *var_20 += ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) (val<bool>)1)), (1205289717U)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned char>)235)) || (((/* implicit */val<bool>) var_11)))))) : (var_10))))));
                *var_21 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_9)), (var_14)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min((var_11), (((/* implicit */val<unsigned short>) var_9)))))) : (18446744073709551615ULL)))) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<unsigned char>)127))));
                *var_22 = var_12;
            }

            *var_23 = ((/* implicit */val<signed char>) (+(((/* implicit */val<int>) (val<unsigned char>)192))));
            *var_24 = ((/* implicit */val<unsigned char>) var_11);
        }

    }

    *var_25 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (9007199187632128ULL) : (((/* implicit */val<unsigned long long int>) ((var_14) & (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))))))))) ? (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<unsigned char>)252))))) : (5080765108994236813ULL)));
    *var_26 ^= ((/* implicit */val<unsigned char>) var_16);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
bool var_2 = (bool)1;
unsigned char var_3 = (unsigned char)113;
unsigned short var_4 = (unsigned short)58432;
unsigned short var_5 = (unsigned short)63339;
unsigned char var_7 = (unsigned char)149;
bool var_8 = (bool)1;
unsigned char var_9 = (unsigned char)104;
unsigned int var_10 = 731750067U;
unsigned short var_11 = (unsigned short)40345;
unsigned long long int var_12 = 897955364989550722ULL;
unsigned int var_14 = 3239122079U;
bool var_16 = (bool)0;
int zero = 0;
bool var_17 = (bool)1;
bool var_18 = (bool)1;
unsigned int var_19 = 2235137043U;
unsigned char var_20 = (unsigned char)59;
unsigned long long int var_21 = 14295021510388512177ULL;
unsigned long long int var_22 = 5329874245862020824ULL;
signed char var_23 = (signed char)-89;
unsigned char var_24 = (unsigned char)255;
unsigned char var_25 = (unsigned char)147;
unsigned char var_26 = (unsigned char)91;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 2235137043U;
    value_mismatch |= var_20 != (unsigned char)59;
    value_mismatch |= var_21 != 14295021510388512177ULL;
    value_mismatch |= var_22 != 5329874245862020824ULL;
    value_mismatch |= var_23 != (signed char)-89;
    value_mismatch |= var_24 != (unsigned char)255;
    value_mismatch |= var_25 != (unsigned char)3;
    value_mismatch |= var_26 != (unsigned char)91;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_7, var_8, var_9, var_10, var_11, var_12, var_14, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26);
  checksum();
  assert(!value_mismatch);
}
