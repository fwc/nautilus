/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5126
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5126
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
void test(val<bool> var_2, val<unsigned long long int> var_3, val<long long int> var_4, val<unsigned int> var_9, val<int> zero, val<unsigned short*> var_15, val<int*> var_16, val<int*> var_17) {
    *var_15 ^= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((((/* implicit */val<bool>) -979889450)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) : (7490891579504566578ULL))) / (max((7490891579504566580ULL), (10955852494204985037ULL)))))) ? (max((((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (val<signed char>)40))))), (max((((/* implicit */val<unsigned long long int>) var_9)), (10955852494204985054ULL))))) : (((/* implicit */val<unsigned long long int>) ((val<int>) (val<bool>)1)))));
    *var_16 = ((/* implicit */val<int>) var_4);
    *var_17 |= ((/* implicit */val<int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
unsigned long long int var_3 = 9990056991438438874ULL;
long long int var_4 = -8234342059304454479LL;
unsigned int var_9 = 3080970155U;
int zero = 0;
unsigned short var_15 = (unsigned short)256;
int var_16 = -950224561;
int var_17 = -820500026;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)257;
    value_mismatch |= var_16 != 1142519473;
    value_mismatch |= var_17 != -6772258;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_9, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
