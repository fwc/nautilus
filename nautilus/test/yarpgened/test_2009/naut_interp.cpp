/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2009
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2009
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
void test(val<long long int> var_1, val<short> var_11, val<unsigned int> var_12, val<int> zero, val<unsigned int*> var_17, val<unsigned int*> var_18) {
    *var_17 = var_12;
    *var_18 = ((/* implicit */val<unsigned int>) (+(((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) / (var_1))) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<short>) (val<short>)4132))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3829107064710869990LL;
short var_11 = (short)24295;
unsigned int var_12 = 3138570100U;
int zero = 0;
unsigned int var_17 = 3271073U;
unsigned int var_18 = 2492068862U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 3138570100U;
    value_mismatch |= var_18 != 4294963164U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_11, var_12, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
