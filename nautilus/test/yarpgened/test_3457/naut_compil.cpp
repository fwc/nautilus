/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3457
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3457
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
void test(val<long long int> var_3, val<int> var_13, val<int> zero, val<unsigned int*> var_15, val<long long int*> var_16, val<signed char*> var_17) {
    *var_15 = ((/* implicit */val<unsigned int>) var_3);
    *var_16 = ((/* implicit */val<long long int>) (+((+(var_13)))));
    *var_17 = ((/* implicit */val<signed char>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6991191501002137890LL;
int var_13 = -1513811535;
int zero = 0;
unsigned int var_15 = 1795205595U;
long long int var_16 = -2824459404967358672LL;
signed char var_17 = (signed char)-36;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 368468258U;
    value_mismatch |= var_16 != -1513811535LL;
    value_mismatch |= var_17 != (signed char)-79;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
