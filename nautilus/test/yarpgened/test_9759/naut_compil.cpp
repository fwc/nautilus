/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9759
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9759
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
void test(val<short> var_18, val<int> zero, val<unsigned int*> var_19, val<unsigned int*> var_20, val<signed char*> var_21) {
    *var_19 = ((/* implicit */val<unsigned int>) ((val<unsigned short>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_18))))) ? (((/* implicit */val<int>) (val<short>)-11908)) : (((((/* implicit */val<bool>) (val<short>)-17805)) ? (33553408) : (((/* implicit */val<int>) (val<short>)32424)))))));
    *var_20 = ((/* implicit */val<unsigned int>) max((*var_20), (((/* implicit */val<unsigned int>) (val<short>)11907))));
    *var_21 = ((/* implicit */val<signed char>) (+(((/* implicit */val<int>) (val<bool>)1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_18 = (short)-5012;
int zero = 0;
unsigned int var_19 = 2752838455U;
unsigned int var_20 = 3052732439U;
signed char var_21 = (signed char)11;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 53628U;
    value_mismatch |= var_20 != 3052732439U;
    value_mismatch |= var_21 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
