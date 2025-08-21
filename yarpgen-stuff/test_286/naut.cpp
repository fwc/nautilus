/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 286
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=286
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
void test(val<short> var_1, val<unsigned int> var_4, val<int> zero, val<long long int*> var_14, val<bool*> var_15, val<bool*> var_16) {
    *var_14 = ((/* implicit */val<long long int>) max((*var_14), (((/* implicit */val<long long int>) var_1))));
    *var_15 = ((/* implicit */val<bool>) var_4);
    *var_16 = ((/* implicit */val<bool>) ((val<int>) (((-(3235154822505047445LL))) > (((/* implicit */val<long long int>) (+(-424007789)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20743;
unsigned int var_4 = 372611362U;
int zero = 0;
long long int var_14 = 4564065148989216938LL;
bool var_15 = (bool)1;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 4564065148989216938LL;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
