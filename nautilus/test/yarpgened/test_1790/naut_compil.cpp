/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1790
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1790
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
void test(val<signed char> var_14, val<int> zero, val<signed char*> var_15, val<int*> var_16) {
    *var_15 = var_14;
    *var_16 -= ((/* implicit */val<int>) (val<short>)-4096);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_14 = (signed char)120;
int zero = 0;
signed char var_15 = (signed char)-16;
int var_16 = 876357102;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)120;
    value_mismatch |= var_16 != 876361198;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
