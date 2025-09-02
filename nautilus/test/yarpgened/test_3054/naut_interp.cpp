/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3054
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3054
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
void test(val<bool> var_0, val<bool> var_1, val<bool> var_3, val<long long int> var_6, val<unsigned long long int> var_11, val<int> zero, val<long long int*> var_13, val<bool*> var_14) {
    *var_13 = ((/* implicit */val<long long int>) (+((((val<bool>)1) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<bool>)0))))));
    *var_14 = ((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((min(((val<bool>)1), ((val<bool>)0))) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_1))))) - (((((/* implicit */val<bool>) max((var_6), (((/* implicit */val<long long int>) var_0))))) ? (var_11) : (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
bool var_1 = (bool)1;
bool var_3 = (bool)0;
long long int var_6 = 7410804404905764201LL;
unsigned long long int var_11 = 14956672319246666569ULL;
int zero = 0;
long long int var_13 = -6455455740484319968LL;
bool var_14 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1LL;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_6, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
