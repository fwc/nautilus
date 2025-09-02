/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6100
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6100
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
void test(val<int> var_10, val<unsigned short> var_15, val<int> zero, val<signed char*> var_16, val<unsigned int*> var_17) {
    *var_16 = ((/* implicit */val<signed char>) 2225792474U);
    *var_17 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) (val<short>)-1)) : (((/* implicit */val<int>) var_15))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 1546639889;
unsigned short var_15 = (unsigned short)6987;
int zero = 0;
signed char var_16 = (signed char)-113;
unsigned int var_17 = 964145112U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)-38;
    value_mismatch |= var_17 != 4294967295U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_15, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
