/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3595
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3595
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
void test(val<signed char> var_0, val<unsigned long long int> var_1, val<unsigned int> var_2, val<bool> var_4, val<bool> var_5, val<signed char> var_6, val<unsigned short> var_7, val<unsigned char> var_8, val<unsigned short> var_9, val<signed char> var_10, val<unsigned int> var_11, val<unsigned long long int> var_12, val<signed char> var_13, val<bool> var_14, val<int> var_15, val<int> zero, val<unsigned short*> var_17, val<unsigned short*> var_18, val<unsigned char*> var_19, val<short*> var_20, val<signed char*> var_21, val<bool*> var_22, val<short*> var_23, val<unsigned long long int*> var_24, val<bool*> var_25, val<bool*> var_26, val<int*> var_27, val<unsigned char*> var_28, val<signed char*> var_29) {
    *var_17 = ((/* implicit */val<unsigned short>) ((val<int>) (val<bool>)1));
    if ((val<bool>)1)
    {
        *var_18 ^= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_1)) ? (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) ((((/* implicit */val<int>) var_5)) == (((/* implicit */val<int>) var_8))))))) : (((/* implicit */val<int>) var_9))));
        *var_19 |= ((/* implicit */val<unsigned char>) min((((/* implicit */val<signed char>) var_14)), (var_13)));
        if (((/* implicit */val<bool>) ((((min(((val<bool>)1), ((val<bool>)1))) && (((/* implicit */val<bool>) var_15)))) ? (min((((/* implicit */val<unsigned long long int>) var_7)), (((var_4) ? (((/* implicit */val<unsigned long long int>) var_2)) : (var_12))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_5)) <= (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_10)) && (((/* implicit */val<bool>) var_0))))))))))))
        {
            *var_20 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) min((((((/* implicit */val<int>) var_5)) < (((/* implicit */val<int>) var_10)))), ((val<bool>)1))))));
            *var_21 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_10)) - (((/* implicit */val<int>) var_8))))) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_6)))))));
            *var_22 = ((/* implicit */val<bool>) var_10);
            *var_23 ^= ((/* implicit */val<short>) var_5);
        }
        else
        {
            *var_24 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) ((((/* implicit */val<bool>) var_6)) || (((/* implicit */val<bool>) (val<signed char>)-52)))))))) ? ((-(((/* implicit */val<int>) ((val<signed char>) (val<bool>)1))))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (~(var_1)))))))));
            *var_25 = ((/* implicit */val<bool>) min((((((var_2) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_14))))) ? (((/* implicit */val<unsigned long long int>) var_2)) : (min((((/* implicit */val<unsigned long long int>) var_0)), (var_12))))), (((/* implicit */val<unsigned long long int>) var_5))));
            *var_26 = ((/* implicit */val<bool>) (-(var_11)));
        }

    }
    else
    {
        *var_27 = ((/* implicit */val<int>) ((val<signed char>) var_0));
        *var_28 |= ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) var_6)) >> (((((/* implicit */val<int>) var_10)) - (13)))));
        *var_29 = ((/* implicit */val<signed char>) var_14);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-64;
unsigned long long int var_1 = 1939033295797590336ULL;
unsigned int var_2 = 2412890205U;
bool var_4 = (bool)0;
bool var_5 = (bool)1;
signed char var_6 = (signed char)30;
unsigned short var_7 = (unsigned short)46311;
unsigned char var_8 = (unsigned char)173;
unsigned short var_9 = (unsigned short)58330;
signed char var_10 = (signed char)39;
unsigned int var_11 = 3903408496U;
unsigned long long int var_12 = 10862619003146541700ULL;
signed char var_13 = (signed char)-87;
bool var_14 = (bool)1;
int var_15 = -782244169;
int zero = 0;
unsigned short var_17 = (unsigned short)48377;
unsigned short var_18 = (unsigned short)46528;
unsigned char var_19 = (unsigned char)62;
short var_20 = (short)16621;
signed char var_21 = (signed char)-99;
bool var_22 = (bool)1;
short var_23 = (short)-28364;
unsigned long long int var_24 = 1613884601429163260ULL;
bool var_25 = (bool)0;
bool var_26 = (bool)1;
int var_27 = 582767765;
unsigned char var_28 = (unsigned char)20;
signed char var_29 = (signed char)67;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)1;
    value_mismatch |= var_18 != (unsigned short)46558;
    value_mismatch |= var_19 != (unsigned char)191;
    value_mismatch |= var_20 != (short)-2;
    value_mismatch |= var_21 != (signed char)0;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != (short)-28363;
    value_mismatch |= var_24 != 1613884601429163260ULL;
    value_mismatch |= var_25 != (bool)0;
    value_mismatch |= var_26 != (bool)1;
    value_mismatch |= var_27 != 582767765;
    value_mismatch |= var_28 != (unsigned char)20;
    value_mismatch |= var_29 != (signed char)67;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28, &var_29);
  checksum();
}
