/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7975
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7975
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
void test(val<long long int> var_4, val<unsigned int> var_5, val<long long int> var_6, val<signed char> var_10, val<signed char> var_14, val<int> var_15, val<int> zero, val<long long int*> var_16, val<bool*> var_17, val<int*> var_18, val<long long int*> var_19, val<long long int*> var_20) {
    *var_16 = ((/* implicit */val<long long int>) (val<signed char>)99);
    *var_17 = (!(((/* implicit */val<bool>) var_4)));
    *var_18 = ((/* implicit */val<int>) max((var_6), (((/* implicit */val<long long int>) var_15))));
    *var_19 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<long long int>) ((val<long long int>) (val<unsigned char>)241)))) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) ((val<bool>) max((((/* implicit */val<long long int>) var_5)), (9223372036854775807LL)))))));
    *var_20 = ((/* implicit */val<long long int>) max((*var_20), (((/* implicit */val<long long int>) var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -249287335981833598LL;
unsigned int var_5 = 3704582122U;
long long int var_6 = -7695652404413928943LL;
signed char var_10 = (signed char)41;
signed char var_14 = (signed char)63;
int var_15 = -1577166252;
int zero = 0;
long long int var_16 = -3179275326622786035LL;
bool var_17 = (bool)0;
int var_18 = 886549608;
long long int var_19 = -8352131222169443523LL;
long long int var_20 = -7877057364785282444LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 99LL;
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != -1577166252;
    value_mismatch |= var_19 != 63LL;
    value_mismatch |= var_20 != 41LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_6, var_10, var_14, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
