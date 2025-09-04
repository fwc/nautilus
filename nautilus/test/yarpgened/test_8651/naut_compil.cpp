/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8651
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8651
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
void test(val<unsigned long long int> var_1, val<short> var_5, val<unsigned short> var_10, val<int> zero, val<short*> var_12, val<unsigned long long int*> var_13) {
    *var_12 = ((/* implicit */val<short>) var_10);
    *var_13 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) max((max((((/* implicit */val<unsigned long long int>) var_5)), (var_1))), (((/* implicit */val<unsigned long long int>) (val<short>)255)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13691629877779921823ULL;
short var_5 = (short)30700;
unsigned short var_10 = (unsigned short)58117;
int zero = 0;
short var_12 = (short)-15217;
unsigned long long int var_13 = 9352925127754362747ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)-7419;
    value_mismatch |= var_13 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
