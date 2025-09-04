/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9333
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9333
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
void test(val<signed char> var_1, val<short> var_5, val<short> var_6, val<unsigned short> var_7, val<long long int> var_8, val<short> var_10, val<signed char> var_12, val<unsigned short> var_14, val<long long int> var_15, val<bool> var_16, val<int> zero, val<unsigned char*> var_17, val<signed char*> var_18, val<bool*> var_19, val<int*> var_20, val<unsigned int*> var_21, val<bool*> var_22) {
    if (((/* implicit */val<bool>) ((2484666235107562936LL) << (((((/* implicit */val<int>) var_6)) - (29123))))))
    {
        *var_17 += ((/* implicit */val<unsigned char>) var_8);
        *var_18 &= ((/* implicit */val<signed char>) var_10);
        *var_19 = (((~(((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) (val<unsigned short>)59500)) : (((/* implicit */val<int>) var_12)))))) <= (max((((/* implicit */val<int>) var_14)), ((+(((/* implicit */val<int>) (val<unsigned char>)10)))))));
        *var_20 += ((((var_16) ? (((((/* implicit */val<int>) (val<unsigned char>)245)) >> (((((/* implicit */val<int>) (val<unsigned char>)245)) - (245))))) : (((/* implicit */val<int>) (val<signed char>)48)))) / (((/* implicit */val<int>) var_10)));
    }

    *var_21 = ((/* implicit */val<unsigned int>) min((*var_21), (((/* implicit */val<unsigned int>) var_5))));
    *var_22 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<unsigned char>)240))))) ? (var_15) : (((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-66;
short var_5 = (short)11879;
short var_6 = (short)29125;
unsigned short var_7 = (unsigned short)16393;
long long int var_8 = -3691052015513043669LL;
short var_10 = (short)17186;
signed char var_12 = (signed char)119;
unsigned short var_14 = (unsigned short)8442;
long long int var_15 = -4129299778007090317LL;
bool var_16 = (bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)85;
signed char var_18 = (signed char)55;
bool var_19 = (bool)0;
int var_20 = 514841021;
unsigned int var_21 = 860765138U;
bool var_22 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)128;
    value_mismatch |= var_18 != (signed char)34;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 514841021;
    value_mismatch |= var_21 != 11879U;
    value_mismatch |= var_22 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_6, var_7, var_8, var_10, var_12, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
