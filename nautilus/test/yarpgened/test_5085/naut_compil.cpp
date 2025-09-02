/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5085
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5085
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
void test(val<unsigned short> var_1, val<unsigned long long int> var_2, val<signed char> var_12, val<int> zero, val<unsigned int*> var_20, val<long long int*> var_21, val<short*> var_22) {
    *var_20 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((val<signed char>) (val<bool>)1))) ? (((/* implicit */val<int>) (val<signed char>)26)) : (((/* implicit */val<int>) var_12))));
    *var_21 |= ((/* implicit */val<long long int>) var_1);
    *var_22 = ((/* implicit */val<short>) max((*var_22), (((/* implicit */val<short>) var_2))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56520;
unsigned long long int var_2 = 4729659748584786397ULL;
signed char var_12 = (signed char)40;
int zero = 0;
unsigned int var_20 = 3670214019U;
long long int var_21 = 7145065781064636821LL;
short var_22 = (short)-120;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 26U;
    value_mismatch |= var_21 != 7145065781064687069LL;
    value_mismatch |= var_22 != (short)2525;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_12, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
