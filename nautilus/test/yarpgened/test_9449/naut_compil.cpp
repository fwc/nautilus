/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9449
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9449
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
void test(val<long long int> var_3, val<unsigned int> var_5, val<int> zero, val<short*> var_19, val<int*> var_20) {
    *var_19 = ((/* implicit */val<short>) var_5);
    *var_20 = ((/* implicit */val<int>) max((*var_20), (((/* implicit */val<int>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8687049635868714034LL;
unsigned int var_5 = 2175545200U;
int zero = 0;
short var_19 = (short)-30450;
int var_20 = -384364108;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)12144;
    value_mismatch |= var_20 != -384364108;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
