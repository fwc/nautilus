/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2494
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2494
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
void test(val<bool> var_1, val<unsigned short> var_3, val<int> var_9, val<short> var_11, val<int> zero, val<int*> var_13, val<short*> var_14, val<int*> var_15) {
    *var_13 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9))));
    *var_14 |= ((/* implicit */val<short>) var_9);
    *var_15 = (+(((((/* implicit */val<bool>) var_11)) ? (((((/* implicit */val<int>) (val<unsigned char>)218)) * (((/* implicit */val<int>) var_3)))) : ((+(((/* implicit */val<int>) var_1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned short var_3 = (unsigned short)31442;
int var_9 = -901257803;
short var_11 = (short)-10128;
int zero = 0;
int var_13 = -1246348326;
short var_14 = (short)-5671;
int var_15 = 1168577756;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 0;
    value_mismatch |= var_14 != (short)-4611;
    value_mismatch |= var_15 != 6854356;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_9, var_11, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
