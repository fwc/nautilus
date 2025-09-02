/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8635
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8635
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
void test(val<short> var_12, val<signed char> var_13, val<signed char> var_15, val<int> zero, val<short*> var_20, val<short*> var_21, val<bool*> var_22) {
    *var_20 = ((/* implicit */val<short>) (val<bool>)0);
    *var_21 = ((/* implicit */val<short>) ((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))) - (((((/* implicit */val<bool>) 18446744073709551614ULL)) ? (1ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))))))) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_12)))));
    *var_22 = ((/* implicit */val<bool>) max((*var_22), (((/* implicit */val<bool>) var_15))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)1583;
signed char var_13 = (signed char)-23;
signed char var_15 = (signed char)65;
int zero = 0;
short var_20 = (short)3354;
short var_21 = (short)-554;
bool var_22 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)0;
    value_mismatch |= var_21 != (short)27544;
    value_mismatch |= var_22 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, var_13, var_15, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
