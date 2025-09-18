/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4033
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4033
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
void test(val<signed char> var_0, val<short> var_7, val<short> var_11, val<signed char> var_13, val<int> zero, val<bool*> var_18, val<short*> var_19, val<short*> var_20, val<short*> var_21, val<signed char*> var_22) {
    *var_18 = ((/* implicit */val<bool>) var_11);
    *var_19 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((val<signed char>) max((3871907116557056749LL), (((/* implicit */val<long long int>) (val<signed char>)48))))))));
    *var_20 = ((/* implicit */val<short>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)-15381)) ? (((/* implicit */val<int>) (val<short>)9424)) : (((/* implicit */val<int>) (val<signed char>)48))))) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_13)))) * (((/* implicit */val<int>) min(((val<short>)8918), ((val<short>)-8918))))));
    *var_21 ^= ((/* implicit */val<short>) var_0);
    *var_22 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (val<short>)8916)) ? (((((((/* implicit */val<bool>) 917699538)) ? (-1511746457) : (0))) / (((/* implicit */val<int>) var_11)))) : (((/* implicit */val<int>) var_13))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-63;
short var_7 = (short)-15355;
short var_11 = (short)-15844;
signed char var_13 = (signed char)14;
int zero = 0;
bool var_18 = (bool)1;
short var_19 = (short)-12484;
short var_20 = (short)20361;
short var_21 = (short)-15534;
signed char var_22 = (signed char)-68;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (short)0;
    value_mismatch |= var_20 != (short)31186;
    value_mismatch |= var_21 != (short)15507;
    value_mismatch |= var_22 != (signed char)-74;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_11, var_13, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
