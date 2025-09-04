/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4418
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4418
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
void test(val<signed char> var_2, val<short> var_4, val<short> var_6, val<signed char> var_9, val<int> zero, val<short*> var_10, val<signed char*> var_11, val<short*> var_12, val<signed char*> var_13) {
    *var_10 = ((/* implicit */val<short>) min((*var_10), (((/* implicit */val<short>) ((((/* implicit */val<bool>) max(((val<short>)-1), (((/* implicit */val<short>) (val<signed char>)0))))) ? (((/* implicit */val<int>) ((val<short>) (+(((/* implicit */val<int>) (val<short>)-1789)))))) : ((+(((((/* implicit */val<int>) (val<signed char>)-14)) + (((/* implicit */val<int>) (val<signed char>)82)))))))))));
    *var_11 = ((/* implicit */val<signed char>) (((!(((((/* implicit */val<int>) var_2)) != (((/* implicit */val<int>) var_9)))))) || (((/* implicit */val<bool>) max(((val<signed char>)24), ((val<signed char>)0))))));
    *var_12 = ((/* implicit */val<short>) min((*var_12), (((/* implicit */val<short>) max((((((/* implicit */val<int>) (val<signed char>)(-127 - 1))) * (((/* implicit */val<int>) (val<short>)2195)))), ((+(((/* implicit */val<int>) min((var_6), (var_4)))))))))));
    *var_13 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) min((((/* implicit */val<short>) ((((/* implicit */val<bool>) (val<signed char>)1)) || (((/* implicit */val<bool>) (val<short>)2168))))), ((val<short>)(-32767 - 1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)54;
short var_4 = (short)9925;
short var_6 = (short)-32099;
signed char var_9 = (signed char)52;
int zero = 0;
short var_10 = (short)-5533;
signed char var_11 = (signed char)73;
short var_12 = (short)20983;
signed char var_13 = (signed char)62;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-5533;
    value_mismatch |= var_11 != (signed char)1;
    value_mismatch |= var_12 != (short)-32099;
    value_mismatch |= var_13 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
