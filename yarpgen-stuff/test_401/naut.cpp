/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 401
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=401
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
void test(val<short> var_8, val<unsigned int> var_11, val<int> zero, val<unsigned int*> var_18, val<short*> var_19, val<unsigned char*> var_20) {
    *var_18 = ((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) (val<bool>)1))));
    *var_19 |= ((/* implicit */val<short>) (-(((((/* implicit */val<int>) ((1962237388U) <= (((/* implicit */val<unsigned int>) -1841145993))))) >> (((var_11) - (1440194596U)))))));
    *var_20 = ((/* implicit */val<unsigned char>) min((4294967295U), (((/* implicit */val<unsigned int>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)23439;
unsigned int var_11 = 1440194624U;
int zero = 0;
unsigned int var_18 = 2725455361U;
short var_19 = (short)2338;
unsigned char var_20 = (unsigned char)155;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 4294967295U;
    value_mismatch |= var_19 != (short)2338;
    value_mismatch |= var_20 != (unsigned char)143;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_11, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
