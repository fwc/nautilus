/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2179
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2179
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
void test(val<signed char> var_6, val<int> var_9, val<long long int> var_11, val<int> zero, val<signed char*> var_13, val<int*> var_14) {
    *var_13 = ((/* implicit */val<signed char>) var_9);
    *var_14 = ((/* implicit */val<int>) max((((/* implicit */val<long long int>) var_6)), (((min((var_11), (((/* implicit */val<long long int>) var_9)))) - (var_11)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)29;
int var_9 = 1404835346;
long long int var_11 = -2870649924723039678LL;
int zero = 0;
signed char var_13 = (signed char)-74;
int var_14 = 505050649;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)18;
    value_mismatch |= var_14 != 29;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
