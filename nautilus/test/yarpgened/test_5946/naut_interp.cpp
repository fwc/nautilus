/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5946
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5946
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
void test(val<unsigned long long int> var_2, val<short> var_5, val<short> var_6, val<long long int> var_7, val<short> var_8, val<int> zero, val<unsigned int*> var_10, val<unsigned long long int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))) & (((max((var_7), (((/* implicit */val<long long int>) var_8)))) << (((min((var_2), (((/* implicit */val<unsigned long long int>) var_6)))) - (11079613590578624788ULL)))))));
    *var_11 = ((/* implicit */val<unsigned long long int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11079613590578624799ULL;
short var_5 = (short)32634;
short var_6 = (short)-22988;
long long int var_7 = -2606704576913535811LL;
short var_8 = (short)2947;
int zero = 0;
unsigned int var_10 = 605269701U;
unsigned long long int var_11 = 616915931747205319ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 6144U;
    value_mismatch |= var_11 != 32634ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_7, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
