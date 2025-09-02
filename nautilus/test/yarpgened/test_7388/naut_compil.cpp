/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7388
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7388
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
void test(val<int> var_0, val<int> var_3, val<int> var_5, val<int> var_7, val<bool> var_11, val<bool> var_12, val<int> zero, val<int*> var_13, val<bool*> var_14, val<signed char*> var_15) {
    *var_13 |= ((((/* implicit */val<bool>) var_3)) ? (((((/* implicit */val<int>) var_11)) / (max((((/* implicit */val<int>) (val<bool>)1)), (var_0))))) : (((/* implicit */val<int>) ((((/* implicit */val<int>) ((var_5) >= (((/* implicit */val<int>) (val<signed char>)32))))) != (((/* implicit */val<int>) (val<signed char>)-52))))));
    *var_14 = ((/* implicit */val<bool>) max((((/* implicit */val<int>) max(((val<bool>)1), (var_12)))), (var_7)));
    *var_15 = ((/* implicit */val<signed char>) ((var_5) | (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_5)) || (((/* implicit */val<bool>) var_0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1322636597;
int var_3 = -1952323271;
int var_5 = 267027438;
int var_7 = 233793359;
bool var_11 = (bool)1;
bool var_12 = (bool)0;
int zero = 0;
int var_13 = -1077021343;
bool var_14 = (bool)1;
signed char var_15 = (signed char)-12;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -1077021343;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (signed char)-17;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_7, var_11, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
