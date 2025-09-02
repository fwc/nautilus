/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 170
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=170
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
void test(val<signed char> var_10, val<unsigned char> var_11, val<int> zero, val<short*> var_14, val<long long int*> var_15, val<short*> var_16) {
    *var_14 = ((/* implicit */val<short>) var_11);
    *var_15 = ((/* implicit */val<long long int>) var_10);
    *var_16 -= ((/* implicit */val<short>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)64;
unsigned char var_11 = (unsigned char)38;
int zero = 0;
short var_14 = (short)-9467;
long long int var_15 = 5523627512565590467LL;
short var_16 = (short)17482;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)38;
    value_mismatch |= var_15 != 64LL;
    value_mismatch |= var_16 != (short)17418;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
