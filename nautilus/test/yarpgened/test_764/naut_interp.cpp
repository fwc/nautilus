/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 764
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=764
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
void test(val<signed char> var_11, val<int> zero, val<signed char*> var_15, val<signed char*> var_16) {
    *var_15 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_11))));
    *var_16 = ((/* implicit */val<signed char>) 12891983633791531163ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)92;
int zero = 0;
signed char var_15 = (signed char)-19;
signed char var_16 = (signed char)-40;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)0;
    value_mismatch |= var_16 != (signed char)-101;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
