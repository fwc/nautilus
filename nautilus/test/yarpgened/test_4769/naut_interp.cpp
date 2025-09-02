/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4769
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4769
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
void test(val<long long int> var_0, val<unsigned int> var_2, val<int> var_4, val<int> zero, val<short*> var_13, val<unsigned char*> var_14, val<unsigned int*> var_15) {
    *var_13 = ((/* implicit */val<short>) (~(var_0)));
    *var_14 ^= ((/* implicit */val<unsigned char>) (+(var_2)));
    *var_15 = (~(((var_2) * (((/* implicit */val<unsigned int>) var_4)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7484302850171999805LL;
unsigned int var_2 = 800100662U;
int var_4 = 1696113561;
int zero = 0;
short var_13 = (short)11812;
unsigned char var_14 = (unsigned char)12;
unsigned int var_15 = 1405795053U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)5692;
    value_mismatch |= var_14 != (unsigned char)58;
    value_mismatch |= var_15 != 670291129U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
