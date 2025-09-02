/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 413
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=413
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
void test(val<unsigned int> var_6, val<signed char> var_10, val<int> zero, val<short*> var_14, val<unsigned long long int*> var_15) {
    *var_14 = ((/* implicit */val<short>) (((+(((((/* implicit */val<bool>) var_6)) ? (var_6) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)8172))))))) & (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10)))));
    *var_15 = ((/* implicit */val<unsigned long long int>) (~((+(((((/* implicit */val<bool>) (val<unsigned short>)13055)) ? (-8723988865514844184LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)24)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1006661057U;
signed char var_10 = (signed char)62;
int zero = 0;
short var_14 = (short)31052;
unsigned long long int var_15 = 4665643830274401941ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)0;
    value_mismatch |= var_15 != 8723988865514844183ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_10, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
