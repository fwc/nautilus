/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5801
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5801
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
void test(val<short> var_13, val<unsigned long long int> var_15, val<int> zero, val<long long int*> var_20, val<unsigned long long int*> var_21, val<short*> var_22) {
    *var_20 = ((/* implicit */val<long long int>) var_15);
    *var_21 = (-(var_15));
    *var_22 = ((/* implicit */val<short>) (~((+(((/* implicit */val<int>) var_13))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_13 = (short)-27706;
unsigned long long int var_15 = 13555911435040422394ULL;
int zero = 0;
long long int var_20 = -2633680728653596579LL;
unsigned long long int var_21 = 1002907149836727735ULL;
short var_22 = (short)3096;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -4890832638669129222LL;
    value_mismatch |= var_21 != 4890832638669129222ULL;
    value_mismatch |= var_22 != (short)27705;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_13, var_15, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
