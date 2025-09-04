/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2702
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2702
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
void test(val<unsigned long long int> var_0, val<unsigned int> var_1, val<unsigned int> var_6, val<int> zero, val<unsigned long long int*> var_14, val<unsigned int*> var_15, val<unsigned int*> var_16) {
    *var_14 = (-(((max(((val<bool>)1), ((val<bool>)1))) ? (var_0) : (((/* implicit */val<unsigned long long int>) var_1)))));
    *var_15 = ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) var_6))));
    *var_16 = ((/* implicit */val<unsigned int>) (val<bool>)1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12129628226835071258ULL;
unsigned int var_1 = 485335614U;
unsigned int var_6 = 1957536964U;
int zero = 0;
unsigned long long int var_14 = 9075608036440495838ULL;
unsigned int var_15 = 797528559U;
unsigned int var_16 = 715833792U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 6317115846874480358ULL;
    value_mismatch |= var_15 != 0U;
    value_mismatch |= var_16 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
