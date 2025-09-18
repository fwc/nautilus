/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1682
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1682
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
void test(val<int> var_0, val<signed char> var_1, val<unsigned long long int> var_2, val<unsigned char> var_3, val<bool> var_4, val<unsigned short> var_5, val<unsigned int> var_6, val<unsigned char> var_7, val<bool> var_8, val<unsigned short> var_9, val<bool> var_10, val<unsigned char> var_11, val<int> var_12, val<long long int> var_13, val<long long int> var_14, val<unsigned short> var_15, val<unsigned char> var_16, val<int> zero, val<short*> var_17, val<long long int*> var_18, val<bool*> var_19, val<unsigned char*> var_20, val<unsigned int*> var_21, val<unsigned int*> var_22, val<long long int*> var_23, val<short*> var_24, val<unsigned int*> var_25, val<signed char*> var_26, val<unsigned long long int*> var_27, val<signed char*> var_28) {
    if (((/* implicit */val<bool>) var_5))
    {
        *var_17 -= ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned char>)206)) << (((((((/* implicit */val<int>) (val<bool>)0)) + (((/* implicit */val<int>) (val<short>)-24090)))) + (24099)))))) ? (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) var_9)) : (var_0))) << (max((((/* implicit */val<int>) var_10)), (var_0)))))) : (((((((/* implicit */val<bool>) (val<unsigned short>)65535)) && (((/* implicit */val<bool>) 1243740985U)))) ? (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)10))) + (18446744073709551607ULL))) : (((/* implicit */val<unsigned long long int>) -176484016))))));
        *var_18 = ((/* implicit */val<long long int>) max((((/* implicit */val<int>) var_11)), (((((/* implicit */val<int>) var_16)) & (((/* implicit */val<int>) var_10))))));
        *var_19 = ((/* implicit */val<bool>) var_6);
        *var_20 = ((/* implicit */val<unsigned char>) ((((((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_10)))) + (((((/* implicit */val<int>) var_8)) >> (((var_14) + (7138308130372160552LL))))))) - (((((((/* implicit */val<int>) (val<unsigned short>)65527)) / (-176484001))) ^ (((/* implicit */val<int>) (val<unsigned short>)65513))))));
        *var_21 = ((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) max((var_12), (((/* implicit */val<int>) var_7))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))) < (var_14))))) : (((var_2) ^ (((/* implicit */val<unsigned long long int>) var_12)))))) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11)))));
    }
    else
    {
        *var_22 ^= ((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<signed char>)69)) == (((/* implicit */val<int>) (val<unsigned short>)24))))) : (((((/* implicit */val<int>) var_4)) >> (((((/* implicit */val<int>) var_15)) - (52785))))))) - (((/* implicit */val<int>) ((((((/* implicit */val<int>) (val<unsigned short>)65504)) - (((/* implicit */val<int>) (val<unsigned char>)217)))) <= (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_3)))))))));
        *var_23 ^= ((/* implicit */val<long long int>) var_3);
        *var_24 = ((/* implicit */val<short>) ((((/* implicit */val<int>) var_8)) < (((/* implicit */val<int>) max((var_3), (var_3))))));
        *var_25 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned long long int>) ((max((var_14), (((/* implicit */val<long long int>) var_16)))) ^ (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) : (var_6))))))) ^ (((((var_2) << (((var_13) + (8165380102426956032LL))))) << (((/* implicit */val<int>) var_4))))));
        *var_26 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned short>)24)) <= (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned short>)65527)) && (((/* implicit */val<bool>) 9ULL)))))))) << (((((/* implicit */val<int>) (val<unsigned char>)255)) - (246)))));
    }

    *var_27 = ((/* implicit */val<unsigned long long int>) var_4);
    *var_28 += ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_1)) / (((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -178387154;
signed char var_1 = (signed char)12;
unsigned long long int var_2 = 17139977305286726885ULL;
unsigned char var_3 = (unsigned char)119;
bool var_4 = (bool)1;
unsigned short var_5 = (unsigned short)44539;
unsigned int var_6 = 1990453697U;
unsigned char var_7 = (unsigned char)28;
bool var_8 = (bool)1;
unsigned short var_9 = (unsigned short)26535;
bool var_10 = (bool)1;
unsigned char var_11 = (unsigned char)11;
int var_12 = -2080150872;
long long int var_13 = -8165380102426955993LL;
long long int var_14 = -7138308130372160531LL;
unsigned short var_15 = (unsigned short)52804;
unsigned char var_16 = (unsigned char)64;
int zero = 0;
short var_17 = (short)-575;
long long int var_18 = -8890502443296708617LL;
bool var_19 = (bool)0;
unsigned char var_20 = (unsigned char)59;
unsigned int var_21 = 1176354442U;
unsigned int var_22 = 2735778719U;
long long int var_23 = -3707722347222897927LL;
short var_24 = (short)-28361;
unsigned int var_25 = 1863677673U;
signed char var_26 = (signed char)103;
unsigned long long int var_27 = 12462857325866558232ULL;
signed char var_28 = (signed char)-66;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)11891;
    value_mismatch |= var_18 != 11LL;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (unsigned char)35;
    value_mismatch |= var_21 != 4294967285U;
    value_mismatch |= var_22 != 2735778719U;
    value_mismatch |= var_23 != -3707722347222897927LL;
    value_mismatch |= var_24 != (short)-28361;
    value_mismatch |= var_25 != 1863677673U;
    value_mismatch |= var_26 != (signed char)103;
    value_mismatch |= var_27 != 1ULL;
    value_mismatch |= var_28 != (signed char)-65;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28);
  checksum();
}
