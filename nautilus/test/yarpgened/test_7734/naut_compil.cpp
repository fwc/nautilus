/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7734
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7734
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
void test(val<short> var_2, val<signed char> var_7, val<int> zero, val<short*> var_17, val<signed char*> var_18) {
    *var_17 = ((/* implicit */val<short>) var_7);
    *var_18 = ((/* implicit */val<signed char>) max((*var_18), (((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_2)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19742;
signed char var_7 = (signed char)-114;
int zero = 0;
short var_17 = (short)30273;
signed char var_18 = (signed char)-52;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)-114;
    value_mismatch |= var_18 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
