/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9056
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9056
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
void test(val<unsigned short> var_8, val<int> var_11, val<int> zero, val<short*> var_13, val<signed char*> var_14) {
    *var_13 = ((/* implicit */val<short>) var_11);
    *var_14 = ((/* implicit */val<signed char>) (~(max((((((/* implicit */val<bool>) (val<short>)32767)) ? (((/* implicit */val<int>) (val<unsigned short>)16633)) : (2147483647))), (((/* implicit */val<int>) var_8))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)8326;
int var_11 = 1858558127;
int zero = 0;
short var_13 = (short)22236;
signed char var_14 = (signed char)-40;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)22703;
    value_mismatch |= var_14 != (signed char)6;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
