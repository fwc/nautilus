/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1862
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1862
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
void test(val<unsigned short> var_0, val<unsigned short> var_1, val<unsigned short> var_2, val<unsigned char> var_3, val<unsigned short> var_5, val<unsigned short> var_6, val<int> zero, val<unsigned short*> var_10, val<unsigned short*> var_11, val<unsigned short*> var_12) {
    *var_10 -= ((/* implicit */val<unsigned short>) ((((((/* implicit */val<bool>) var_2)) && (((/* implicit */val<bool>) var_3)))) ? (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) (val<unsigned short>)11795)))) : (((/* implicit */val<int>) (val<unsigned char>)56))));
    *var_11 = ((val<unsigned short>) ((((/* implicit */val<int>) max((var_6), (((/* implicit */val<unsigned short>) (val<unsigned char>)200))))) == (((/* implicit */val<int>) ((((/* implicit */val<int>) var_5)) < (((/* implicit */val<int>) var_1)))))));
    *var_12 = min(((val<unsigned short>)0), (((/* implicit */val<unsigned short>) (val<unsigned char>)253)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11386;
unsigned short var_1 = (unsigned short)3141;
unsigned short var_2 = (unsigned short)39802;
unsigned char var_3 = (unsigned char)11;
unsigned short var_5 = (unsigned short)37058;
unsigned short var_6 = (unsigned short)6469;
int zero = 0;
unsigned short var_10 = (unsigned short)27883;
unsigned short var_11 = (unsigned short)11110;
unsigned short var_12 = (unsigned short)29853;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)56361;
    value_mismatch |= var_11 != (unsigned short)0;
    value_mismatch |= var_12 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
