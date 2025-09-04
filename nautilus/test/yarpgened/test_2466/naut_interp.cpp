/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2466
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2466
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
void test(val<unsigned long long int> var_1, val<int> zero, val<unsigned int*> var_13, val<short*> var_14, val<short*> var_15) {
    *var_13 = ((/* implicit */val<unsigned int>) ((val<int>) (-((~(var_1))))));
    *var_14 = ((/* implicit */val<short>) -419909194674587889LL);
    *var_15 = ((/* implicit */val<short>) -419909194674587861LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1924901670028437644ULL;
int zero = 0;
unsigned int var_13 = 279913900U;
short var_14 = (short)-12241;
short var_15 = (short)-32603;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 3449415821U;
    value_mismatch |= var_14 != (short)14095;
    value_mismatch |= var_15 != (short)14123;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
