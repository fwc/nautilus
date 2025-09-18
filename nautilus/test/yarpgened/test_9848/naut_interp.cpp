/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9848
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9848
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
void test(val<short> var_0, val<unsigned char> var_2, val<unsigned long long int> var_4, val<signed char> var_6, val<unsigned short> var_8, val<long long int> var_9, val<unsigned long long int> var_10, val<unsigned long long int> var_12, val<unsigned int> var_13, val<unsigned char> var_14, val<int> zero, val<signed char*> var_17, val<unsigned long long int*> var_18) {
    *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((val<signed char>) ((((/* implicit */val<bool>) 6ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)1920))) : (0ULL))))) ? (((var_9) * (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_13)))))))) : (((/* implicit */val<long long int>) var_13))));
    *var_18 += ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) var_9)) ? (var_4) : (((/* implicit */val<unsigned long long int>) var_13)))), (((/* implicit */val<unsigned long long int>) min((var_9), (((/* implicit */val<long long int>) var_0)))))))) ? (((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_8)), (7510489217206330913ULL)))) ? (((var_10) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_14))))) : (((var_12) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24304;
unsigned char var_2 = (unsigned char)110;
unsigned long long int var_4 = 16800318510558446546ULL;
signed char var_6 = (signed char)123;
unsigned short var_8 = (unsigned short)41930;
long long int var_9 = 7145024077121061198LL;
unsigned long long int var_10 = 14958070978867766377ULL;
unsigned long long int var_12 = 16401095710628760418ULL;
unsigned int var_13 = 246824062U;
unsigned char var_14 = (unsigned char)179;
int zero = 0;
signed char var_17 = (signed char)107;
unsigned long long int var_18 = 12407138582384297727ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)0;
    value_mismatch |= var_18 != 8918465487542512309ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_6, var_8, var_9, var_10, var_12, var_13, var_14, zero, &var_17, &var_18);
  checksum();
}
