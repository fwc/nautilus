/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3310
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3310
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
void test(val<short> var_2, val<int> var_6, val<short> var_10, val<int> var_11, val<unsigned int> var_13, val<int> zero, val<int*> var_15, val<int*> var_16, val<unsigned int*> var_17, val<short*> var_18) {
    *var_15 = ((/* implicit */val<int>) (+(((((val<unsigned int>) var_10)) >> ((((+(7968302111165774789ULL))) - (7968302111165774768ULL)))))));
    *var_16 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) var_2)))) ? (((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<int>) (val<short>)32535)) : (-1499966635))) : ((+(((/* implicit */val<int>) (val<bool>)0))))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-80))) : (min((((((/* implicit */val<bool>) (val<short>)0)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-29394))) : (var_13))), (130023424U)))));
    *var_17 = ((/* implicit */val<unsigned int>) var_11);
    *var_18 = ((/* implicit */val<short>) min((*var_18), (((/* implicit */val<short>) ((val<signed char>) ((((996661281U) + (((/* implicit */val<unsigned int>) var_6)))) <= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)29396)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17503;
int var_6 = -542583336;
short var_10 = (short)27057;
int var_11 = 1406446219;
unsigned int var_13 = 549831121U;
int zero = 0;
int var_15 = -1940082430;
int var_16 = -840964874;
unsigned int var_17 = 2756395245U;
short var_18 = (short)-29857;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0;
    value_mismatch |= var_16 != 130023424;
    value_mismatch |= var_17 != 1406446219U;
    value_mismatch |= var_18 != (short)-29857;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_10, var_11, var_13, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
