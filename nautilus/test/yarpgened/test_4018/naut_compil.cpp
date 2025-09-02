/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4018
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4018
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
void test(val<short> var_2, val<unsigned int> var_3, val<bool> var_15, val<int> zero, val<int*> var_17, val<long long int*> var_18) {
    *var_17 ^= ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (((val<bool>)0) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_2))))) : ((-(((/* implicit */val<int>) var_15)))))))));
    *var_18 = ((/* implicit */val<long long int>) max((*var_18), (((/* implicit */val<long long int>) (~(var_3))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20738;
unsigned int var_3 = 3115279792U;
bool var_15 = (bool)1;
int zero = 0;
int var_17 = -1256923967;
long long int var_18 = -1025604045414355674LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -1256923967;
    value_mismatch |= var_18 != 1179687503LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_15, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
