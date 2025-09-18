/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6408
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6408
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
void test(val<unsigned int> var_0, val<unsigned int> var_3, val<unsigned int> var_4, val<unsigned int> var_7, val<unsigned int> var_15, val<int> zero, val<unsigned int*> var_16, val<unsigned int*> var_17, val<unsigned int*> var_18) {
    *var_16 = ((/* implicit */val<unsigned int>) ((max((2465518514U), (max((3508604731U), (2413348914U))))) < (max((min((var_0), (29425914U))), (((((/* implicit */val<bool>) 228539427U)) ? (var_7) : (var_4)))))));
    *var_17 &= (((-(var_3))) & (var_15));
    *var_18 = var_4;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1758396212U;
unsigned int var_3 = 2005432947U;
unsigned int var_4 = 1165354667U;
unsigned int var_7 = 2399306894U;
unsigned int var_15 = 1195499874U;
int zero = 0;
unsigned int var_16 = 2265019690U;
unsigned int var_17 = 3218545022U;
unsigned int var_18 = 2697522435U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0U;
    value_mismatch |= var_17 != 4260096U;
    value_mismatch |= var_18 != 1165354667U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_7, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
}
