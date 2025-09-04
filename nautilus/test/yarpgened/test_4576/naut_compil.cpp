/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4576
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4576
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
void test(val<short> var_0, val<unsigned long long int> var_1, val<signed char> var_5, val<int> var_7, val<unsigned long long int> var_8, val<unsigned int> var_9, val<int> zero, val<int*> var_11, val<int*> var_12) {
    *var_11 = ((/* implicit */val<int>) (+(var_1)));
    *var_12 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<long long int>) 1965802490229630786LL))) ? (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) var_0)), (536870911LL)))) : (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<unsigned long long int>) var_7)) : (var_8)))))) ? (((/* implicit */val<long long int>) (((-(var_9))) >> (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_5)) || (((/* implicit */val<bool>) var_7)))))))) : (min((max((-536870911LL), (((/* implicit */val<long long int>) -11497337)))), (((/* implicit */val<long long int>) var_7))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23419;
unsigned long long int var_1 = 12848623347114887530ULL;
signed char var_5 = (signed char)-113;
int var_7 = -987174099;
unsigned long long int var_8 = 9510930526309299599ULL;
unsigned int var_9 = 3111675437U;
int zero = 0;
int var_11 = 489354910;
int var_12 = 382672237;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -107820694;
    value_mismatch |= var_12 != 591645929;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_7, var_8, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
