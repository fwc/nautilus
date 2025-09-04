/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2520
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2520
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
void test(val<unsigned short> var_9, val<unsigned int> var_13, val<int> zero, val<bool*> var_14, val<unsigned char*> var_15) {
    *var_14 = ((/* implicit */val<bool>) (((((-(var_13))) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned short>) 256361483U)))))) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9)))));
    *var_15 = ((/* implicit */val<unsigned char>) ((max((0U), (((/* implicit */val<unsigned int>) (val<signed char>)(-127 - 1))))) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned short>) max((var_9), (((/* implicit */val<unsigned short>) (val<bool>)0)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)14925;
unsigned int var_13 = 1028814908U;
int zero = 0;
bool var_14 = (bool)1;
unsigned char var_15 = (unsigned char)140;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (unsigned char)128;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_13, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
