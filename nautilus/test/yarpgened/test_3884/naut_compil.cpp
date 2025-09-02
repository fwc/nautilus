/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3884
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3884
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
void test(val<signed char> var_1, val<signed char> var_2, val<unsigned short> var_10, val<unsigned int> var_11, val<int> var_16, val<signed char> var_19, val<int> zero, val<signed char*> var_20, val<unsigned int*> var_21) {
    *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_11) % (((/* implicit */val<unsigned int>) 14))))) ? ((+(((/* implicit */val<int>) var_10)))) : (((/* implicit */val<int>) var_19))))) ? (((/* implicit */val<long long int>) min((var_16), (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_2))))))) : (5932386166957948155LL)));
    *var_21 = ((/* implicit */val<unsigned int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-91;
signed char var_2 = (signed char)-66;
unsigned short var_10 = (unsigned short)44682;
unsigned int var_11 = 1072543251U;
int var_16 = -797601702;
signed char var_19 = (signed char)108;
int zero = 0;
signed char var_20 = (signed char)-119;
unsigned int var_21 = 118414097U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)90;
    value_mismatch |= var_21 != 4294967230U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_10, var_11, var_16, var_19, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
