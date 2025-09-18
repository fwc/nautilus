/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3253
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3253
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
void test(val<unsigned short> var_14, val<long long int> var_16, val<int> zero, val<signed char*> var_18, val<int*> var_19) {
    *var_18 = ((/* implicit */val<signed char>) var_14);
    *var_19 = ((/* implicit */val<int>) var_16);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_14 = (unsigned short)34802;
long long int var_16 = 209680873144233164LL;
int zero = 0;
signed char var_18 = (signed char)72;
int var_19 = -1810855120;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)-14;
    value_mismatch |= var_19 != -1477137204;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_14, var_16, zero, &var_18, &var_19);
  checksum();
}
