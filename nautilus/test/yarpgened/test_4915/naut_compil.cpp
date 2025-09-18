/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4915
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4915
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
void test(val<unsigned short> var_0, val<unsigned int> var_1, val<unsigned char> var_2, val<signed char> var_4, val<signed char> var_6, val<unsigned char> var_8, val<unsigned char> var_10, val<unsigned char> var_12, val<unsigned int> var_13, val<unsigned char> var_14, val<int> zero, val<unsigned char*> var_16, val<signed char*> var_17, val<unsigned char*> var_18, val<unsigned char*> var_19, val<unsigned char*> var_20, val<unsigned short*> var_21, val<unsigned int*> var_22, val<signed char*> var_23, val<unsigned int*> var_24) {
    *var_16 = ((/* implicit */val<unsigned char>) var_13);
    if (((((/* implicit */val<bool>) ((((2146654086U) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_14))))) ^ ((~(2146654075U)))))) && (((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) 4267768636U))))), (((val<unsigned int>) var_8)))))))
    {
        *var_17 = ((/* implicit */val<signed char>) (+(((/* implicit */val<int>) var_6))));
        *var_18 = var_12;
        if (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_12)) << (((((((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) (val<unsigned char>)174))))) & (((val<unsigned int>) var_1)))) - (3537525750U))))))
        {
            *var_19 = ((/* implicit */val<unsigned char>) (((-(((/* implicit */val<int>) var_2)))) - (((/* implicit */val<int>) ((val<signed char>) ((val<signed char>) var_12))))));
            *var_20 = ((/* implicit */val<unsigned char>) ((val<unsigned int>) (val<unsigned char>)197));
            *var_21 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_10))))) <= ((+(2148313207U))))) ? (((/* implicit */val<int>) var_2)) : (max(((+(((/* implicit */val<int>) var_10)))), ((+(((/* implicit */val<int>) var_4))))))));
            *var_22 ^= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 2146654090U)) && (((/* implicit */val<bool>) 2148313205U))));
        }

    }

    *var_23 += ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) (val<unsigned short>)20835))));
    *var_24 = ((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33416;
unsigned int var_1 = 3537525802U;
unsigned char var_2 = (unsigned char)218;
signed char var_4 = (signed char)-24;
signed char var_6 = (signed char)-6;
unsigned char var_8 = (unsigned char)215;
unsigned char var_10 = (unsigned char)90;
unsigned char var_12 = (unsigned char)230;
unsigned int var_13 = 2700375846U;
unsigned char var_14 = (unsigned char)78;
int zero = 0;
unsigned char var_16 = (unsigned char)48;
signed char var_17 = (signed char)99;
unsigned char var_18 = (unsigned char)19;
unsigned char var_19 = (unsigned char)205;
unsigned char var_20 = (unsigned char)185;
unsigned short var_21 = (unsigned short)51899;
unsigned int var_22 = 1230129869U;
signed char var_23 = (signed char)100;
unsigned int var_24 = 3871853654U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)38;
    value_mismatch |= var_17 != (signed char)99;
    value_mismatch |= var_18 != (unsigned char)19;
    value_mismatch |= var_19 != (unsigned char)205;
    value_mismatch |= var_20 != (unsigned char)185;
    value_mismatch |= var_21 != (unsigned short)51899;
    value_mismatch |= var_22 != 1230129869U;
    value_mismatch |= var_23 != (signed char)100;
    value_mismatch |= var_24 != 4294933880U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_8, var_10, var_12, var_13, var_14, zero, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
}
