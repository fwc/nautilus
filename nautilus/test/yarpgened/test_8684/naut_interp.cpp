/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8684
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8684
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
void test(val<signed char> var_0, val<int> var_2, val<signed char> var_3, val<short> var_5, val<int> var_9, val<short> var_14, val<signed char> var_15, val<int> zero, val<int*> var_19, val<signed char*> var_20, val<signed char*> var_21, val<unsigned char*> var_22) {
    *var_19 = ((/* implicit */val<int>) min((*var_19), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) var_14))))) ? ((-(0))) : (((/* implicit */val<int>) var_3))))) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_3))))));
    *var_20 = ((/* implicit */val<signed char>) max((var_9), (((/* implicit */val<int>) var_0))));
    *var_21 = ((/* implicit */val<signed char>) min((*var_21), (((/* implicit */val<signed char>) (~(((/* implicit */val<int>) var_15)))))));
    *var_22 &= ((/* implicit */val<unsigned char>) (+(((/* implicit */val<int>) var_14))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)(-127 - 1);
int var_2 = -618694440;
signed char var_3 = (signed char)-71;
short var_5 = (short)-15578;
int var_9 = -323749711;
short var_14 = (short)9149;
signed char var_15 = (signed char)-98;
int zero = 0;
int var_19 = -763910240;
signed char var_20 = (signed char)122;
signed char var_21 = (signed char)124;
unsigned char var_22 = (unsigned char)124;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -763910240;
    value_mismatch |= var_20 != (signed char)(-127 - 1);
    value_mismatch |= var_21 != (signed char)97;
    value_mismatch |= var_22 != (unsigned char)60;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_9, var_14, var_15, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
