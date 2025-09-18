/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2696
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2696
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
void test(val<short> var_2, val<unsigned int> var_4, val<int> zero, val<int*> var_12, val<unsigned int*> var_13) {
    *var_12 = ((/* implicit */val<int>) var_4);
    *var_13 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-1))) > (min((1791643418U), (((/* implicit */val<unsigned int>) var_2))))))) >> (((232969679U) - (232969666U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1450;
unsigned int var_4 = 4229514213U;
int zero = 0;
int var_12 = -721182902;
unsigned int var_13 = 3411170724U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -65453083;
    value_mismatch |= var_13 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, zero, &var_12, &var_13);
  checksum();
}
