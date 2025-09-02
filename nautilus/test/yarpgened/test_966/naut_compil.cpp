/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 966
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=966
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
void test(val<bool> var_0, val<unsigned int> var_1, val<unsigned int> var_6, val<signed char> var_11, val<int> zero, val<unsigned int*> var_13, val<unsigned int*> var_14, val<int*> var_15, val<int*> var_16) {
    *var_13 = var_6;
    *var_14 = var_1;
    *var_15 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<short>)28467)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) : (-5819935447393240784LL)));
    *var_16 &= ((/* implicit */val<int>) min((((((/* implicit */val<bool>) -6230830272402395978LL)) ? (max((1280470428U), (((/* implicit */val<unsigned int>) (val<signed char>)-6)))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-2))))), (((/* implicit */val<unsigned int>) var_11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned int var_1 = 814533609U;
unsigned int var_6 = 2110534697U;
signed char var_11 = (signed char)56;
int zero = 0;
unsigned int var_13 = 2533100447U;
unsigned int var_14 = 1373268092U;
int var_15 = 1219283741;
int var_16 = -459303170;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 2110534697U;
    value_mismatch |= var_14 != 814533609U;
    value_mismatch |= var_15 != 0;
    value_mismatch |= var_16 != 56;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, var_11, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
