/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3150
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3150
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
void test(val<bool> var_5, val<signed char> var_12, val<int> zero, val<unsigned int*> var_16, val<unsigned long long int*> var_17) {
    *var_16 = ((/* implicit */val<unsigned int>) var_12);
    *var_17 = ((/* implicit */val<unsigned long long int>) (+(min((((val<unsigned int>) var_5)), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned short>)36128)) ? (((/* implicit */val<int>) (val<short>)15771)) : (((/* implicit */val<int>) (val<unsigned char>)122)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_5 = (bool)0;
signed char var_12 = (signed char)77;
int zero = 0;
unsigned int var_16 = 2164489663U;
unsigned long long int var_17 = 10346522466660520270ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 77U;
    value_mismatch |= var_17 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_12, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
