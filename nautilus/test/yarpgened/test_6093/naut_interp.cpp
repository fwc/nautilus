/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6093
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6093
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
void test(val<unsigned long long int> var_2, val<long long int> var_3, val<bool> var_10, val<int> zero, val<short*> var_14, val<short*> var_15) {
    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_2)))))))) && (((/* implicit */val<bool>) var_3))));
    *var_15 = ((/* implicit */val<short>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17757026024267075838ULL;
long long int var_3 = -2595639532687206380LL;
bool var_10 = (bool)0;
int zero = 0;
short var_14 = (short)24883;
short var_15 = (short)1952;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)0;
    value_mismatch |= var_15 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_10, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
