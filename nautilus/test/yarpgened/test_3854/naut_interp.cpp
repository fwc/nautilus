/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3854
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3854
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
void test(val<signed char> var_5, val<unsigned int> var_11, val<int> zero, val<int*> var_12, val<long long int*> var_13, val<long long int*> var_14) {
    *var_12 = ((/* implicit */val<int>) var_11);
    *var_13 = ((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_5))));
    *var_14 = ((/* implicit */val<long long int>) (val<short>)32759);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)75;
unsigned int var_11 = 3491741023U;
int zero = 0;
int var_12 = -1198401647;
long long int var_13 = 782632374912330726LL;
long long int var_14 = 4566934774968637660LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -803226273;
    value_mismatch |= var_13 != -75LL;
    value_mismatch |= var_14 != 32759LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
