/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1959
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1959
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
void test(val<short> var_5, val<unsigned short> var_9, val<int> zero, val<short*> var_10, val<signed char*> var_11) {
    *var_10 = ((/* implicit */val<short>) max((((/* implicit */val<int>) var_5)), (((((/* implicit */val<int>) (val<signed char>)-107)) ^ (((/* implicit */val<int>) var_9))))));
    *var_11 = (val<signed char>)(-127 - 1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)13350;
unsigned short var_9 = (unsigned short)28064;
int zero = 0;
short var_10 = (short)-7012;
signed char var_11 = (signed char)66;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)13350;
    value_mismatch |= var_11 != (signed char)(-127 - 1);
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
