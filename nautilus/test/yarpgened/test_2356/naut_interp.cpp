/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2356
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2356
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
void test(val<signed char> var_1, val<unsigned int> var_2, val<signed char> var_3, val<unsigned int> var_5, val<short> var_8, val<unsigned char> var_10, val<signed char> var_11, val<signed char> var_12, val<int> zero, val<unsigned long long int*> var_14, val<long long int*> var_15, val<int*> var_16, val<unsigned short*> var_17, val<unsigned long long int*> var_18) {
    *var_14 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<unsigned char>)183)) >> (((max((((/* implicit */val<int>) var_3)), ((+(((/* implicit */val<int>) var_12)))))) - (109)))));
    *var_15 ^= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_1)) ? (((((((/* implicit */val<bool>) (val<short>)-1)) ? (((/* implicit */val<unsigned long long int>) -6168171699340844223LL)) : (15895760663867330082ULL))) / (((/* implicit */val<unsigned long long int>) ((var_2) >> (((((/* implicit */val<int>) (val<signed char>)-64)) + (82)))))))) : (((/* implicit */val<unsigned long long int>) (+(((((/* implicit */val<int>) var_8)) / (((/* implicit */val<int>) var_11)))))))));
    *var_16 &= ((/* implicit */val<int>) ((var_5) + (((/* implicit */val<unsigned int>) (((+(((/* implicit */val<int>) var_3)))) & (((/* implicit */val<int>) (val<short>)0)))))));
    *var_17 = ((/* implicit */val<unsigned short>) max((*var_17), (((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<short>) var_11))) ? (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)25))) > (1342718113961894421ULL)))) : (((/* implicit */val<int>) var_10))))))))));
    *var_18 = 1342718113961894421ULL;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)99;
unsigned int var_2 = 1716568331U;
signed char var_3 = (signed char)-59;
unsigned int var_5 = 3705892730U;
short var_8 = (short)-18061;
unsigned char var_10 = (unsigned char)103;
signed char var_11 = (signed char)8;
signed char var_12 = (signed char)117;
int zero = 0;
unsigned long long int var_14 = 7208521565103850954ULL;
long long int var_15 = 6308538613797806867LL;
int var_16 = 172024061;
unsigned short var_17 = (unsigned short)41815;
unsigned long long int var_18 = 13743785583598746070ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 0ULL;
    value_mismatch |= var_15 != 6308073041120938455LL;
    value_mismatch |= var_16 != 138436728;
    value_mismatch |= var_17 != (unsigned short)41815;
    value_mismatch |= var_18 != 1342718113961894421ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_8, var_10, var_11, var_12, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
