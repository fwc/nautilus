/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 391
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=391
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
void test(val<long long int> var_12, val<signed char> var_13, val<int> zero, val<bool*> var_14, val<long long int*> var_15) {
    *var_14 = ((/* implicit */val<bool>) max((((/* implicit */val<long long int>) ((val<short>) (-(((/* implicit */val<int>) (val<short>)30945)))))), (max((((/* implicit */val<long long int>) (val<bool>)1)), (var_12)))));
    *var_15 *= ((/* implicit */val<long long int>) ((3656449040U) != (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_13)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -7032951301044543922LL;
signed char var_13 = (signed char)38;
int zero = 0;
bool var_14 = (bool)0;
long long int var_15 = 4116344531289928012LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != 4116344531289928012LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, var_13, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
