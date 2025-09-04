/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5540
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5540
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
void test(val<unsigned int> var_1, val<int> var_3, val<int> zero, val<int*> var_10, val<long long int*> var_11) {
    *var_10 = ((/* implicit */val<int>) var_1);
    *var_11 = ((/* implicit */val<long long int>) ((((val<unsigned long long int>) (~(-8563041085536954689LL)))) <= (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) (-(var_3)))), (min((-7953476320371617834LL), (-1045909136549813369LL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1363432886U;
int var_3 = -1680251700;
int zero = 0;
int var_10 = 572343665;
long long int var_11 = -2127503398314048630LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1363432886;
    value_mismatch |= var_11 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
