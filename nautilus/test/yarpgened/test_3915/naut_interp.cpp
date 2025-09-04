/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3915
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3915
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
void test(val<long long int> var_2, val<unsigned int> var_3, val<unsigned int> var_7, val<int> zero, val<bool*> var_14, val<unsigned char*> var_15) {
    *var_14 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) -1563955541467882268LL)) ? (((/* implicit */val<long long int>) var_7)) : (2863348776191226201LL)));
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (val<unsigned char>)75))))) | (min((((/* implicit */val<long long int>) var_3)), (((val<long long int>) var_2))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1719062176261602852LL;
unsigned int var_3 = 3580763102U;
unsigned int var_7 = 2212911428U;
int zero = 0;
bool var_14 = (bool)0;
unsigned char var_15 = (unsigned char)179;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (unsigned char)252;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_7, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
