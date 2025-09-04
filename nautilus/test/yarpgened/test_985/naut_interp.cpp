/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 985
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=985
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
void test(val<signed char> var_1, val<int> zero, val<int*> var_15, val<signed char*> var_16, val<signed char*> var_17) {
    *var_15 = ((/* implicit */val<int>) max((*var_15), (((770367309) ^ (((/* implicit */val<int>) (val<signed char>)-31))))));
    *var_16 = ((/* implicit */val<signed char>) max((1), (((/* implicit */val<int>) (val<signed char>)-23))));
    *var_17 = var_1;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)103;
int zero = 0;
int var_15 = -882610547;
signed char var_16 = (signed char)36;
signed char var_17 = (signed char)-7;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != -770367316;
    value_mismatch |= var_16 != (signed char)1;
    value_mismatch |= var_17 != (signed char)103;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
