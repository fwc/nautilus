/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5004
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5004
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
void test(val<unsigned int> var_0, val<int> var_7, val<short> var_9, val<unsigned int> var_11, val<int> zero, val<bool*> var_13, val<unsigned int*> var_14) {
    *var_13 = ((/* implicit */val<bool>) (+((((-(var_11))) * (((((/* implicit */val<bool>) (val<unsigned short>)35508)) ? (var_0) : (var_11)))))));
    *var_14 = ((/* implicit */val<unsigned int>) ((val<long long int>) min((((/* implicit */val<unsigned long long int>) var_9)), (((val<unsigned long long int>) var_7)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2037475803U;
int var_7 = -2102107838;
short var_9 = (short)-31890;
unsigned int var_11 = 1775014878U;
int zero = 0;
bool var_13 = (bool)1;
unsigned int var_14 = 1461066988U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 2192859458U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_9, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
