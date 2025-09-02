/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2780
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2780
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
void test(val<long long int> var_14, val<unsigned int> var_16, val<int> zero, val<long long int*> var_17, val<int*> var_18, val<short*> var_19) {
    *var_17 |= var_14;
    *var_18 = ((/* implicit */val<int>) (+(var_14)));
    *var_19 = ((/* implicit */val<short>) var_16);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_14 = 5999146024506187399LL;
unsigned int var_16 = 211244081U;
int zero = 0;
long long int var_17 = -5283076405093984857LL;
int var_18 = 556200758;
short var_19 = (short)19751;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -581035242993524825LL;
    value_mismatch |= var_18 != 1113808519;
    value_mismatch |= var_19 != (short)21553;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_14, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
