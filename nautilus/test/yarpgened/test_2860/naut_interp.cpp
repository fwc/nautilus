/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2860
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2860
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
void test(val<int> var_0, val<bool> var_1, val<signed char> var_2, val<short> var_6, val<int> var_7, val<long long int> var_8, val<bool> var_10, val<unsigned int> var_12, val<signed char> var_14, val<int> zero, val<short*> var_16, val<unsigned int*> var_17) {
    *var_16 = ((/* implicit */val<short>) ((var_1) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) var_2))));
    *var_17 &= ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((4009024547U) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) (val<short>)18247)) : (var_7)))) : (2786801833144311527LL)))) ? (var_12) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_7)) ? (var_0) : (((/* implicit */val<int>) (val<signed char>)3))))) != (min((var_8), (((/* implicit */val<long long int>) var_10)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1534290972;
bool var_1 = (bool)1;
signed char var_2 = (signed char)15;
short var_6 = (short)-17506;
int var_7 = 1414359614;
long long int var_8 = -847086150492530849LL;
bool var_10 = (bool)1;
unsigned int var_12 = 2775066602U;
signed char var_14 = (signed char)116;
int zero = 0;
short var_16 = (short)7884;
unsigned int var_17 = 1218348061U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)116;
    value_mismatch |= var_17 != 525320U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_6, var_7, var_8, var_10, var_12, var_14, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
