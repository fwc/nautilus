/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4900
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4900
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
void test(val<unsigned int> var_5, val<short> var_14, val<short> var_16, val<int> zero, val<unsigned int*> var_18, val<long long int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned int>) var_14);
    *var_19 = ((/* implicit */val<long long int>) (((-(((/* implicit */val<int>) var_16)))) << (((var_5) - (2470501149U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2470501151U;
short var_14 = (short)21067;
short var_16 = (short)-21601;
int zero = 0;
unsigned int var_18 = 1241195582U;
long long int var_19 = 7511950757776698589LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 21067U;
    value_mismatch |= var_19 != 86404LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_14, var_16, zero, &var_18, &var_19);
  checksum();
}
