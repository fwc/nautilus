/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5163
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5163
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
void test(val<int> var_0, val<int> var_10, val<int> var_15, val<int> zero, val<int*> var_17, val<int*> var_18) {
    *var_17 = 1472440851;
    *var_18 ^= max((var_15), (((min((var_0), (var_10))) ^ (((val<int>) -1391449031)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -904611316;
int var_10 = -1343893133;
int var_15 = 1853895863;
int zero = 0;
int var_17 = -1525144757;
int var_18 = -186895412;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 1472440851;
    value_mismatch |= var_18 != -1705244805;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_10, var_15, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
