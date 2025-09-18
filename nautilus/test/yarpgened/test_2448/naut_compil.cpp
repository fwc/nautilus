/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2448
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2448
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
void test(val<signed char> var_5, val<unsigned short> var_7, val<unsigned char> var_9, val<unsigned short> var_12, val<unsigned char> var_13, val<int> zero, val<unsigned int*> var_16, val<short*> var_17) {
    *var_16 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12))) / (((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<bool>)1))))) ? (max((((/* implicit */val<long long int>) var_5)), (1674008363318706016LL))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9)))))));
    *var_17 = ((/* implicit */val<short>) min((min((((/* implicit */val<long long int>) var_7)), (max((15LL), (((/* implicit */val<long long int>) var_9)))))), (((/* implicit */val<long long int>) var_13))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)99;
unsigned short var_7 = (unsigned short)65279;
unsigned char var_9 = (unsigned char)190;
unsigned short var_12 = (unsigned short)49357;
unsigned char var_13 = (unsigned char)11;
int zero = 0;
unsigned int var_16 = 809517996U;
short var_17 = (short)-14686;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0U;
    value_mismatch |= var_17 != (short)11;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, var_9, var_12, var_13, zero, &var_16, &var_17);
  checksum();
}
