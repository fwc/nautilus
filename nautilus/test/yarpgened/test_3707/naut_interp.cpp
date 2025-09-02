/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3707
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3707
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
void test(val<bool> var_9, val<int> zero, val<unsigned int*> var_11, val<bool*> var_12) {
    *var_11 = ((/* implicit */val<unsigned int>) max((*var_11), (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) (val<signed char>)-54)))))));
    *var_12 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) | (3477642792U))) ^ (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)46739)))))) ? ((((val<bool>)1) ? ((~(((/* implicit */val<int>) (val<bool>)0)))) : (((/* implicit */val<int>) (val<bool>)1)))) : (((((/* implicit */val<int>) var_9)) | ((((val<bool>)1) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_9 = (bool)0;
int zero = 0;
unsigned int var_11 = 1829183788U;
bool var_12 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1829183788U;
    value_mismatch |= var_12 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
