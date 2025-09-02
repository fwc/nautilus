/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6956
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6956
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
void test(val<unsigned int> var_11, val<int> zero, val<unsigned long long int*> var_16, val<unsigned long long int*> var_17) {
    *var_16 += ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_11)) || ((!(((/* implicit */val<bool>) 551550161U))))));
    *var_17 = ((/* implicit */val<unsigned long long int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 3757815682U;
int zero = 0;
unsigned long long int var_16 = 6147290389210639033ULL;
unsigned long long int var_17 = 1570945545773354459ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 6147290389210639034ULL;
    value_mismatch |= var_17 != 3757815682ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
