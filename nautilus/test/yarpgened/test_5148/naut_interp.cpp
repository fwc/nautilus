/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5148
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5148
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
void test(val<unsigned char> var_6, val<unsigned int> var_7, val<int> zero, val<unsigned int*> var_20, val<short*> var_21) {
    *var_20 |= var_7;
    *var_21 = ((/* implicit */val<short>) max((*var_21), (((/* implicit */val<short>) ((min(((~(((/* implicit */val<int>) (val<bool>)0)))), (((((/* implicit */val<bool>) (val<short>)16432)) ? (((/* implicit */val<int>) (val<unsigned short>)7893)) : (((/* implicit */val<int>) (val<short>)16417)))))) % (((/* implicit */val<int>) var_6)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)211;
unsigned int var_7 = 3292074191U;
int zero = 0;
unsigned int var_20 = 2469921745U;
short var_21 = (short)-21561;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 3610842079U;
    value_mismatch |= var_21 != (short)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
