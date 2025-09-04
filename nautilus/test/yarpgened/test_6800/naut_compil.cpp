/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6800
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6800
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
void test(val<short> var_5, val<signed char> var_6, val<short> var_9, val<short> var_10, val<unsigned short> var_11, val<int> zero, val<short*> var_12, val<unsigned int*> var_13, val<signed char*> var_14) {
    *var_12 = ((/* implicit */val<short>) min((*var_12), (((/* implicit */val<short>) min((((/* implicit */val<int>) var_5)), (((((((/* implicit */val<int>) var_10)) + (((/* implicit */val<int>) (val<short>)23982)))) * (((/* implicit */val<int>) var_11)))))))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)23992)) ? (144110790029344768LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)23982))))))
    {
        *var_13 = ((/* implicit */val<unsigned int>) max((*var_13), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) -6197112527571348637LL)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) (val<unsigned char>)66)) : (((/* implicit */val<int>) (val<short>)23992))))) : (((((((/* implicit */val<bool>) 1202934074359174020LL)) || (((/* implicit */val<bool>) 1202934074359174020LL)))) ? (0LL) : (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<short>)23992)) - (((/* implicit */val<int>) var_9))))))))))));
        *var_14 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_6))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)1975;
signed char var_6 = (signed char)-89;
short var_9 = (short)27912;
short var_10 = (short)29921;
unsigned short var_11 = (unsigned short)23702;
int zero = 0;
short var_12 = (short)-12709;
unsigned int var_13 = 3506115281U;
signed char var_14 = (signed char)-14;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)-12709;
    value_mismatch |= var_13 != 3506115281U;
    value_mismatch |= var_14 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
