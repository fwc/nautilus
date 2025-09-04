/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5317
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5317
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
void test(val<unsigned char> var_3, val<unsigned short> var_4, val<unsigned short> var_8, val<unsigned short> var_10, val<unsigned int> var_11, val<unsigned int> var_12, val<unsigned short> var_14, val<int> zero, val<unsigned char*> var_15, val<int*> var_16, val<unsigned int*> var_17) {
    *var_15 = ((/* implicit */val<unsigned char>) (val<unsigned short>)45469);
    *var_16 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_11)) ? ((-(((((/* implicit */val<bool>) var_3)) ? (var_12) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))))))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 2093056U)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_14))))) ? (((/* implicit */val<int>) ((((/* implicit */val<int>) var_8)) >= (((/* implicit */val<int>) var_10))))) : (((((/* implicit */val<bool>) 536608768)) ? (((/* implicit */val<int>) (val<unsigned short>)45485)) : (((/* implicit */val<int>) (val<bool>)1)))))))));
    *var_17 = ((/* implicit */val<unsigned int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)238;
unsigned short var_4 = (unsigned short)2977;
unsigned short var_8 = (unsigned short)58322;
unsigned short var_10 = (unsigned short)42933;
unsigned int var_11 = 717141019U;
unsigned int var_12 = 241794230U;
unsigned short var_14 = (unsigned short)46440;
int zero = 0;
unsigned char var_15 = (unsigned char)20;
int var_16 = 1491057477;
unsigned int var_17 = 3150316114U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)157;
    value_mismatch |= var_16 != -241794230;
    value_mismatch |= var_17 != 58322U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_8, var_10, var_11, var_12, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
