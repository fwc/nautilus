/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6417
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6417
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
void test(val<short> var_2, val<short> var_6, val<int> zero, val<short*> var_12, val<signed char*> var_13, val<int*> var_14) {
    *var_12 = ((/* implicit */val<short>) min((((/* implicit */val<int>) var_2)), (((val<int>) (val<short>)-1))));
    *var_13 = ((/* implicit */val<signed char>) ((-1LL) & (3692532463289752876LL)));
    *var_14 = ((/* implicit */val<int>) min((((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<long long int>) 2162206480U)) : ((~(-3692532463289752876LL))))), (((/* implicit */val<long long int>) ((val<bool>) ((val<int>) var_6))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3036;
short var_6 = (short)27294;
int zero = 0;
short var_12 = (short)-11375;
signed char var_13 = (signed char)119;
int var_14 = 1573998317;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)-1;
    value_mismatch |= var_13 != (signed char)44;
    value_mismatch |= var_14 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
