/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2521
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2521
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
void test(val<short> var_2, val<bool> var_6, val<unsigned short> var_8, val<int> zero, val<short*> var_15, val<unsigned int*> var_16, val<unsigned char*> var_17) {
    *var_15 += ((/* implicit */val<short>) max((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)64747)) ? (2645741524U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2)))))) ? ((~(((/* implicit */val<int>) var_8)))) : (((/* implicit */val<int>) (val<short>)-32004)))), (((/* implicit */val<int>) (val<unsigned short>)29822))));
    *var_16 |= ((/* implicit */val<unsigned int>) var_6);
    *var_17 = (val<unsigned char>)87;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1893;
bool var_6 = (bool)0;
unsigned short var_8 = (unsigned short)19679;
int zero = 0;
short var_15 = (short)-16489;
unsigned int var_16 = 2731828212U;
unsigned char var_17 = (unsigned char)219;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)13333;
    value_mismatch |= var_16 != 2731828212U;
    value_mismatch |= var_17 != (unsigned char)87;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_8, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
