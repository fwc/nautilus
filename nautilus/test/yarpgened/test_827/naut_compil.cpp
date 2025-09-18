/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 827
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=827
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
void test(val<unsigned long long int> var_8, val<int> var_14, val<unsigned long long int> var_15, val<int> zero, val<int*> var_16, val<long long int*> var_17) {
    *var_16 = ((/* implicit */val<int>) var_8);
    *var_17 = ((/* implicit */val<long long int>) ((0ULL) % (((((var_15) << (((var_14) + (1784943165))))) & (var_15)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 5342173023892090654ULL;
int var_14 = -1784943120;
unsigned long long int var_15 = 9335138426161883874ULL;
int zero = 0;
int var_16 = -273175280;
long long int var_17 = 7302602730404366582LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -1446826210;
    value_mismatch |= var_17 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_14, var_15, zero, &var_16, &var_17);
  checksum();
}
