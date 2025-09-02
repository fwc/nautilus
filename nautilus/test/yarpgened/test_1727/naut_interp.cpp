/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1727
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1727
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
void test(val<unsigned short> var_2, val<int> zero, val<unsigned short*> var_16, val<unsigned int*> var_17) {
    *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (val<unsigned char>)255)) && (((/* implicit */val<bool>) 3983917005U))));
    *var_17 = ((/* implicit */val<unsigned int>) min((((/* implicit */val<unsigned short>) ((val<signed char>) 311050272U))), (var_2)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17732;
int zero = 0;
unsigned short var_16 = (unsigned short)19368;
unsigned int var_17 = 3547971315U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)1;
    value_mismatch |= var_17 != 32U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
