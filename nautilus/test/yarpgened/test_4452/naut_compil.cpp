/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4452
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4452
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
void test(val<bool> var_1, val<unsigned int> var_3, val<short> var_8, val<bool> var_13, val<int> zero, val<bool*> var_14, val<unsigned int*> var_15) {
    *var_14 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) var_1))) ? (var_3) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(min(((val<bool>)0), (var_13)))))))));
    *var_15 = ((/* implicit */val<unsigned int>) min((*var_15), (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3))))) & (((/* implicit */val<int>) min(((val<short>)4), (var_8)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned int var_3 = 398949737U;
short var_8 = (short)-23996;
bool var_13 = (bool)1;
int zero = 0;
bool var_14 = (bool)1;
unsigned int var_15 = 782949512U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_8, var_13, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
