/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7600
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7600
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
void test(val<short> var_0, val<unsigned long long int> var_4, val<int> zero, val<short*> var_11, val<short*> var_12) {
    *var_11 = ((/* implicit */val<short>) min((*var_11), (((/* implicit */val<short>) var_4))));
    *var_12 ^= ((/* implicit */val<short>) (-(((/* implicit */val<int>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9704;
unsigned long long int var_4 = 7755196804045145616ULL;
int zero = 0;
short var_11 = (short)18671;
short var_12 = (short)20301;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)1552;
    value_mismatch |= var_12 != (short)27301;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
