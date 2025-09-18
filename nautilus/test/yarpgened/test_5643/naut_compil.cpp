/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5643
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5643
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
void test(val<bool> var_2, val<unsigned char> var_4, val<short> var_10, val<unsigned int> var_13, val<int> zero, val<int*> var_16, val<int*> var_17) {
    *var_16 = ((/* implicit */val<int>) var_4);
    *var_17 = ((/* implicit */val<int>) max((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_10)) > (((/* implicit */val<int>) var_2))))), (((((((/* implicit */val<bool>) (val<unsigned short>)2825)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)62686))) : (0U))) | (var_13)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
unsigned char var_4 = (unsigned char)14;
short var_10 = (short)7375;
unsigned int var_13 = 35133083U;
int zero = 0;
int var_16 = 2117815119;
int var_17 = 398890527;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 14;
    value_mismatch |= var_17 != 35190495;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_10, var_13, zero, &var_16, &var_17);
  checksum();
}
