/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6149
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6149
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
void test(val<bool> var_5, val<int> zero, val<int*> var_18, val<int*> var_19) {
    *var_18 = ((/* implicit */val<int>) (val<bool>)0);
    *var_19 = (((val<bool>)1) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) (val<signed char>)48)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_5 = (bool)1;
int zero = 0;
int var_18 = -2113440099;
int var_19 = -418443968;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 0;
    value_mismatch |= var_19 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
