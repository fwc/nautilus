/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7294
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7294
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
void test(val<short> var_4, val<int> var_11, val<int> zero, val<unsigned int*> var_14, val<short*> var_15) {
    *var_14 = ((/* implicit */val<unsigned int>) var_11);
    *var_15 = ((/* implicit */val<short>) (((!(((/* implicit */val<bool>) var_4)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) : ((+(min((1984387921U), (2310579374U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)11951;
int var_11 = -343959677;
int zero = 0;
unsigned int var_14 = 3404793437U;
short var_15 = (short)-28354;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 3951007619U;
    value_mismatch |= var_15 != (short)23377;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_11, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
