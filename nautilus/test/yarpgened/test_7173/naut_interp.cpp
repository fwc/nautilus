/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7173
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7173
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
void test(val<unsigned int> var_0, val<unsigned char> var_6, val<signed char> var_10, val<unsigned short> var_11, val<int> zero, val<unsigned int*> var_12, val<int*> var_13) {
    *var_12 = ((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_10))));
    *var_13 = ((((/* implicit */val<bool>) (~(var_0)))) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) ((val<short>) (~(((/* implicit */val<int>) var_6)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1685613131U;
unsigned char var_6 = (unsigned char)72;
signed char var_10 = (signed char)-17;
unsigned short var_11 = (unsigned short)6105;
int zero = 0;
unsigned int var_12 = 1640196774U;
int var_13 = 413626369;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 16U;
    value_mismatch |= var_13 != 6105;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_10, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
