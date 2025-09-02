/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8346
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8346
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
void test(val<bool> var_0, val<unsigned short> var_1, val<unsigned int> var_6, val<signed char> var_11, val<short> var_12, val<bool> var_14, val<unsigned int> var_17, val<int> zero, val<bool*> var_20, val<unsigned int*> var_21) {
    *var_20 *= ((/* implicit */val<bool>) max((min((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_12)) || (var_0)))), (((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11))) : (2972719874U))))), (((/* implicit */val<unsigned int>) var_14))));
    *var_21 = ((/* implicit */val<unsigned int>) max((*var_21), (((/* implicit */val<unsigned int>) max((((/* implicit */val<unsigned long long int>) min((var_6), (((((/* implicit */val<bool>) (val<short>)2455)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))) : (3030865148U)))))), (max((((/* implicit */val<unsigned long long int>) 3030865155U)), (14860450015426894003ULL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned short var_1 = (unsigned short)37388;
unsigned int var_6 = 4245603547U;
signed char var_11 = (signed char)99;
short var_12 = (short)-1431;
bool var_14 = (bool)1;
unsigned int var_17 = 2599382577U;
int zero = 0;
bool var_20 = (bool)0;
unsigned int var_21 = 121853175U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != 335009971U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, var_11, var_12, var_14, var_17, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
