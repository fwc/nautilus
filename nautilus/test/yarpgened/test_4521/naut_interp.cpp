/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4521
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4521
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
void test(val<unsigned long long int> var_9, val<int> zero, val<int*> var_14, val<int*> var_15, val<unsigned long long int*> var_16) {
    *var_14 = 1048575;
    *var_15 = ((/* implicit */val<int>) var_9);
    *var_16 = (~(((val<unsigned long long int>) min((((/* implicit */val<unsigned long long int>) 1562149557)), (var_9)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 1669497190096680106ULL;
int zero = 0;
int var_14 = -13366828;
int var_15 = 1931457180;
unsigned long long int var_16 = 4870960574287842374ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1048575;
    value_mismatch |= var_15 != 1496954026;
    value_mismatch |= var_16 != 18446744072147402058ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
