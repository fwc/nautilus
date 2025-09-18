/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9709
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9709
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
void test(val<unsigned int> var_2, val<unsigned short> var_5, val<int> zero, val<unsigned int*> var_11, val<unsigned int*> var_12) {
    *var_11 = var_2;
    *var_12 = ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((((/* implicit */val<bool>) (val<unsigned short>)13010)) || ((val<bool>)1))) || (((((/* implicit */val<bool>) 4294967295U)) && (((/* implicit */val<bool>) 300649117U)))))))) : (300649117U));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3227174488U;
unsigned short var_5 = (unsigned short)29345;
int zero = 0;
unsigned int var_11 = 51679380U;
unsigned int var_12 = 3474259466U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 3227174488U;
    value_mismatch |= var_12 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, zero, &var_11, &var_12);
  checksum();
}
