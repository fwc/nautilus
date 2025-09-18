/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4078
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4078
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
void test(val<bool> var_2, val<unsigned int> var_3, val<short> var_5, val<bool> var_6, val<unsigned char> var_13, val<int> zero, val<int*> var_17, val<bool*> var_18, val<unsigned int*> var_19, val<short*> var_20) {
    *var_17 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((min((((/* implicit */val<int>) var_13)), (-2147483642))) + (((/* implicit */val<int>) var_6))))) ^ (var_3)));
    *var_18 = ((/* implicit */val<bool>) (~(1934913088739880854ULL)));
    *var_19 = ((val<unsigned int>) ((var_3) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max((var_5), (((/* implicit */val<short>) var_2))))))));
    *var_20 = ((/* implicit */val<short>) (-(((/* implicit */val<int>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
unsigned int var_3 = 3004265918U;
short var_5 = (short)1341;
bool var_6 = (bool)1;
unsigned char var_13 = (unsigned char)28;
int zero = 0;
int var_17 = -989313885;
bool var_18 = (bool)0;
unsigned int var_19 = 2599869370U;
short var_20 = (short)25198;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 856782265;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 0U;
    value_mismatch |= var_20 != (short)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_6, var_13, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
