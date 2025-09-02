/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6548
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6548
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
void test(val<bool> var_5, val<int> zero, val<int*> var_14, val<long long int*> var_15) {
    *var_14 = ((/* implicit */val<int>) (val<bool>)1);
    *var_15 = ((/* implicit */val<long long int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_5 = (bool)0;
int zero = 0;
int var_14 = -961299811;
long long int var_15 = -8981082766978512519LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1;
    value_mismatch |= var_15 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
