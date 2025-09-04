/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5377
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5377
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
void test(val<unsigned int> var_4, val<unsigned int> var_5, val<short> var_18, val<int> zero, val<unsigned int*> var_19, val<unsigned int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<short>) (!(((/* implicit */val<bool>) var_4))))))) >= (min((var_4), (var_5)))));
    *var_20 = ((/* implicit */val<unsigned int>) var_18);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2774055488U;
unsigned int var_5 = 1725040807U;
short var_18 = (short)20116;
int zero = 0;
unsigned int var_19 = 4211564962U;
unsigned int var_20 = 894421899U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 0U;
    value_mismatch |= var_20 != 20116U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
