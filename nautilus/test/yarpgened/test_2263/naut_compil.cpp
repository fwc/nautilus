/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2263
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2263
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
void test(val<int> var_6, val<long long int> var_9, val<int> zero, val<short*> var_10, val<short*> var_11) {
    *var_10 |= ((/* implicit */val<short>) (~(((((((/* implicit */val<long long int>) var_6)) / (var_9))) << ((((~(var_9))) - (4898297411937190936LL)))))));
    *var_11 = ((/* implicit */val<short>) ((val<long long int>) var_6));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1370513117;
long long int var_9 = -4898297411937190955LL;
int zero = 0;
short var_10 = (short)-5401;
short var_11 = (short)-13986;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-1;
    value_mismatch |= var_11 != (short)-24285;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
