/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7899
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7899
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
void test(val<signed char> var_1, val<short> var_9, val<bool> var_13, val<int> zero, val<short*> var_16, val<short*> var_17) {
    *var_16 = ((/* implicit */val<short>) min((*var_16), (((/* implicit */val<short>) ((((/* implicit */val<bool>) var_9)) || (((/* implicit */val<bool>) 9223372036854775799LL)))))));
    *var_17 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) ((1331534010103095936ULL) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13)))))) << (((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) & (7632520055954534579LL))) - (7632520055954534506LL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-117;
short var_9 = (short)8069;
bool var_13 = (bool)0;
int zero = 0;
short var_16 = (short)-29993;
short var_17 = (short)-4842;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)-29993;
    value_mismatch |= var_17 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_9, var_13, zero, &var_16, &var_17);
  checksum();
}
