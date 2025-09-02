/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7392
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7392
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
void test(val<short> var_0, val<signed char> var_1, val<short> var_3, val<signed char> var_5, val<signed char> var_6, val<bool> var_7, val<bool> var_9, val<signed char> var_10, val<int> zero, val<short*> var_14, val<bool*> var_15, val<signed char*> var_16, val<signed char*> var_17, val<bool*> var_18) {
    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) var_9)) != ((~(((/* implicit */val<int>) var_1))))))) & (((/* implicit */val<int>) var_0))));
    *var_15 = ((/* implicit */val<bool>) max((((((((/* implicit */val<bool>) (val<signed char>)-1)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<short>)-25730)))) - (((((/* implicit */val<int>) var_9)) - (((/* implicit */val<int>) (val<bool>)0)))))), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)7626)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (val<short>)-11344))))) ? (((/* implicit */val<int>) (val<short>)32767)) : (((((/* implicit */val<int>) var_6)) - (((/* implicit */val<int>) (val<bool>)1))))))));
    *var_16 = var_1;
    *var_17 = ((/* implicit */val<signed char>) max((*var_17), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_10)) ? (((((/* implicit */val<int>) (val<bool>)0)) << (((/* implicit */val<int>) var_10)))) : (((/* implicit */val<int>) var_5)))))));
    *var_18 = ((((((/* implicit */val<int>) (val<short>)-1)) % (((((/* implicit */val<int>) (val<short>)25723)) | (((/* implicit */val<int>) var_3)))))) < (((/* implicit */val<int>) (val<bool>)0)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25580;
signed char var_1 = (signed char)-90;
short var_3 = (short)-11113;
signed char var_5 = (signed char)124;
signed char var_6 = (signed char)123;
bool var_7 = (bool)0;
bool var_9 = (bool)0;
signed char var_10 = (signed char)18;
int zero = 0;
short var_14 = (short)-10537;
bool var_15 = (bool)1;
signed char var_16 = (signed char)12;
signed char var_17 = (signed char)86;
bool var_18 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)0;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (signed char)-90;
    value_mismatch |= var_17 != (signed char)86;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_6, var_7, var_9, var_10, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
