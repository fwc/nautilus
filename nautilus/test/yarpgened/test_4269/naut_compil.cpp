/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4269
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4269
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
void test(val<unsigned int> var_4, val<unsigned long long int> var_13, val<unsigned int> var_15, val<int> zero, val<int*> var_16, val<int*> var_17) {
    *var_16 = ((/* implicit */val<int>) min((*var_16), (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<short>) (val<signed char>)-116))) ? ((~(((/* implicit */val<int>) (val<bool>)0)))) : (((((/* implicit */val<int>) (val<unsigned char>)231)) ^ (((/* implicit */val<int>) (val<unsigned char>)175))))))) : (max((var_13), (4389003924796226460ULL))))))));
    *var_17 = ((/* implicit */val<int>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3538862460U;
unsigned long long int var_13 = 4396242647593876568ULL;
unsigned int var_15 = 2522709963U;
int zero = 0;
int var_16 = 1091499097;
int var_17 = 1347337337;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -1;
    value_mismatch |= var_17 != -1772257333;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_13, var_15, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
