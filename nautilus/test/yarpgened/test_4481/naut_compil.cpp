/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4481
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4481
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
void test(val<short> var_0, val<signed char> var_2, val<unsigned int> var_3, val<bool> var_4, val<bool> var_5, val<unsigned char> var_6, val<int> var_7, val<bool> var_8, val<signed char> var_9, val<short> var_10, val<unsigned char> var_11, val<unsigned int> var_12, val<unsigned char> var_13, val<short> var_14, val<unsigned long long int> var_15, val<unsigned int> var_18, val<long long int> var_19, val<int> zero, val<signed char*> var_20, val<short*> var_21, val<unsigned char*> var_22, val<unsigned int*> var_23, val<long long int*> var_24, val<int*> var_25, val<long long int*> var_26, val<unsigned int*> var_27, val<unsigned int*> var_28, val<short*> var_29) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<int>) max((max((((/* implicit */val<short>) var_9)), (var_10))), (((/* implicit */val<short>) var_13))))) + (((/* implicit */val<int>) var_14)))))
    {
        if (((/* implicit */val<bool>) ((((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) + (var_12)))) && (((/* implicit */val<bool>) ((var_4) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11))) : (var_3)))))) ? (((((/* implicit */val<int>) (val<unsigned char>)4)) - (((/* implicit */val<int>) (val<short>)29929)))) : (((/* implicit */val<int>) var_5)))))
        {
            *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<long long int>) min((((var_12) >> (((/* implicit */val<int>) var_8)))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 1975982391U)) ? (((/* implicit */val<int>) (val<short>)-29930)) : (((/* implicit */val<int>) var_9)))))))) % (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 629154928)) ? (((/* implicit */val<int>) (val<short>)29929)) : (((/* implicit */val<int>) (val<signed char>)79))))) ? (max((((/* implicit */val<long long int>) (val<short>)29952)), (var_19))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6)))))));
            *var_21 += ((/* implicit */val<short>) ((min((var_4), (((var_3) != (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))))))) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_5))))) == (var_12))))));
            *var_22 -= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_19)) ? (((((/* implicit */val<bool>) ((var_4) ? (((/* implicit */val<unsigned int>) var_7)) : (var_3)))) ? (((((/* implicit */val<bool>) var_18)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) (val<signed char>)36)))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) -1))))))) : (((/* implicit */val<int>) var_0))));
        }
        else
        {
            *var_23 = ((/* implicit */val<unsigned int>) max((var_14), (((/* implicit */val<short>) ((((((/* implicit */val<int>) var_5)) ^ (((/* implicit */val<int>) (val<signed char>)96)))) != (((/* implicit */val<int>) var_11)))))));
            *var_24 = ((/* implicit */val<long long int>) var_15);
        }

        *var_25 = ((/* implicit */val<int>) (val<signed char>)96);
        *var_26 -= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_15)) ? (((((/* implicit */val<bool>) min(((val<unsigned short>)35925), ((val<unsigned short>)25)))) ? ((~(var_7))) : (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<short>)-32766)) == (491867161)))))) : (((/* implicit */val<int>) var_0))));
    }

    *var_27 = ((/* implicit */val<unsigned int>) var_2);
    *var_28 = ((/* implicit */val<unsigned int>) min((*var_28), (((/* implicit */val<unsigned int>) ((var_7) != ((((~(var_7))) & (((/* implicit */val<int>) var_14)))))))));
    *var_29 &= var_14;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12634;
signed char var_2 = (signed char)-109;
unsigned int var_3 = 3285651578U;
bool var_4 = (bool)0;
bool var_5 = (bool)0;
unsigned char var_6 = (unsigned char)213;
int var_7 = 170163894;
bool var_8 = (bool)0;
signed char var_9 = (signed char)-1;
short var_10 = (short)-23116;
unsigned char var_11 = (unsigned char)204;
unsigned int var_12 = 3291077778U;
unsigned char var_13 = (unsigned char)67;
short var_14 = (short)760;
unsigned long long int var_15 = 17787352333805224687ULL;
unsigned int var_18 = 3600451076U;
long long int var_19 = -6255764837792418932LL;
int zero = 0;
signed char var_20 = (signed char)-121;
short var_21 = (short)-25180;
unsigned char var_22 = (unsigned char)66;
unsigned int var_23 = 3359082547U;
long long int var_24 = -8370813546055436475LL;
int var_25 = 1067414485;
long long int var_26 = -5273161561026919712LL;
unsigned int var_27 = 3238685931U;
unsigned int var_28 = 3603791914U;
short var_29 = (short)-25111;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)-110;
    value_mismatch |= var_21 != (short)-25180;
    value_mismatch |= var_22 != (unsigned char)67;
    value_mismatch |= var_23 != 3359082547U;
    value_mismatch |= var_24 != -8370813546055436475LL;
    value_mismatch |= var_25 != 96;
    value_mismatch |= var_26 != -5273161560856755817LL;
    value_mismatch |= var_27 != 4294967187U;
    value_mismatch |= var_28 != 1U;
    value_mismatch |= var_29 != (short)232;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28, &var_29);
  checksum();
  assert(!value_mismatch);
}
