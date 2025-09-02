/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8939
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8939
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
void test(val<unsigned char> var_8, val<unsigned short> var_16, val<int> zero, val<unsigned int*> var_17, val<short*> var_18) {
    *var_17 = ((/* implicit */val<unsigned int>) (((((+((~(((/* implicit */val<int>) var_16)))))) + (2147483647))) >> ((((-((-(((/* implicit */val<int>) var_8)))))) - (129)))));
    *var_18 = ((/* implicit */val<short>) 1494031626);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)145;
unsigned short var_16 = (unsigned short)10387;
int zero = 0;
unsigned int var_17 = 3391739908U;
short var_18 = (short)32646;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 32767U;
    value_mismatch |= var_18 != (short)7434;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
