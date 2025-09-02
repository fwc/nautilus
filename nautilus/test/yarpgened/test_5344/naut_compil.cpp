/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5344
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5344
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
void test(val<short> var_0, val<unsigned int> var_3, val<int> zero, val<short*> var_13, val<int*> var_14, val<signed char*> var_15) {
    *var_13 |= ((/* implicit */val<short>) ((((/* implicit */val<int>) var_0)) < (((/* implicit */val<int>) (val<signed char>)-84))));
    *var_14 &= ((/* implicit */val<int>) var_3);
    *var_15 = ((/* implicit */val<signed char>) min((((/* implicit */val<short>) (val<unsigned char>)128)), ((val<short>)32752)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9904;
unsigned int var_3 = 341092279U;
int zero = 0;
short var_13 = (short)26992;
int var_14 = 1137085431;
signed char var_15 = (signed char)-123;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)26993;
    value_mismatch |= var_14 != 4490167;
    value_mismatch |= var_15 != (signed char)(-127 - 1);
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
