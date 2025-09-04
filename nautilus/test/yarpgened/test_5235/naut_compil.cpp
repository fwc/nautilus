/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5235
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5235
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
void test(val<unsigned short> var_1, val<int> var_4, val<short> var_6, val<bool> var_10, val<bool> var_11, val<int> zero, val<unsigned short*> var_14, val<int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned short>) max((*var_14), (((/* implicit */val<unsigned short>) var_6))));
    *var_15 = max((((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_10)) | (((/* implicit */val<int>) var_11))))) ? (((/* implicit */val<int>) var_1)) : (var_4))), (((/* implicit */val<int>) var_10)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12025;
int var_4 = -734261756;
short var_6 = (short)23597;
bool var_10 = (bool)0;
bool var_11 = (bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)21564;
int var_15 = -794598293;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)23597;
    value_mismatch |= var_15 != 12025;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_6, var_10, var_11, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
