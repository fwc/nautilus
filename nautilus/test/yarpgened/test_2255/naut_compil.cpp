/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2255
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2255
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
void test(val<int> var_0, val<signed char> var_1, val<int> var_2, val<long long int> var_3, val<long long int> var_4, val<unsigned short> var_5, val<long long int> var_6, val<short> var_7, val<signed char> var_8, val<unsigned int> var_10, val<long long int> var_11, val<unsigned int> var_12, val<bool> var_14, val<int> zero, val<unsigned short*> var_16, val<signed char*> var_17, val<bool*> var_18, val<long long int*> var_19, val<short*> var_20, val<short*> var_21, val<long long int*> var_22, val<int*> var_23, val<short*> var_24, val<long long int*> var_25) {
    if (((/* implicit */val<bool>) var_11))
    {
        *var_16 = ((/* implicit */val<unsigned short>) (val<bool>)1);
        *var_17 = ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)114))) > (0ULL)))), (((((/* implicit */val<unsigned long long int>) -7675597077680246587LL)) / (18446744073709551615ULL)))));
        *var_18 = ((/* implicit */val<bool>) (~(18446744073709551602ULL)));
    }

    *var_19 = ((((/* implicit */val<bool>) max((max((var_2), (var_2))), ((((val<bool>)1) ? (var_0) : (((/* implicit */val<int>) var_14))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (((((((/* implicit */val<bool>) (val<unsigned char>)244)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (var_4))) * (((/* implicit */val<long long int>) ((/* implicit */val<int>) min(((val<unsigned char>)148), ((val<unsigned char>)255))))))));
    *var_20 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_6)) ? ((((((+(((/* implicit */val<int>) var_8)))) + (2147483647))) << (((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_14))) : (6878780980669385074ULL))))) : (((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_1)), (var_5))))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_5))))) ? (var_0) : (503316480))))
    {
        *var_21 -= ((/* implicit */val<short>) var_8);
        *var_22 = ((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) (val<unsigned char>)148)), ((-9223372036854775807LL - 1LL))))) ? (min((18446744073709551615ULL), (1567285142886226149ULL))) : (((/* implicit */val<unsigned long long int>) ((4294967292U) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)6314)))))))) >> (((/* implicit */val<int>) (val<bool>)1))));
        if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_6) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7)))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)43999)) ? (((/* implicit */val<long long int>) var_2)) : (var_11)))) ? (var_10) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-14006))))) : (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) 4294967295U)))))))))))
        {
            *var_23 = ((/* implicit */val<int>) ((val<unsigned long long int>) var_7));
            *var_24 ^= ((/* implicit */val<short>) ((val<int>) ((((/* implicit */val<long long int>) 1658207757U)) >= (max((((/* implicit */val<long long int>) 496U)), (var_3))))));
            *var_25 = ((/* implicit */val<long long int>) max((*var_25), (var_4)));
        }

    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -89177221;
signed char var_1 = (signed char)-12;
int var_2 = -1362221837;
long long int var_3 = -1738644351901294766LL;
long long int var_4 = -8075362089289880922LL;
unsigned short var_5 = (unsigned short)14244;
long long int var_6 = 6101191040048985172LL;
short var_7 = (short)-17005;
signed char var_8 = (signed char)-99;
unsigned int var_10 = 119291890U;
long long int var_11 = -8660448769723879119LL;
unsigned int var_12 = 368063114U;
bool var_14 = (bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)54330;
signed char var_17 = (signed char)22;
bool var_18 = (bool)0;
long long int var_19 = -2551083636403965465LL;
short var_20 = (short)-13989;
short var_21 = (short)5313;
long long int var_22 = -5276331788315198708LL;
int var_23 = 505290218;
short var_24 = (short)16038;
long long int var_25 = 293693378607006850LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)1;
    value_mismatch |= var_17 != (signed char)1;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 1LL;
    value_mismatch |= var_20 != (short)-200;
    value_mismatch |= var_21 != (short)5412;
    value_mismatch |= var_22 != 783642571443113074LL;
    value_mismatch |= var_23 != -17005;
    value_mismatch |= var_24 != (short)16039;
    value_mismatch |= var_25 != 293693378607006850LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_10, var_11, var_12, var_14, zero, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
}
