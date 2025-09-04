/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1670
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1670
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
void test(val<unsigned short> var_0, val<short> var_10, val<int> zero, val<int*> var_11, val<int*> var_12) {
    *var_11 &= ((/* implicit */val<int>) max((var_0), (((/* implicit */val<unsigned short>) var_10))));
    *var_12 = ((/* implicit */val<int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44157;
short var_10 = (short)22702;
int zero = 0;
int var_11 = -1330042577;
int var_12 = 323355843;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 10285;
    value_mismatch |= var_12 != 22702;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
