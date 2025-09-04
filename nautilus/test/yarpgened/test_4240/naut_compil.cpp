/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4240
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4240
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
void test(val<unsigned long long int> var_9, val<int> var_12, val<int> zero, val<short*> var_20, val<long long int*> var_21) {
    *var_20 = ((/* implicit */val<short>) var_9);
    *var_21 -= ((/* implicit */val<long long int>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 1118946581076966640ULL;
int var_12 = 782152934;
int zero = 0;
short var_20 = (short)32191;
long long int var_21 = 6077319062844167882LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)-784;
    value_mismatch |= var_21 != 6077319062062014948LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_12, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
