/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9393
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9393
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
void test(val<unsigned long long int> var_5, val<short> var_8, val<unsigned long long int> var_9, val<long long int> var_13, val<int> zero, val<unsigned long long int*> var_15, val<long long int*> var_16, val<unsigned int*> var_17) {
    *var_15 = max((((val<unsigned long long int>) var_9)), (((/* implicit */val<unsigned long long int>) var_8)));
    *var_16 = var_13;
    *var_17 = ((/* implicit */val<unsigned int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10109204417417544228ULL;
short var_8 = (short)-10306;
unsigned long long int var_9 = 6826129482255415754ULL;
long long int var_13 = -5846876233500321822LL;
int zero = 0;
unsigned long long int var_15 = 15356900108760164132ULL;
long long int var_16 = -7996968805711294398LL;
unsigned int var_17 = 4248157596U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 18446744073709541310ULL;
    value_mismatch |= var_16 != -5846876233500321822LL;
    value_mismatch |= var_17 != 1442546212U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, var_9, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
