/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1909
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1909
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
void test(val<unsigned int> var_1, val<bool> var_9, val<unsigned int> var_12, val<bool> var_18, val<int> zero, val<bool*> var_20, val<bool*> var_21) {
    *var_20 = ((((val<unsigned int>) ((var_9) || (var_18)))) <= (((var_1) ^ (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_18))))));
    *var_21 = ((/* implicit */val<bool>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1404091545U;
bool var_9 = (bool)1;
unsigned int var_12 = 2761641319U;
bool var_18 = (bool)1;
int zero = 0;
bool var_20 = (bool)1;
bool var_21 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_9, var_12, var_18, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
