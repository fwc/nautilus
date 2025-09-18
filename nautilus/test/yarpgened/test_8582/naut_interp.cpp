/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8582
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8582
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
void test(val<unsigned long long int> var_3, val<int> zero, val<unsigned long long int*> var_13, val<unsigned int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 8589934591ULL)) && (((/* implicit */val<bool>) var_3))));
    *var_14 = ((/* implicit */val<unsigned int>) 18446744065119617033ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7929862142615098446ULL;
int zero = 0;
unsigned long long int var_13 = 11305197742334602590ULL;
unsigned int var_14 = 3571367625U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1ULL;
    value_mismatch |= var_14 != 9U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_13, &var_14);
  checksum();
}
