/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3546
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3546
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
void test(val<unsigned int> var_8, val<short> var_9, val<int> zero, val<bool*> var_15, val<unsigned long long int*> var_16) {
    *var_15 = ((/* implicit */val<bool>) var_8);
    *var_16 = ((/* implicit */val<unsigned long long int>) min((*var_16), (((/* implicit */val<unsigned long long int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1185904164U;
short var_9 = (short)16528;
int zero = 0;
bool var_15 = (bool)1;
unsigned long long int var_16 = 727685958791806617ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 16528ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
