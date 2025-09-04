/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4052
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4052
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
void test(val<int> zero, val<short*> var_18, val<short*> var_19) {
    *var_18 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((val<unsigned long long int>) (-(830065992)))))));
    *var_19 ^= ((/* implicit */val<short>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-78))) ^ (3768420464U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
short var_18 = (short)-22839;
short var_19 = (short)10166;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)0;
    value_mismatch |= var_19 != (short)20596;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
