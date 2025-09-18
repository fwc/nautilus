/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4244
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4244
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
void test(val<long long int> var_1, val<long long int> var_2, val<int> zero, val<long long int*> var_13, val<long long int*> var_14) {
    *var_13 = (~(var_2));
    *var_14 = var_1;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4283435177724226150LL;
long long int var_2 = 3768412191752416105LL;
int zero = 0;
long long int var_13 = 3206492921469099878LL;
long long int var_14 = -7377603441442011761LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -3768412191752416106LL;
    value_mismatch |= var_14 != -4283435177724226150LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, zero, &var_13, &var_14);
  checksum();
}
