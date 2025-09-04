/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8006
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8006
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
void test(val<int> var_0, val<unsigned long long int> var_2, val<unsigned int> var_15, val<int> zero, val<short*> var_17, val<long long int*> var_18, val<short*> var_19) {
    *var_17 -= ((/* implicit */val<short>) ((max((var_15), (((/* implicit */val<unsigned int>) (val<unsigned char>)235)))) << ((+(((/* implicit */val<int>) ((((/* implicit */val<bool>) var_2)) && (((/* implicit */val<bool>) var_0)))))))));
    *var_18 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) (val<unsigned char>)21))));
    *var_19 = ((/* implicit */val<short>) 1252474422U);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 471419062;
unsigned long long int var_2 = 15037029207330416858ULL;
unsigned int var_15 = 2606414344U;
int zero = 0;
short var_17 = (short)-15877;
long long int var_18 = 2339841883996363565LL;
short var_19 = (short)-24445;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)19947;
    value_mismatch |= var_18 != 0LL;
    value_mismatch |= var_19 != (short)15926;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_15, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
