/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3211
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3211
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
void test(val<unsigned int> var_0, val<unsigned int> var_2, val<bool> var_6, val<int> zero, val<unsigned int*> var_10, val<unsigned int*> var_11, val<int*> var_12) {
    *var_10 = ((/* implicit */val<unsigned int>) var_6);
    *var_11 |= ((/* implicit */val<unsigned int>) max((((/* implicit */val<signed char>) var_6)), ((val<signed char>)-102)));
    *var_12 = ((/* implicit */val<int>) min((*var_12), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned char>)226)) + (((/* implicit */val<int>) ((var_0) <= (var_2))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4133574878U;
unsigned int var_2 = 795495995U;
bool var_6 = (bool)0;
int zero = 0;
unsigned int var_10 = 972033930U;
unsigned int var_11 = 3852572354U;
int var_12 = -1711341013;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 0U;
    value_mismatch |= var_11 != 3852572354U;
    value_mismatch |= var_12 != -1711341013;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
