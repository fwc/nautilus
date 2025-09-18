/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6345
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6345
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
void test(val<bool> var_1, val<unsigned long long int> var_2, val<short> var_5, val<int> zero, val<unsigned long long int*> var_16, val<unsigned int*> var_17) {
    *var_16 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) ((val<unsigned char>) var_1))) : ((~(((/* implicit */val<int>) (val<short>)-1237))))));
    *var_17 = ((/* implicit */val<unsigned int>) ((val<int>) var_5));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned long long int var_2 = 8135371984792159186ULL;
short var_5 = (short)5056;
int zero = 0;
unsigned long long int var_16 = 17824615244294896958ULL;
unsigned int var_17 = 547725640U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1ULL;
    value_mismatch |= var_17 != 5056U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, zero, &var_16, &var_17);
  checksum();
}
