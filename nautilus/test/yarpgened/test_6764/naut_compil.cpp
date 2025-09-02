/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6764
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6764
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
void test(val<unsigned char> var_9, val<int> zero, val<short*> var_13, val<long long int*> var_14) {
    *var_13 = ((/* implicit */val<short>) max((*var_13), (((/* implicit */val<short>) (-(((/* implicit */val<int>) var_9)))))));
    *var_14 = ((/* implicit */val<long long int>) (-(max(((-(1942092515))), (((1942092515) - (1942092530)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)26;
int zero = 0;
short var_13 = (short)19871;
long long int var_14 = 6052126265840204989LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)19871;
    value_mismatch |= var_14 != 15LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
