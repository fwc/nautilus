/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2391
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2391
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
void test(val<unsigned int> var_3, val<bool> var_6, val<int> zero, val<unsigned short*> var_13, val<unsigned int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned short>) var_3);
    *var_14 = ((/* implicit */val<unsigned int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3284117482U;
bool var_6 = (bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)61749;
unsigned int var_14 = 2427593764U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)42986;
    value_mismatch |= var_14 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
