/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3603
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3603
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
void test(val<unsigned int> var_2, val<unsigned int> var_5, val<unsigned int> var_7, val<unsigned int> var_8, val<unsigned int> var_11, val<int> zero, val<unsigned int*> var_12, val<unsigned int*> var_13, val<unsigned int*> var_14) {
    *var_12 = ((val<unsigned int>) var_11);
    *var_13 = ((/* implicit */val<unsigned int>) ((var_2) >= ((+(var_2)))));
    *var_14 -= ((((/* implicit */val<bool>) min((var_5), (2433435921U)))) ? (((((/* implicit */val<bool>) var_7)) ? ((+(var_2))) : (var_5))) : (var_8));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2486673822U;
unsigned int var_5 = 3443926518U;
unsigned int var_7 = 4273463047U;
unsigned int var_8 = 3684763315U;
unsigned int var_11 = 3068514686U;
int zero = 0;
unsigned int var_12 = 2779281737U;
unsigned int var_13 = 827830754U;
unsigned int var_14 = 3140726551U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 3068514686U;
    value_mismatch |= var_13 != 1U;
    value_mismatch |= var_14 != 654052729U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, var_8, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
