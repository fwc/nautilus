/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2041
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2041
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
void test(val<bool> var_4, val<short> var_6, val<unsigned int> var_12, val<short> var_13, val<int> zero, val<unsigned char*> var_15, val<int*> var_16, val<short*> var_17) {
    *var_15 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned int>) var_13)), (var_12)));
    *var_16 = max(((-(((/* implicit */val<int>) var_6)))), (((/* implicit */val<int>) var_6)));
    *var_17 = ((/* implicit */val<short>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_4 = (bool)0;
short var_6 = (short)-11254;
unsigned int var_12 = 2381216316U;
short var_13 = (short)-11605;
int zero = 0;
unsigned char var_15 = (unsigned char)236;
int var_16 = 1351608987;
short var_17 = (short)-18408;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)171;
    value_mismatch |= var_16 != 11254;
    value_mismatch |= var_17 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_12, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
