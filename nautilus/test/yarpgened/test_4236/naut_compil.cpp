/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4236
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4236
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
void test(val<short> var_5, val<long long int> var_10, val<unsigned int> var_14, val<int> zero, val<signed char*> var_16, val<unsigned short*> var_17, val<short*> var_18) {
    *var_16 = ((/* implicit */val<signed char>) var_14);
    *var_17 = ((/* implicit */val<unsigned short>) var_10);
    *var_18 = ((/* implicit */val<short>) (-(((/* implicit */val<int>) var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)3918;
long long int var_10 = 5849620049556928138LL;
unsigned int var_14 = 3874196718U;
int zero = 0;
signed char var_16 = (signed char)113;
unsigned short var_17 = (unsigned short)60244;
short var_18 = (short)11683;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)-18;
    value_mismatch |= var_17 != (unsigned short)63114;
    value_mismatch |= var_18 != (short)-3918;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_10, var_14, zero, &var_16, &var_17, &var_18);
  checksum();
}
