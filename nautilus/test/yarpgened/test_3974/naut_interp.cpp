/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3974
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3974
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
void test(val<unsigned short> var_4, val<short> var_5, val<unsigned int> var_7, val<int> zero, val<unsigned int*> var_10, val<signed char*> var_11, val<int*> var_12, val<short*> var_13, val<unsigned short*> var_14) {
    *var_10 = ((/* implicit */val<unsigned int>) max((*var_10), (((/* implicit */val<unsigned int>) (val<unsigned short>)65513))));
    *var_11 = ((/* implicit */val<signed char>) var_4);
    *var_12 = ((/* implicit */val<int>) max((((/* implicit */val<unsigned int>) var_4)), (((((var_7) >= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)65518))))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned short>)65513)) ? (((/* implicit */val<int>) (val<unsigned char>)218)) : (((/* implicit */val<int>) (val<bool>)1))))) : (var_7)))));
    *var_13 = var_5;
    *var_14 = (val<unsigned short>)17;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)63573;
short var_5 = (short)9591;
unsigned int var_7 = 2815300125U;
int zero = 0;
unsigned int var_10 = 2312532716U;
signed char var_11 = (signed char)55;
int var_12 = -1808026676;
short var_13 = (short)17578;
unsigned short var_14 = (unsigned short)7700;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 2312532716U;
    value_mismatch |= var_11 != (signed char)85;
    value_mismatch |= var_12 != 63573;
    value_mismatch |= var_13 != (short)9591;
    value_mismatch |= var_14 != (unsigned short)17;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_7, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
