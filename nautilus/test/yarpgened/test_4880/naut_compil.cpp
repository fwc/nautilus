/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4880
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4880
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
void test(val<unsigned int> var_2, val<int> var_5, val<unsigned char> var_6, val<unsigned int> var_10, val<int> zero, val<int*> var_13, val<bool*> var_14, val<bool*> var_15) {
    *var_13 = ((/* implicit */val<int>) ((val<unsigned int>) ((var_10) & (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned char>) var_5)))))));
    *var_14 = ((/* implicit */val<bool>) var_6);
    *var_15 = ((/* implicit */val<bool>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1994628291U;
int var_5 = 1721181810;
unsigned char var_6 = (unsigned char)168;
unsigned int var_10 = 3834031754U;
int zero = 0;
int var_13 = 314867461;
bool var_14 = (bool)0;
bool var_15 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 2;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_10, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
