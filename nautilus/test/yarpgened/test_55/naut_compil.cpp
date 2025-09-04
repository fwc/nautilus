/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 55
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=55
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
void test(val<signed char> var_8, val<unsigned int> var_10, val<short> var_11, val<short> var_17, val<int> zero, val<signed char*> var_20, val<short*> var_21, val<signed char*> var_22) {
    *var_20 = ((/* implicit */val<signed char>) max((*var_20), (((/* implicit */val<signed char>) (~(var_10))))));
    *var_21 = ((/* implicit */val<short>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)(-32767 - 1))) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) (val<signed char>)-34)))))))) + (((/* implicit */val<int>) var_17))));
    *var_22 = ((/* implicit */val<signed char>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)98;
unsigned int var_10 = 884225660U;
short var_11 = (short)-6199;
short var_17 = (short)-9512;
int zero = 0;
signed char var_20 = (signed char)102;
short var_21 = (short)12132;
signed char var_22 = (signed char)-108;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)102;
    value_mismatch |= var_21 != (short)-9512;
    value_mismatch |= var_22 != (signed char)-55;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_10, var_11, var_17, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
