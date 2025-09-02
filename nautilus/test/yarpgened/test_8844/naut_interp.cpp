/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8844
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8844
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
void test(val<short> var_0, val<int> var_7, val<int> zero, val<short*> var_15, val<int*> var_16) {
    *var_15 &= var_0;
    *var_16 = (-(var_7));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15701;
int var_7 = 523472810;
int zero = 0;
short var_15 = (short)8922;
int var_16 = -537191424;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)8272;
    value_mismatch |= var_16 != -523472810;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
