/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4713
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4713
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
void test(val<unsigned long long int> var_4, val<int> zero, val<unsigned char*> var_15, val<long long int*> var_16) {
    *var_15 -= ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned long long int>) (val<signed char>)-1)), (var_4)));
    *var_16 = ((/* implicit */val<long long int>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13753908230652379387ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)189;
long long int var_16 = -5725380151198343814LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)190;
    value_mismatch |= var_16 != -4692835843057172229LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
