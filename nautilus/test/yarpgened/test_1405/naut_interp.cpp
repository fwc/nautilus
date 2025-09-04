/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1405
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1405
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
void test(val<signed char> var_0, val<int> zero, val<short*> var_15, val<unsigned char*> var_16) {
    *var_15 = ((/* implicit */val<short>) max((*var_15), (((/* implicit */val<short>) var_0))));
    *var_16 = ((/* implicit */val<unsigned char>) (val<short>)-32766);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-92;
int zero = 0;
short var_15 = (short)21442;
unsigned char var_16 = (unsigned char)89;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)21442;
    value_mismatch |= var_16 != (unsigned char)2;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
