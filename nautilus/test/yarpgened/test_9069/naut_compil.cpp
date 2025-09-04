/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9069
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9069
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
void test(val<unsigned long long int> var_0, val<unsigned long long int> var_1, val<signed char> var_2, val<unsigned short> var_3, val<unsigned long long int> var_5, val<unsigned char> var_6, val<unsigned int> var_8, val<unsigned long long int> var_9, val<unsigned int> var_11, val<signed char> var_12, val<int> zero, val<signed char*> var_15, val<bool*> var_16, val<unsigned char*> var_17) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (var_0) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)242)))))) ? (((((/* implicit */val<bool>) (val<signed char>)40)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) : (var_1))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_1))))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) : (max((((/* implicit */val<unsigned long long int>) ((var_1) > (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2)))))), (((val<unsigned long long int>) var_8)))))))
    {
        *var_15 = ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) ((var_0) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)0)))))), (((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) (val<unsigned char>)248))))))), (((((/* implicit */val<bool>) max((((/* implicit */val<unsigned char>) var_12)), (var_6)))) ? (var_8) : (((var_11) >> (((var_1) - (16960455977971666481ULL)))))))));
        *var_16 = ((/* implicit */val<bool>) 18446744073709551610ULL);
    }

    *var_17 &= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (((!((val<bool>)1))) ? (var_9) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2)))))) ? (((18446744073709551600ULL) / (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) * (var_0))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned char>)244)) >> (((var_5) - (6830262918201671124ULL)))))) ? (((/* implicit */val<int>) min(((val<unsigned char>)114), (((/* implicit */val<unsigned char>) (val<bool>)1))))) : (((/* implicit */val<int>) (val<unsigned char>)0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7535298836029964546ULL;
unsigned long long int var_1 = 16960455977971666483ULL;
signed char var_2 = (signed char)87;
unsigned short var_3 = (unsigned short)41019;
unsigned long long int var_5 = 6830262918201671132ULL;
unsigned char var_6 = (unsigned char)35;
unsigned int var_8 = 1587474491U;
unsigned long long int var_9 = 17136807421227006305ULL;
unsigned int var_11 = 1468276165U;
signed char var_12 = (signed char)94;
int zero = 0;
signed char var_15 = (signed char)-9;
bool var_16 = (bool)1;
unsigned char var_17 = (unsigned char)113;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)59;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_8, var_9, var_11, var_12, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
