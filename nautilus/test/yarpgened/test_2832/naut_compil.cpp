/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2832
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2832
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
void test(val<bool> var_9, val<int> zero, val<short*> var_16, val<unsigned long long int*> var_17) {
    *var_16 = ((/* implicit */val<short>) min((((/* implicit */val<int>) (val<signed char>)65)), (66584576)));
    *var_17 += ((/* implicit */val<unsigned long long int>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_9 = (bool)0;
int zero = 0;
short var_16 = (short)11284;
unsigned long long int var_17 = 707702588039213740ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)65;
    value_mismatch |= var_17 != 707702588039213740ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
