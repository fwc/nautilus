/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7490
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7490
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
void test(val<unsigned char> var_0, val<unsigned int> var_2, val<unsigned int> var_3, val<bool> var_6, val<signed char> var_7, val<signed char> var_9, val<int> var_11, val<unsigned char> var_12, val<int> zero, val<signed char*> var_19, val<int*> var_20, val<signed char*> var_21, val<bool*> var_22) {
    *var_19 = ((/* implicit */val<signed char>) (!(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)218)) ? (-917516131859541392LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7)))))) || (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_0)) | (var_11))))))));
    if (((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_6)))))
    {
        *var_20 = var_11;
        *var_21 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_7)) << (((((((/* implicit */val<bool>) -1338525796)) ? (((((/* implicit */val<bool>) -917516131859541392LL)) ? (var_2) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))))) : (var_3))) - (2696351850U)))));
        *var_22 = ((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_12))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
unsigned int var_2 = 2696351858U;
unsigned int var_3 = 1078759575U;
bool var_6 = (bool)1;
signed char var_7 = (signed char)31;
signed char var_9 = (signed char)100;
int var_11 = -545697799;
unsigned char var_12 = (unsigned char)253;
int zero = 0;
signed char var_19 = (signed char)-127;
int var_20 = -995946145;
signed char var_21 = (signed char)-88;
bool var_22 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)0;
    value_mismatch |= var_20 != -545697799;
    value_mismatch |= var_21 != (signed char)0;
    value_mismatch |= var_22 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_6, var_7, var_9, var_11, var_12, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
