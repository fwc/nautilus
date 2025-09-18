/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9602
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9602
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
void test(val<short> var_13, val<unsigned long long int> var_15, val<int> zero, val<long long int*> var_16, val<short*> var_17, val<short*> var_18) {
    *var_16 = ((/* implicit */val<long long int>) (+(var_15)));
    *var_17 = var_13;
    *var_18 = ((/* implicit */val<short>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_13 = (short)-12525;
unsigned long long int var_15 = 15870272087792695656ULL;
int zero = 0;
long long int var_16 = -9116645904797238981LL;
short var_17 = (short)11328;
short var_18 = (short)-13780;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -2576471985916855960LL;
    value_mismatch |= var_17 != (short)-12525;
    value_mismatch |= var_18 != (short)14696;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_13, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
}
