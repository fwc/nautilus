/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5579
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5579
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
void test(val<bool> var_3, val<int> var_4, val<unsigned int> var_5, val<unsigned int> var_10, val<int> zero, val<int*> var_18, val<unsigned int*> var_19) {
    *var_18 &= ((/* implicit */val<int>) min(((val<short>)4271), (((/* implicit */val<short>) (val<unsigned char>)249))));
    *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) ^ (var_5))), (((/* implicit */val<unsigned int>) var_4))))) || (((/* implicit */val<bool>) var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)1;
int var_4 = 1648441436;
unsigned int var_5 = 3082933989U;
unsigned int var_10 = 442014095U;
int zero = 0;
int var_18 = 761999491;
unsigned int var_19 = 534835676U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 129;
    value_mismatch |= var_19 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_10, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
