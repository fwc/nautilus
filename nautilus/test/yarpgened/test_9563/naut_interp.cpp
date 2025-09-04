/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9563
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9563
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
void test(val<bool> var_0, val<short> var_6, val<int> zero, val<long long int*> var_13, val<int*> var_14) {
    *var_13 = ((/* implicit */val<long long int>) var_0);
    *var_14 = ((/* implicit */val<int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
short var_6 = (short)-9650;
int zero = 0;
long long int var_13 = 4933081190535502146LL;
int var_14 = 1738604823;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1LL;
    value_mismatch |= var_14 != -9650;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
