/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9035
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9035
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
void test(val<signed char> var_6, val<unsigned int> var_10, val<int> zero, val<bool*> var_15, val<unsigned long long int*> var_16) {
    *var_15 = ((((min((((/* implicit */val<unsigned int>) var_6)), (var_10))) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))))) > (((/* implicit */val<unsigned int>) ((val<int>) var_6))));
    *var_16 = ((/* implicit */val<unsigned long long int>) (~((~(((((/* implicit */val<long long int>) var_10)) ^ (1526316327326897408LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-94;
unsigned int var_10 = 2246217289U;
int zero = 0;
bool var_15 = (bool)0;
unsigned long long int var_16 = 13854400044756899617ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != 1526316325240068937ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_10, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
