/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9369
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9369
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
void test(val<short> var_1, val<short> var_7, val<bool> var_13, val<signed char> var_15, val<bool> var_16, val<int> zero, val<unsigned int*> var_17, val<int*> var_18) {
    *var_17 = ((/* implicit */val<unsigned int>) max(((((val<bool>)1) ? (-57391976) : (((/* implicit */val<int>) (val<unsigned short>)16384)))), ((-(((/* implicit */val<int>) (val<bool>)1))))));
    *var_18 = ((((/* implicit */val<bool>) max((((/* implicit */val<signed char>) ((((/* implicit */val<int>) (val<unsigned short>)34243)) <= (((/* implicit */val<int>) (val<bool>)1))))), (var_15)))) ? (((((/* implicit */val<bool>) max((var_1), (var_7)))) ? (((/* implicit */val<int>) var_16)) : (((/* implicit */val<int>) var_16)))) : (((/* implicit */val<int>) var_13)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25308;
short var_7 = (short)29227;
bool var_13 = (bool)1;
signed char var_15 = (signed char)-4;
bool var_16 = (bool)1;
int zero = 0;
unsigned int var_17 = 4231427938U;
int var_18 = 1448310607;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 4294967295U;
    value_mismatch |= var_18 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, var_13, var_15, var_16, zero, &var_17, &var_18);
  checksum();
}
