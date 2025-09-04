/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9079
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9079
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
void test(val<unsigned long long int> var_0, val<signed char> var_1, val<unsigned char> var_2, val<signed char> var_4, val<int> var_6, val<unsigned int> var_11, val<int> zero, val<unsigned char*> var_13, val<signed char*> var_14, val<int*> var_15) {
    *var_13 = ((/* implicit */val<unsigned char>) ((min((min((((/* implicit */val<unsigned long long int>) var_2)), (var_0))), (((/* implicit */val<unsigned long long int>) var_11)))) <= (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_1))))) : (8029989855838269215ULL)))));
    *var_14 = var_1;
    *var_15 = ((((/* implicit */val<bool>) var_11)) ? (((((((/* implicit */val<int>) (val<signed char>)-90)) * (((/* implicit */val<int>) (val<bool>)1)))) / (((/* implicit */val<int>) var_4)))) : (((/* implicit */val<int>) (val<signed char>)-94)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4049382362013485478ULL;
signed char var_1 = (signed char)121;
unsigned char var_2 = (unsigned char)172;
signed char var_4 = (signed char)-109;
int var_6 = 1732183751;
unsigned int var_11 = 4294930177U;
int zero = 0;
unsigned char var_13 = (unsigned char)187;
signed char var_14 = (signed char)71;
int var_15 = -1002390627;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)1;
    value_mismatch |= var_14 != (signed char)121;
    value_mismatch |= var_15 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_11, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
