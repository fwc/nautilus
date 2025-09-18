/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1394
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1394
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
void test(val<unsigned int> var_0, val<int> var_13, val<int> var_14, val<int> zero, val<unsigned int*> var_15, val<unsigned short*> var_16) {
    *var_15 = ((/* implicit */val<unsigned int>) ((val<long long int>) ((((/* implicit */val<bool>) var_13)) ? (((((/* implicit */val<bool>) 18042551345979538386ULL)) ? (((/* implicit */val<long long int>) var_14)) : (576460202547609600LL))) : (max((((/* implicit */val<long long int>) var_14)), (-576460202547609611LL))))));
    *var_16 = ((/* implicit */val<unsigned short>) (((+(((((/* implicit */val<bool>) -576460202547609611LL)) ? (((/* implicit */val<unsigned int>) var_13)) : (var_0))))) - (var_0)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3732073672U;
int var_13 = -1893946461;
int var_14 = 1477629169;
int zero = 0;
unsigned int var_15 = 790946125U;
unsigned short var_16 = (unsigned short)65177;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1477629169U;
    value_mismatch |= var_16 != (unsigned short)48859;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_13, var_14, zero, &var_15, &var_16);
  checksum();
}
