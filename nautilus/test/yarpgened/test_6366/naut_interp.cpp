/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6366
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6366
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
void test(val<short> var_3, val<unsigned long long int> var_5, val<unsigned long long int> var_9, val<short> var_10, val<int> zero, val<short*> var_12, val<short*> var_13) {
    *var_12 -= ((/* implicit */val<short>) min((((val<unsigned long long int>) max((var_9), (var_5)))), (((/* implicit */val<unsigned long long int>) var_10))));
    *var_13 = var_3;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)30974;
unsigned long long int var_5 = 16809330915202720427ULL;
unsigned long long int var_9 = 15761586449706503920ULL;
short var_10 = (short)28846;
int zero = 0;
short var_12 = (short)-26625;
short var_13 = (short)-13219;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)10065;
    value_mismatch |= var_13 != (short)30974;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_9, var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
