/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1078
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1078
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
void test(val<long long int> var_2, val<unsigned int> var_3, val<short> var_4, val<signed char> var_7, val<short> var_8, val<unsigned int> var_9, val<unsigned int> var_12, val<int> zero, val<unsigned short*> var_14, val<bool*> var_15, val<unsigned int*> var_16, val<unsigned int*> var_17) {
    *var_14 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) ((((val<bool>) var_9)) ? (var_9) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-11)))))) != (var_2)));
    *var_15 = ((/* implicit */val<bool>) var_4);
    *var_16 = ((/* implicit */val<unsigned int>) var_7);
    *var_17 = ((((/* implicit */val<bool>) var_7)) ? (max(((~(var_9))), (((((/* implicit */val<bool>) var_12)) ? (var_3) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))))))) : (((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_7))))) | (max((((/* implicit */val<unsigned int>) (val<signed char>)127)), (var_12))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5563145915129466631LL;
unsigned int var_3 = 3664724370U;
short var_4 = (short)16452;
signed char var_7 = (signed char)87;
short var_8 = (short)-4428;
unsigned int var_9 = 452300308U;
unsigned int var_12 = 2415994030U;
int zero = 0;
unsigned short var_14 = (unsigned short)41030;
bool var_15 = (bool)0;
unsigned int var_16 = 405432915U;
unsigned int var_17 = 907067908U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)1;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 87U;
    value_mismatch |= var_17 != 3842666987U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_7, var_8, var_9, var_12, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
