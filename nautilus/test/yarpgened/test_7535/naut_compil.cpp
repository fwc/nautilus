/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7535
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7535
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
void test(val<int> zero, val<int*> var_16, val<unsigned long long int*> var_17) {
    *var_16 = ((/* implicit */val<int>) (val<unsigned short>)59718);
    *var_17 = ((/* implicit */val<unsigned long long int>) ((val<short>) (val<bool>)0));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
int var_16 = -95837725;
unsigned long long int var_17 = 10087873202746546941ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 59718;
    value_mismatch |= var_17 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
