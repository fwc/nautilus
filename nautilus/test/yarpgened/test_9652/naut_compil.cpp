/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9652
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9652
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
void test(val<int> var_7, val<unsigned char> var_9, val<signed char> var_13, val<int> zero, val<unsigned int*> var_14, val<bool*> var_15) {
    *var_14 = ((/* implicit */val<unsigned int>) max((*var_14), (((/* implicit */val<unsigned int>) max((var_7), (((/* implicit */val<int>) var_13)))))));
    *var_15 = ((/* implicit */val<bool>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1609021903;
unsigned char var_9 = (unsigned char)234;
signed char var_13 = (signed char)15;
int zero = 0;
unsigned int var_14 = 3813417617U;
bool var_15 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 3813417617U;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_9, var_13, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
