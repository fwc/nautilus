/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6458
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6458
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
void test(val<unsigned int> var_0, val<long long int> var_5, val<signed char> var_6, val<unsigned int> var_8, val<signed char> var_9, val<long long int> var_10, val<int> zero, val<long long int*> var_11, val<unsigned long long int*> var_12, val<long long int*> var_13) {
    *var_11 |= ((((/* implicit */val<bool>) min((-8976833401941928226LL), (8080519797595420169LL)))) ? (var_10) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6))));
    *var_12 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((var_0) + (var_8)))) % (min((((((/* implicit */val<bool>) var_9)) ? (8976833401941928225LL) : (8976833401941928209LL))), (var_5)))));
    *var_13 = ((/* implicit */val<long long int>) min((*var_13), (min((((/* implicit */val<long long int>) (val<signed char>)-59)), (8976833401941928203LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2868709136U;
long long int var_5 = 923545662563042189LL;
signed char var_6 = (signed char)109;
unsigned int var_8 = 3338336733U;
signed char var_9 = (signed char)99;
long long int var_10 = -6718892074736982550LL;
int zero = 0;
long long int var_11 = 6329683292265716695LL;
unsigned long long int var_12 = 1576222772111537813ULL;
long long int var_13 = -4180682675412331579LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -587790757495209985LL;
    value_mismatch |= var_12 != 1912078573ULL;
    value_mismatch |= var_13 != -4180682675412331579LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_6, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
}
