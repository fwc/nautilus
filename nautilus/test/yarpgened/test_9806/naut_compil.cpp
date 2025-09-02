/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9806
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9806
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
void test(val<short> var_3, val<int> zero, val<unsigned long long int*> var_11, val<long long int*> var_12) {
    *var_11 = ((/* implicit */val<unsigned long long int>) (val<short>)192);
    *var_12 = ((/* implicit */val<long long int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-8756;
int zero = 0;
unsigned long long int var_11 = 13789087994954275552ULL;
long long int var_12 = 3051567311925975886LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 192ULL;
    value_mismatch |= var_12 != -8756LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
