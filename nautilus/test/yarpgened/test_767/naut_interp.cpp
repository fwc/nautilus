/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 767
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=767
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
void test(val<long long int> var_0, val<long long int> var_4, val<unsigned int> var_10, val<int> zero, val<short*> var_11, val<short*> var_12, val<short*> var_13) {
    *var_11 = ((/* implicit */val<short>) max((*var_11), (((/* implicit */val<short>) var_0))));
    *var_12 -= ((/* implicit */val<short>) var_4);
    *var_13 &= ((/* implicit */val<short>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3690024445859600654LL;
long long int var_4 = -5738162403669520328LL;
unsigned int var_10 = 302752341U;
int zero = 0;
short var_11 = (short)32604;
short var_12 = (short)15778;
short var_13 = (short)-15431;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)32604;
    value_mismatch |= var_12 != (short)28010;
    value_mismatch |= var_13 != (short)-32239;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
