/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4577
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4577
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
void test(val<unsigned long long int> var_1, val<long long int> var_2, val<long long int> var_3, val<long long int> var_4, val<int> var_5, val<short> var_6, val<int> var_7, val<bool> var_8, val<long long int> var_9, val<int> zero, val<signed char*> var_11, val<unsigned short*> var_12, val<int*> var_13, val<long long int*> var_14, val<signed char*> var_15) {
    *var_11 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<long long int>) var_5)) : (min(((-(var_3))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) (val<unsigned short>)29691)) : (var_7))))))));
    *var_12 = ((/* implicit */val<unsigned short>) ((var_9) > ((-(((var_8) ? (var_9) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))))))));
    *var_13 = ((/* implicit */val<int>) var_1);
    *var_14 = ((/* implicit */val<long long int>) var_6);
    *var_15 = ((/* implicit */val<signed char>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8352418821235816486ULL;
long long int var_2 = 1158916624769858793LL;
long long int var_3 = 2712885167608869574LL;
long long int var_4 = 7193837337045534792LL;
int var_5 = -1187890617;
short var_6 = (short)-24308;
int var_7 = -1915561877;
bool var_8 = (bool)1;
long long int var_9 = 4975684219365797915LL;
int zero = 0;
signed char var_11 = (signed char)-11;
unsigned short var_12 = (unsigned short)31153;
int var_13 = 1364004255;
long long int var_14 = 7179191936245358224LL;
signed char var_15 = (signed char)-64;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)71;
    value_mismatch |= var_12 != (unsigned short)1;
    value_mismatch |= var_13 != 923547686;
    value_mismatch |= var_14 != -24308LL;
    value_mismatch |= var_15 != (signed char)-23;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
