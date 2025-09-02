/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7087
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7087
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
void test(val<int> var_2, val<unsigned char> var_7, val<int> var_8, val<int> var_9, val<unsigned char> var_12, val<int> zero, val<unsigned int*> var_13, val<int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned int>) max((*var_13), (((/* implicit */val<unsigned int>) ((1545230666U) >= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)0))))))));
    *var_14 = ((/* implicit */val<int>) min((((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_12)) & (var_2)))) ? (((val<unsigned int>) var_9)) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)72))))), (((/* implicit */val<unsigned int>) max((((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (val<unsigned char>)190)))), (((/* implicit */val<int>) ((val<bool>) var_8))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2090505187;
unsigned char var_7 = (unsigned char)79;
int var_8 = -384959488;
int var_9 = -1048636513;
unsigned char var_12 = (unsigned char)120;
int zero = 0;
unsigned int var_13 = 1959599449U;
int var_14 = 2129034041;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1959599449U;
    value_mismatch |= var_14 != 79;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_8, var_9, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
