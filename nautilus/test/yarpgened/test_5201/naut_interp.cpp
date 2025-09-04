/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5201
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5201
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
void test(val<bool> var_1, val<unsigned int> var_8, val<bool> var_9, val<int> zero, val<signed char*> var_16, val<long long int*> var_17, val<int*> var_18) {
    *var_16 = ((/* implicit */val<signed char>) (+(var_8)));
    *var_17 = ((/* implicit */val<long long int>) max((max((1637261699), (((/* implicit */val<int>) var_9)))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_1))))))))));
    *var_18 = ((/* implicit */val<int>) (val<bool>)1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned int var_8 = 3191370565U;
bool var_9 = (bool)0;
int zero = 0;
signed char var_16 = (signed char)48;
long long int var_17 = -3878739252579807369LL;
int var_18 = 372751202;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)69;
    value_mismatch |= var_17 != 1637261699LL;
    value_mismatch |= var_18 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, var_9, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
