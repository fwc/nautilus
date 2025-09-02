/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3105
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3105
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
void test(val<unsigned int> var_0, val<unsigned short> var_3, val<int> zero, val<int*> var_12, val<unsigned long long int*> var_13) {
    *var_12 = ((/* implicit */val<int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) (val<unsigned char>)124)), (var_0))))))) <= ((~(((/* implicit */val<int>) var_3))))));
    *var_13 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) 3113389268U))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1338963879U;
unsigned short var_3 = (unsigned short)20727;
int zero = 0;
int var_12 = 303567505;
unsigned long long int var_13 = 17155227292925193031ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0;
    value_mismatch |= var_13 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
