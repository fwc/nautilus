/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4396
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4396
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
void test(val<bool> var_6, val<unsigned char> var_10, val<int> zero, val<long long int*> var_15, val<unsigned int*> var_16, val<long long int*> var_17) {
    *var_15 = ((/* implicit */val<long long int>) ((val<signed char>) ((val<long long int>) 6443679255397487381ULL)));
    *var_16 += ((/* implicit */val<unsigned int>) var_10);
    *var_17 = ((/* implicit */val<long long int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_6 = (bool)1;
unsigned char var_10 = (unsigned char)96;
int zero = 0;
long long int var_15 = 6984737836719539178LL;
unsigned int var_16 = 1137465875U;
long long int var_17 = 7250456351947165775LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 21LL;
    value_mismatch |= var_16 != 1137465971U;
    value_mismatch |= var_17 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_10, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
