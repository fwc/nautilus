/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 118
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=118
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
void test(val<signed char> var_3, val<signed char> var_4, val<unsigned long long int> var_5, val<short> var_7, val<short> var_11, val<int> zero, val<unsigned char*> var_18, val<unsigned int*> var_19, val<signed char*> var_20) {
    *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_5)) ? (max((2190692377731659789LL), (((/* implicit */val<long long int>) (val<bool>)1)))) : ((+((-9223372036854775807LL - 1LL))))));
    *var_19 = ((/* implicit */val<unsigned int>) var_3);
    *var_20 = ((/* implicit */val<signed char>) (((val<bool>)1) ? (((((/* implicit */val<bool>) ((0LL) ^ (-6001374176851052000LL)))) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_7)))) : (((/* implicit */val<int>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)81;
signed char var_4 = (signed char)55;
unsigned long long int var_5 = 5552560164933422102ULL;
short var_7 = (short)13486;
short var_11 = (short)-30771;
int zero = 0;
unsigned char var_18 = (unsigned char)41;
unsigned int var_19 = 2798453209U;
signed char var_20 = (signed char)59;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)13;
    value_mismatch |= var_19 != 81U;
    value_mismatch |= var_20 != (signed char)-51;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_7, var_11, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
