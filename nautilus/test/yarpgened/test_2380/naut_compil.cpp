/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2380
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2380
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
void test(val<long long int> var_2, val<int> zero, val<unsigned char*> var_13, val<signed char*> var_14, val<short*> var_15) {
    *var_13 = ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) (val<short>)29958))));
    *var_14 = ((/* implicit */val<signed char>) (~(2147483647)));
    *var_15 = ((/* implicit */val<short>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3247796443855667270LL;
int zero = 0;
unsigned char var_13 = (unsigned char)242;
signed char var_14 = (signed char)50;
short var_15 = (short)-18765;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)249;
    value_mismatch |= var_14 != (signed char)0;
    value_mismatch |= var_15 != (short)16454;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
