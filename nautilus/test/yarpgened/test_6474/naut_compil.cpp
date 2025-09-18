/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6474
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6474
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
void test(val<short> var_0, val<unsigned long long int> var_4, val<unsigned short> var_5, val<unsigned long long int> var_6, val<bool> var_8, val<long long int> var_9, val<short> var_11, val<unsigned char> var_12, val<int> zero, val<unsigned char*> var_13, val<signed char*> var_14, val<unsigned short*> var_15, val<int*> var_16, val<short*> var_17, val<unsigned short*> var_18, val<long long int*> var_19, val<short*> var_20) {
    *var_13 = ((/* implicit */val<unsigned char>) var_11);
    if (((/* implicit */val<bool>) var_9))
    {
        if (((/* implicit */val<bool>) var_5))
        {
            if (((/* implicit */val<bool>) var_11))
            {
                *var_14 = ((/* implicit */val<signed char>) (val<unsigned char>)38);
                *var_15 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) min((min((((/* implicit */val<unsigned long long int>) var_8)), (var_4))), (((/* implicit */val<unsigned long long int>) ((val<unsigned char>) (val<unsigned short>)17207)))))) ? (var_6) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<signed char>) ((((/* implicit */val<bool>) (val<unsigned short>)20230)) ? (var_4) : (((/* implicit */val<unsigned long long int>) -1464308461)))))))));
                *var_16 = ((/* implicit */val<int>) var_8);
            }

            if (((/* implicit */val<bool>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)20230)) ? (((/* implicit */val<int>) (val<signed char>)73)) : (((/* implicit */val<int>) var_0))))) ? (var_6) : (((/* implicit */val<unsigned long long int>) var_9)))) << (((((/* implicit */val<int>) var_11)) - (4561))))))
            {
                *var_17 = ((/* implicit */val<short>) min((((val<unsigned short>) (val<short>)-16346)), (((/* implicit */val<unsigned short>) ((val<short>) var_5)))));
                *var_18 = var_5;
                *var_19 = ((/* implicit */val<long long int>) var_12);
            }

        }

        *var_20 = ((/* implicit */val<short>) var_8);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11796;
unsigned long long int var_4 = 2904931545611625797ULL;
unsigned short var_5 = (unsigned short)20890;
unsigned long long int var_6 = 3609803545869703861ULL;
bool var_8 = (bool)0;
long long int var_9 = -3597854996769617883LL;
short var_11 = (short)4574;
unsigned char var_12 = (unsigned char)254;
int zero = 0;
unsigned char var_13 = (unsigned char)230;
signed char var_14 = (signed char)-58;
unsigned short var_15 = (unsigned short)12678;
int var_16 = 168720329;
short var_17 = (short)-24195;
unsigned short var_18 = (unsigned short)19575;
long long int var_19 = 8987431779688483907LL;
short var_20 = (short)-17942;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)222;
    value_mismatch |= var_14 != (signed char)38;
    value_mismatch |= var_15 != (unsigned short)69;
    value_mismatch |= var_16 != 0;
    value_mismatch |= var_17 != (short)20890;
    value_mismatch |= var_18 != (unsigned short)20890;
    value_mismatch |= var_19 != 254LL;
    value_mismatch |= var_20 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_6, var_8, var_9, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
