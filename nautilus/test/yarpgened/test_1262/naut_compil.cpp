/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1262
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1262
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
void test(val<unsigned int> var_2, val<signed char> var_3, val<unsigned int> var_12, val<int> zero, val<unsigned int*> var_14, val<signed char*> var_15, val<signed char*> var_16, val<unsigned int*> var_17, val<signed char*> var_18, val<signed char*> var_19, val<unsigned int*> var_20) {
    *var_14 = var_2;
    *var_15 = var_3;
    if (((/* implicit */val<bool>) max((var_2), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<signed char>)-31)) || (((/* implicit */val<bool>) (val<signed char>)-1))))))))
    {
        *var_16 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) (~(var_12))))));
        *var_17 = 3240785946U;
        *var_18 += (val<signed char>)84;
    }
    else
    {
        *var_19 = (val<signed char>)45;
        *var_20 = ((/* implicit */val<unsigned int>) (val<signed char>)-108);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3861636575U;
signed char var_3 = (signed char)-124;
unsigned int var_12 = 2644962738U;
int zero = 0;
unsigned int var_14 = 1435748692U;
signed char var_15 = (signed char)20;
signed char var_16 = (signed char)-65;
unsigned int var_17 = 2416099884U;
signed char var_18 = (signed char)61;
signed char var_19 = (signed char)-90;
unsigned int var_20 = 3271321425U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 3861636575U;
    value_mismatch |= var_15 != (signed char)-124;
    value_mismatch |= var_16 != (signed char)0;
    value_mismatch |= var_17 != 3240785946U;
    value_mismatch |= var_18 != (signed char)-111;
    value_mismatch |= var_19 != (signed char)-90;
    value_mismatch |= var_20 != 3271321425U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_12, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
