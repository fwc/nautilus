/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 377
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=377
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
void test(val<unsigned int> var_0, val<unsigned short> var_3, val<int> zero, val<int*> var_14, val<short*> var_15) {
    *var_14 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)100))) - (((val<unsigned long long int>) (val<unsigned short>)12313))));
    *var_15 = ((/* implicit */val<short>) max((var_0), (((/* implicit */val<unsigned int>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2711755018U;
unsigned short var_3 = (unsigned short)31374;
int zero = 0;
int var_14 = -1613646032;
short var_15 = (short)-30079;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -12213;
    value_mismatch |= var_15 != (short)6410;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
