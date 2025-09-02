/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 356
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=356
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
void test(val<int> var_0, val<int> zero, val<unsigned char*> var_15, val<int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned char>) var_0);
    *var_16 &= ((/* implicit */val<int>) max((1060854941U), (3234112350U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 275505100;
int zero = 0;
unsigned char var_15 = (unsigned char)64;
int var_16 = -2026947073;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)204;
    value_mismatch |= var_16 != -2147212962;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
