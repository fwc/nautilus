/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2489
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2489
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
void test(val<short> var_4, val<unsigned int> var_8, val<bool> var_12, val<long long int> var_14, val<int> var_16, val<int> zero, val<signed char*> var_17, val<signed char*> var_18) {
    *var_17 = ((/* implicit */val<signed char>) (+(min((((/* implicit */val<long long int>) var_4)), ((~(var_14)))))));
    *var_18 ^= ((/* implicit */val<signed char>) max((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_8))))), ((((+(((/* implicit */val<int>) var_12)))) % (var_16)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-23706;
unsigned int var_8 = 1849693293U;
bool var_12 = (bool)0;
long long int var_14 = 594542175144643135LL;
int var_16 = 1483933097;
int zero = 0;
signed char var_17 = (signed char)54;
signed char var_18 = (signed char)-20;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)-64;
    value_mismatch |= var_18 != (signed char)-20;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, var_12, var_14, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
