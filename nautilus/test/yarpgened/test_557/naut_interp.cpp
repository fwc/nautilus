/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 557
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=557
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
void test(val<signed char> var_3, val<int> zero, val<long long int*> var_15, val<int*> var_16) {
    *var_15 = ((/* implicit */val<long long int>) max((*var_15), (((/* implicit */val<long long int>) var_3))));
    *var_16 = ((/* implicit */val<int>) (val<unsigned char>)223);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-32;
int zero = 0;
long long int var_15 = -6864048807773011084LL;
int var_16 = -1621940593;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != -32LL;
    value_mismatch |= var_16 != 223;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
