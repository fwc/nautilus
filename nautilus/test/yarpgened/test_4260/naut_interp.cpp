/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4260
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4260
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
void test(val<unsigned char> var_0, val<short> var_2, val<unsigned int> var_4, val<int> var_10, val<signed char> var_13, val<int> zero, val<int*> var_18, val<int*> var_19) {
    *var_18 = ((/* implicit */val<int>) max((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<signed char>)122))))), ((+(max((var_4), (((/* implicit */val<unsigned int>) var_2))))))));
    *var_19 = (~(((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_13)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
short var_2 = (short)-13607;
unsigned int var_4 = 3324888594U;
int var_10 = 849655150;
signed char var_13 = (signed char)75;
int zero = 0;
int var_18 = 1927359331;
int var_19 = -792200384;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -13607;
    value_mismatch |= var_19 != -1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_10, var_13, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
