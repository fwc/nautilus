/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4069
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4069
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
void test(val<short> var_2, val<int> var_3, val<bool> var_6, val<unsigned int> var_9, val<bool> var_12, val<int> zero, val<unsigned char*> var_14, val<unsigned char*> var_15, val<short*> var_16, val<unsigned long long int*> var_17) {
    *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) var_12)) == (((/* implicit */val<int>) var_2))));
    *var_15 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<bool>)0)))))));
    *var_16 |= ((/* implicit */val<short>) min((((((/* implicit */val<unsigned long long int>) var_9)) ^ (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_12))) & (12803516916595500461ULL))))), (((/* implicit */val<unsigned long long int>) var_3))));
    *var_17 = ((/* implicit */val<unsigned long long int>) (+(((((/* implicit */val<int>) var_6)) + (var_3)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4383;
int var_3 = -37227331;
bool var_6 = (bool)1;
unsigned int var_9 = 2524546894U;
bool var_12 = (bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)39;
unsigned char var_15 = (unsigned char)99;
short var_16 = (short)-7545;
unsigned long long int var_17 = 6592442065251385330ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)0;
    value_mismatch |= var_15 != (unsigned char)1;
    value_mismatch |= var_16 != (short)-6193;
    value_mismatch |= var_17 != 18446744073672324286ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_6, var_9, var_12, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
