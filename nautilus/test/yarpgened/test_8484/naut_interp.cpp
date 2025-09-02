/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8484
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8484
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
void test(val<int> var_0, val<bool> var_1, val<long long int> var_7, val<int> zero, val<long long int*> var_15, val<long long int*> var_16, val<bool*> var_17) {
    *var_15 = ((/* implicit */val<long long int>) var_1);
    *var_16 = max((((/* implicit */val<long long int>) (val<bool>)1)), (var_7));
    *var_17 = ((/* implicit */val<bool>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -520995232;
bool var_1 = (bool)0;
long long int var_7 = 1600431278638659178LL;
int zero = 0;
long long int var_15 = -2431899434329596397LL;
long long int var_16 = -8888642504992957385LL;
bool var_17 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0LL;
    value_mismatch |= var_16 != 1600431278638659178LL;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_7, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
