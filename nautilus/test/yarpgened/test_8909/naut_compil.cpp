/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8909
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8909
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
void test(val<bool> var_6, val<long long int> var_9, val<int> zero, val<int*> var_13, val<unsigned int*> var_14, val<unsigned int*> var_15, val<long long int*> var_16, val<long long int*> var_17) {
    *var_13 = ((/* implicit */val<int>) var_9);
    *var_14 |= ((/* implicit */val<unsigned int>) var_6);
    *var_15 = ((/* implicit */val<unsigned int>) var_9);
    *var_16 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<bool>)1)) > (((/* implicit */val<int>) (val<bool>)1))));
    *var_17 = ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (val<signed char>)23))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_6 = (bool)1;
long long int var_9 = 2448000793200502403LL;
int zero = 0;
int var_13 = 394375622;
unsigned int var_14 = 579977065U;
unsigned int var_15 = 944535439U;
long long int var_16 = -4079061988228728739LL;
long long int var_17 = -5817650934069349320LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1486300803;
    value_mismatch |= var_14 != 579977065U;
    value_mismatch |= var_15 != 1486300803U;
    value_mismatch |= var_16 != 0LL;
    value_mismatch |= var_17 != 23LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
