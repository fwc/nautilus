/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9063
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9063
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
void test(val<long long int> var_3, val<int> zero, val<unsigned int*> var_13, val<long long int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned int>) min((*var_13), (((/* implicit */val<unsigned int>) ((-1306634681378680986LL) < (var_3))))));
    *var_14 = ((/* implicit */val<long long int>) 1103631980);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2069779671902060296LL;
int zero = 0;
unsigned int var_13 = 3396532046U;
long long int var_14 = 4770775930635279820LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 0U;
    value_mismatch |= var_14 != 1103631980LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
