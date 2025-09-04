/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 671
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=671
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
void test(val<unsigned short> var_14, val<int> zero, val<bool*> var_15, val<short*> var_16) {
    *var_15 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<signed char>)124))))) ? (((/* implicit */val<int>) (val<unsigned char>)129)) : (((/* implicit */val<int>) ((val<unsigned short>) (val<unsigned char>)127)))));
    *var_16 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) var_14))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_14 = (unsigned short)47946;
int zero = 0;
bool var_15 = (bool)0;
short var_16 = (short)27605;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
