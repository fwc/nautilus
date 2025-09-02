/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9830
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9830
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
void test(val<unsigned int> var_0, val<bool> var_2, val<bool> var_4, val<int> var_11, val<unsigned short> var_13, val<unsigned short> var_15, val<int> zero, val<bool*> var_16, val<unsigned short*> var_17) {
    *var_16 = ((/* implicit */val<bool>) ((((var_11) + (2147483647))) << (((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_15))))) ? (((((/* implicit */val<int>) var_4)) >> (((/* implicit */val<int>) (val<bool>)1)))) : ((~(((/* implicit */val<int>) var_2))))))));
    *var_17 = ((/* implicit */val<unsigned short>) (+(((((((/* implicit */val<bool>) var_13)) ? (var_0) : (var_0))) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_15)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1719207008U;
bool var_2 = (bool)1;
bool var_4 = (bool)1;
int var_11 = -170565107;
unsigned short var_13 = (unsigned short)27467;
unsigned short var_15 = (unsigned short)34315;
int zero = 0;
bool var_16 = (bool)0;
unsigned short var_17 = (unsigned short)19986;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (unsigned short)32341;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_11, var_13, var_15, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
