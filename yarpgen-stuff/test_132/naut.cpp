/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 132
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=132
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
void test(val<unsigned short> var_5, val<int> zero, val<short*> var_16, val<unsigned short*> var_17) {
    *var_16 *= ((/* implicit */val<short>) var_5);
    *var_17 -= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (val<unsigned short>)10233)) && (((/* implicit */val<bool>) 2209947456U))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)7046;
int zero = 0;
short var_16 = (short)8951;
unsigned short var_17 = (unsigned short)971;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)23114;
    value_mismatch |= var_17 != (unsigned short)970;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
