/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1614
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1614
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
void test(val<unsigned int> var_0, val<int> var_2, val<unsigned int> var_8, val<int> zero, val<int*> var_20, val<unsigned int*> var_21) {
    *var_20 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned int>) var_2)) : (var_8)));
    *var_21 = ((/* implicit */val<unsigned int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 757542817U;
int var_2 = 1751335539;
unsigned int var_8 = 2922781126U;
int zero = 0;
int var_20 = 1676911290;
unsigned int var_21 = 726769898U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1751335539;
    value_mismatch |= var_21 != 1751335539U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_8, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
