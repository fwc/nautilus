/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4763
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4763
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
void test(val<unsigned char> var_0, val<int> var_11, val<int> zero, val<int*> var_14, val<unsigned int*> var_15) {
    *var_14 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)-61)) ? (2092563005905905645ULL) : (14522022801579241319ULL)))) ? (((((/* implicit */val<bool>) (val<unsigned char>)82)) ? (((/* implicit */val<long long int>) -1778684586)) : (-2649780498839088051LL))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)29027))) > (2649780498839088051LL)))))))) - (16354181067803645970ULL)));
    *var_15 ^= ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_0)) != (var_11)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)64;
int var_11 = 1526380238;
int zero = 0;
int var_14 = 1983545230;
unsigned int var_15 = 2145358747U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 589337924;
    value_mismatch |= var_15 != 2145358746U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_11, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
