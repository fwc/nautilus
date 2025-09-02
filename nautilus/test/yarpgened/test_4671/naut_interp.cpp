/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4671
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4671
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
void test(val<long long int> var_9, val<short> var_17, val<int> zero, val<long long int*> var_18, val<int*> var_19) {
    *var_18 = var_9;
    *var_19 = ((/* implicit */val<int>) var_17);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 8531139633920422042LL;
short var_17 = (short)29445;
int zero = 0;
long long int var_18 = -6014892647284254730LL;
int var_19 = 2089417506;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 8531139633920422042LL;
    value_mismatch |= var_19 != 29445;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
