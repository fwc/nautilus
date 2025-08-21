/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 113
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=113
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
void test(val<bool> var_4, val<signed char> var_14, val<int> zero, val<unsigned int*> var_19, val<int*> var_20, val<short*> var_21) {
    *var_19 = ((/* implicit */val<unsigned int>) var_4);
    *var_20 = ((/* implicit */val<int>) (+((((val<bool>)1) ? (3956581100U) : (3956581100U)))));
    *var_21 = ((/* implicit */val<short>) var_14);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_4 = (bool)0;
signed char var_14 = (signed char)101;
int zero = 0;
unsigned int var_19 = 3250359102U;
int var_20 = -1049075275;
short var_21 = (short)-680;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 0U;
    value_mismatch |= var_20 != -338386196;
    value_mismatch |= var_21 != (short)101;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_14, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
