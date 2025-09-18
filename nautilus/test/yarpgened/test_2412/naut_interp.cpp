/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2412
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2412
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
void test(val<signed char> var_2, val<signed char> var_4, val<signed char> var_9, val<unsigned int> var_15, val<signed char> var_18, val<int> zero, val<signed char*> var_20, val<unsigned int*> var_21) {
    *var_20 ^= max((var_2), (((/* implicit */val<signed char>) (!((!(((/* implicit */val<bool>) var_18))))))));
    *var_21 = ((min((max((var_15), (4U))), (((/* implicit */val<unsigned int>) var_9)))) / (max((((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) == (var_15)))), (((((/* implicit */val<bool>) 4U)) ? (4U) : (4294967292U))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)31;
signed char var_4 = (signed char)116;
signed char var_9 = (signed char)104;
unsigned int var_15 = 2051863406U;
signed char var_18 = (signed char)-90;
int zero = 0;
signed char var_20 = (signed char)-121;
unsigned int var_21 = 2190699697U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)-104;
    value_mismatch |= var_21 != 26U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_9, var_15, var_18, zero, &var_20, &var_21);
  checksum();
}
