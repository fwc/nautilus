/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2596
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2596
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
void test(val<bool> var_3, val<signed char> var_4, val<signed char> var_8, val<unsigned int> var_13, val<int> zero, val<unsigned int*> var_15, val<signed char*> var_16) {
    *var_15 = ((/* implicit */val<unsigned int>) var_4);
    *var_16 = ((/* implicit */val<signed char>) (-(((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((var_8), (((/* implicit */val<signed char>) var_3)))))) / (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) + (var_13)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)1;
signed char var_4 = (signed char)-74;
signed char var_8 = (signed char)116;
unsigned int var_13 = 543737026U;
int zero = 0;
unsigned int var_15 = 2626862342U;
signed char var_16 = (signed char)-99;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 4294967222U;
    value_mismatch |= var_16 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_8, var_13, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
