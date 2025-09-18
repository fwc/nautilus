/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5012
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5012
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
void test(val<unsigned int> var_0, val<int> var_3, val<signed char> var_10, val<int> zero, val<unsigned int*> var_13, val<int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)19223))) & (var_0)))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned short>)46313)) ? (((/* implicit */val<int>) var_10)) : (var_3)))) : (var_0)))) ? (((/* implicit */val<unsigned long long int>) var_3)) : (18446744073709551615ULL)));
    *var_14 = ((/* implicit */val<int>) 5ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2697857934U;
int var_3 = 202542585;
signed char var_10 = (signed char)-75;
int zero = 0;
unsigned int var_13 = 2432810385U;
int var_14 = 1997809261;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 202542585U;
    value_mismatch |= var_14 != 5;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_10, zero, &var_13, &var_14);
  checksum();
}
