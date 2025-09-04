/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9904
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9904
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
void test(val<unsigned short> var_8, val<long long int> var_9, val<int> zero, val<unsigned short*> var_17, val<unsigned int*> var_18) {
    *var_17 = var_8;
    *var_18 = ((/* implicit */val<unsigned int>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)20952;
long long int var_9 = -622713001957219565LL;
int zero = 0;
unsigned short var_17 = (unsigned short)37938;
unsigned int var_18 = 2042030992U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)20952;
    value_mismatch |= var_18 != 4048724755U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
