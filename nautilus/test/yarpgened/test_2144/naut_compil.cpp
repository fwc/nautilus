/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2144
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2144
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
void test(val<int> var_2, val<int> var_3, val<int> var_7, val<unsigned long long int> var_8, val<bool> var_11, val<int> zero, val<bool*> var_14, val<short*> var_15, val<unsigned long long int*> var_16, val<short*> var_17) {
    *var_14 -= ((/* implicit */val<bool>) min((2ULL), (((/* implicit */val<unsigned long long int>) -1651064280))));
    *var_15 &= ((/* implicit */val<short>) ((val<unsigned long long int>) var_3));
    *var_16 ^= ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) ((val<int>) (val<short>)32762)))));
    *var_17 &= ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_11)) / (((((/* implicit */val<bool>) var_8)) ? (var_2) : (var_7)))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-13276))) : (min((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_7))))), (var_8)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1833982057;
int var_3 = -728718607;
int var_7 = 1211884556;
unsigned long long int var_8 = 8604570728189221200ULL;
bool var_11 = (bool)1;
int zero = 0;
bool var_14 = (bool)1;
short var_15 = (short)-6902;
unsigned long long int var_16 = 12193250716279016217ULL;
short var_17 = (short)1309;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)0;
    value_mismatch |= var_15 != (short)-24576;
    value_mismatch |= var_16 != 12193250716279016217ULL;
    value_mismatch |= var_17 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_7, var_8, var_11, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
