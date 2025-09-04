/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1549
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1549
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
void test(val<signed char> var_6, val<unsigned short> var_11, val<int> zero, val<int*> var_12, val<bool*> var_13) {
    *var_12 = ((/* implicit */val<int>) var_6);
    *var_13 = ((/* implicit */val<bool>) max((*var_13), (((/* implicit */val<bool>) var_11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-50;
unsigned short var_11 = (unsigned short)18183;
int zero = 0;
int var_12 = 1385242466;
bool var_13 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -50;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
