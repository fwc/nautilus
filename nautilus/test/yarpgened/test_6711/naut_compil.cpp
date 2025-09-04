/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6711
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6711
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
void test(val<unsigned short> var_2, val<int> var_5, val<unsigned long long int> var_11, val<unsigned short> var_15, val<int> zero, val<unsigned int*> var_16, val<unsigned int*> var_17, val<unsigned int*> var_18) {
    *var_16 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 2147483647)) ? (((/* implicit */val<unsigned long long int>) 0U)) : (5273729851210615607ULL)));
    *var_17 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_5)) ? (((((/* implicit */val<int>) var_2)) - (((/* implicit */val<int>) (val<unsigned short>)9)))) : (((/* implicit */val<int>) ((var_11) >= (16540120548069002075ULL))))));
    *var_18 = ((/* implicit */val<unsigned int>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16390;
int var_5 = -134835117;
unsigned long long int var_11 = 4142898187776449909ULL;
unsigned short var_15 = (unsigned short)46861;
int zero = 0;
unsigned int var_16 = 2494027025U;
unsigned int var_17 = 2253630148U;
unsigned int var_18 = 3331420276U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0U;
    value_mismatch |= var_17 != 16381U;
    value_mismatch |= var_18 != 46861U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_11, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
