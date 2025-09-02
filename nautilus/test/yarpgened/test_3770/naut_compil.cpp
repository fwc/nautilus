/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3770
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3770
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
void test(val<unsigned long long int> var_0, val<unsigned short> var_1, val<long long int> var_2, val<short> var_3, val<bool> var_4, val<unsigned long long int> var_7, val<unsigned long long int> var_10, val<int> zero, val<unsigned long long int*> var_11, val<bool*> var_12, val<unsigned long long int*> var_13) {
    *var_11 *= ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 551268115509081160LL)) ? (((((/* implicit */val<bool>) 536870911U)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) : (-2305843009213693952LL))) : (((/* implicit */val<long long int>) 3671428950U))))) ? ((((+(0ULL))) << ((((~(var_2))) + (2874781156821214756LL))))) : ((((val<bool>)1) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_4))))) : (((((/* implicit */val<bool>) var_0)) ? (var_7) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))))))));
    *var_12 = ((/* implicit */val<bool>) max((var_7), (((/* implicit */val<unsigned long long int>) min((7290089485102467804LL), (((/* implicit */val<long long int>) (val<short>)0)))))));
    *var_13 -= ((/* implicit */val<unsigned long long int>) (val<signed char>)86);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3153268971455295045ULL;
unsigned short var_1 = (unsigned short)65396;
long long int var_2 = 2874781156821214745LL;
short var_3 = (short)-19107;
bool var_4 = (bool)0;
unsigned long long int var_7 = 17380056083000619894ULL;
unsigned long long int var_10 = 1264190097573228744ULL;
int zero = 0;
unsigned long long int var_11 = 8689489244347548974ULL;
bool var_12 = (bool)0;
unsigned long long int var_13 = 165747446030928274ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0ULL;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 165747446030928188ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_7, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
