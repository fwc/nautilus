/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 93
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=93
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
void test(val<long long int> var_4, val<int> zero, val<unsigned int*> var_12, val<long long int*> var_13) {
    *var_12 = ((val<unsigned int>) var_4);
    *var_13 -= ((/* implicit */val<long long int>) (~(3202729204U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8727100070182059285LL;
int zero = 0;
unsigned int var_12 = 2642074996U;
long long int var_13 = 1430361300080639723LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1837302507U;
    value_mismatch |= var_13 != 1430361298988401632LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
