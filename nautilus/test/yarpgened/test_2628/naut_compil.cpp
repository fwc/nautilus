/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2628
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2628
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
void test(val<signed char> var_1, val<unsigned int> var_2, val<bool> var_4, val<unsigned long long int> var_9, val<signed char> var_12, val<int> zero, val<signed char*> var_13, val<bool*> var_14, val<unsigned short*> var_15, val<signed char*> var_16) {
    *var_13 -= ((/* implicit */val<signed char>) min(((~((+(var_2))))), (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) ((var_4) || (((/* implicit */val<bool>) var_12))))))))));
    *var_14 = ((/* implicit */val<bool>) var_9);
    *var_15 = ((/* implicit */val<unsigned short>) var_1);
    *var_16 = ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) (val<signed char>)-24))))), (((val<unsigned int>) var_2))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)52;
unsigned int var_2 = 3721401688U;
bool var_4 = (bool)1;
unsigned long long int var_9 = 12067553286124421049ULL;
signed char var_12 = (signed char)-96;
int zero = 0;
signed char var_13 = (signed char)-67;
bool var_14 = (bool)0;
unsigned short var_15 = (unsigned short)29512;
signed char var_16 = (signed char)-122;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)-68;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (unsigned short)52;
    value_mismatch |= var_16 != (signed char)88;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_9, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
