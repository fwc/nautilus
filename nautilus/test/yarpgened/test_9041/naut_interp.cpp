/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9041
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9041
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
void test(val<signed char> var_6, val<short> var_9, val<int> zero, val<signed char*> var_12, val<unsigned int*> var_13) {
    *var_12 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (val<signed char>)-14)) || (((/* implicit */val<bool>) var_6))));
    *var_13 = ((/* implicit */val<unsigned int>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-41;
short var_9 = (short)-20335;
int zero = 0;
signed char var_12 = (signed char)79;
unsigned int var_13 = 4245653601U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)1;
    value_mismatch |= var_13 != 4294946961U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
