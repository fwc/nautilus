/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2620
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2620
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
void test(val<short> var_10, val<int> zero, val<int*> var_12, val<short*> var_13, val<unsigned int*> var_14) {
    *var_12 += (+((-(((/* implicit */val<int>) (val<unsigned short>)2)))));
    *var_13 = var_10;
    *var_14 = ((/* implicit */val<unsigned int>) max((*var_14), (((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned char>)158)) ^ (-537045172)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-6799;
int zero = 0;
int var_12 = 602855227;
short var_13 = (short)27400;
unsigned int var_14 = 3986725422U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 602855225;
    value_mismatch |= var_13 != (short)-6799;
    value_mismatch |= var_14 != 3986725422U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
