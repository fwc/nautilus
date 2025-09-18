/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1658
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1658
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
void test(val<unsigned int> var_9, val<bool> var_11, val<int> zero, val<int*> var_13, val<unsigned short*> var_14) {
    *var_13 &= ((/* implicit */val<int>) var_11);
    *var_14 = ((/* implicit */val<unsigned short>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 423772510U;
bool var_11 = (bool)0;
int zero = 0;
int var_13 = -452595866;
unsigned short var_14 = (unsigned short)33567;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 0;
    value_mismatch |= var_14 != (unsigned short)16734;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_11, zero, &var_13, &var_14);
  checksum();
}
