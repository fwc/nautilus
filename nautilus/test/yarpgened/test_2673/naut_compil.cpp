/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2673
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2673
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
void test(val<short> var_2, val<int> var_5, val<int> zero, val<int*> var_19, val<unsigned short*> var_20) {
    *var_19 = ((/* implicit */val<int>) ((val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 3537702245U)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)60617))) : (0LL)))) ? (((/* implicit */val<unsigned int>) var_5)) : (min((3537702264U), (1140899970U))))));
    *var_20 = ((/* implicit */val<unsigned short>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23786;
int var_5 = -1636045749;
int zero = 0;
int var_19 = 1912146658;
unsigned short var_20 = (unsigned short)43739;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -5045;
    value_mismatch |= var_20 != (unsigned short)23786;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
