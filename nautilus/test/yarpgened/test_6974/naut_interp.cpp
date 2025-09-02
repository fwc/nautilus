/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6974
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6974
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
void test(val<bool> var_0, val<signed char> var_7, val<unsigned int> var_8, val<int> var_9, val<int> zero, val<short*> var_11, val<signed char*> var_12, val<unsigned short*> var_13) {
    *var_11 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_7))))) ? (((var_8) >> (((var_9) - (622482715))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))) ? (((/* implicit */val<int>) var_0)) : (var_9)));
    *var_12 = ((/* implicit */val<signed char>) (val<bool>)1);
    *var_13 ^= ((/* implicit */val<unsigned short>) max((((/* implicit */val<unsigned int>) (val<bool>)1)), (var_8)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
signed char var_7 = (signed char)53;
unsigned int var_8 = 1927115429U;
int var_9 = 622482735;
int zero = 0;
short var_11 = (short)17261;
signed char var_12 = (signed char)57;
unsigned short var_13 = (unsigned short)1295;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)0;
    value_mismatch |= var_12 != (signed char)1;
    value_mismatch |= var_13 != (unsigned short)30634;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_8, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
