/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9385
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9385
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
void test(val<short> var_5, val<int> var_8, val<unsigned int> var_12, val<signed char> var_18, val<int> zero, val<int*> var_19, val<signed char*> var_20) {
    *var_19 = ((/* implicit */val<int>) max((*var_19), (((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? ((~(((/* implicit */val<int>) (val<unsigned char>)33)))) : (((/* implicit */val<int>) ((val<unsigned char>) var_18)))))) ? (var_12) : (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_18))))))))));
    *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<bool>)0)) ^ (((/* implicit */val<int>) (val<bool>)1))))) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-30556;
int var_8 = -251552688;
unsigned int var_12 = 1347359934U;
signed char var_18 = (signed char)-51;
int zero = 0;
int var_19 = 1136867049;
signed char var_20 = (signed char)-123;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1347359934;
    value_mismatch |= var_20 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, var_12, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
