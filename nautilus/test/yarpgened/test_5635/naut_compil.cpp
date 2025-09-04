/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5635
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5635
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
void test(val<int> var_4, val<unsigned int> var_14, val<int> zero, val<unsigned int*> var_20, val<bool*> var_21, val<unsigned short*> var_22, val<int*> var_23) {
    *var_20 = ((/* implicit */val<unsigned int>) (val<unsigned short>)62966);
    *var_21 = ((/* implicit */val<bool>) var_4);
    *var_22 = (val<unsigned short>)62946;
    *var_23 |= ((/* implicit */val<int>) var_14);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 548793895;
unsigned int var_14 = 209567351U;
int zero = 0;
unsigned int var_20 = 3283777365U;
bool var_21 = (bool)1;
unsigned short var_22 = (unsigned short)19969;
int var_23 = 725322287;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 62966U;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (unsigned short)62946;
    value_mismatch |= var_23 != 796900991;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_14, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
