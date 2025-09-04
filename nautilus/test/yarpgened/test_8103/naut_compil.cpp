/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8103
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8103
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
void test(val<signed char> var_1, val<long long int> var_2, val<short> var_6, val<unsigned long long int> var_12, val<int> zero, val<short*> var_19, val<long long int*> var_20) {
    *var_19 = ((/* implicit */val<short>) (-(((val<unsigned long long int>) (-(((/* implicit */val<int>) var_1)))))));
    *var_20 = ((/* implicit */val<long long int>) (-(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6))) : (var_2)))) ? (((((/* implicit */val<bool>) (val<short>)24061)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-24046))) : (11071665771063450269ULL))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<bool>)1)) * (((/* implicit */val<int>) var_1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)48;
long long int var_2 = -5621151816196995123LL;
short var_6 = (short)30938;
unsigned long long int var_12 = 8140603616524755424ULL;
int zero = 0;
short var_19 = (short)-20153;
long long int var_20 = -5269851509059831679LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)48;
    value_mismatch |= var_20 != 24046LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_6, var_12, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
