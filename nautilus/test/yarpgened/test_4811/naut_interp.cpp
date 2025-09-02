/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4811
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4811
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
void test(val<unsigned long long int> var_1, val<int> zero, val<unsigned short*> var_12, val<long long int*> var_13) {
    *var_12 = ((/* implicit */val<unsigned short>) (val<short>)26876);
    *var_13 -= ((/* implicit */val<long long int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 431506354184273847ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)56710;
long long int var_13 = -7714201948558719918LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)26876;
    value_mismatch |= var_13 != -8145708302742993765LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
