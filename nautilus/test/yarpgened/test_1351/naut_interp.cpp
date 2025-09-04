/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1351
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1351
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
void test(val<unsigned short> var_1, val<unsigned short> var_2, val<bool> var_3, val<bool> var_4, val<unsigned short> var_8, val<short> var_9, val<short> var_10, val<int> zero, val<short*> var_11, val<short*> var_12) {
    *var_11 = ((/* implicit */val<short>) max((((/* implicit */val<int>) (val<bool>)1)), (max(((~(((/* implicit */val<int>) var_1)))), (((var_3) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_10))))))));
    *var_12 = ((/* implicit */val<short>) ((((/* implicit */val<int>) var_8)) * ((+(((((/* implicit */val<int>) var_4)) & (((/* implicit */val<int>) var_2))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51987;
unsigned short var_2 = (unsigned short)29998;
bool var_3 = (bool)1;
bool var_4 = (bool)0;
unsigned short var_8 = (unsigned short)58658;
short var_9 = (short)28901;
short var_10 = (short)16359;
int zero = 0;
short var_11 = (short)-26423;
short var_12 = (short)32159;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)28901;
    value_mismatch |= var_12 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_8, var_9, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
