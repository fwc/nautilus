/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 936
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=936
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
void test(val<signed char> var_3, val<signed char> var_10, val<unsigned int> var_12, val<int> zero, val<signed char*> var_13, val<int*> var_14, val<int*> var_15) {
    *var_13 = var_10;
    *var_14 &= ((/* implicit */val<int>) (-(var_12)));
    *var_15 &= ((/* implicit */val<int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)70;
signed char var_10 = (signed char)37;
unsigned int var_12 = 2491977485U;
int zero = 0;
signed char var_13 = (signed char)88;
int var_14 = 1746897320;
int var_15 = 1004756332;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)37;
    value_mismatch |= var_14 != 1746337952;
    value_mismatch |= var_15 != 68;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_10, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
