/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1894
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1894
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
void test(val<unsigned long long int> var_2, val<unsigned long long int> var_3, val<long long int> var_6, val<int> zero, val<long long int*> var_10, val<unsigned long long int*> var_11) {
    *var_10 ^= ((/* implicit */val<long long int>) (~(var_2)));
    *var_11 = ((/* implicit */val<unsigned long long int>) max((*var_11), (((((/* implicit */val<unsigned long long int>) var_6)) - (var_3)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3595832368114376956ULL;
unsigned long long int var_3 = 17780614204073529838ULL;
long long int var_6 = 1371138918986070553LL;
int zero = 0;
long long int var_10 = -4341159754925592221LL;
unsigned long long int var_11 = 14934037056280098312ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 997568995450220128LL;
    value_mismatch |= var_11 != 14934037056280098312ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_6, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
