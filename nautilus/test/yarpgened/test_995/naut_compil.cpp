/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 995
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=995
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
void test(val<unsigned int> var_1, val<signed char> var_2, val<unsigned long long int> var_4, val<signed char> var_5, val<int> var_7, val<short> var_8, val<int> zero, val<unsigned int*> var_11, val<unsigned char*> var_12, val<signed char*> var_13, val<unsigned long long int*> var_14) {
    *var_11 = ((/* implicit */val<unsigned int>) var_7);
    *var_12 = ((/* implicit */val<unsigned char>) min((*var_12), (((/* implicit */val<unsigned char>) var_5))));
    *var_13 = ((/* implicit */val<signed char>) max((*var_13), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) var_4)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) : (var_1)))) ? ((+(((var_1) / (((/* implicit */val<unsigned int>) var_7)))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))))))));
    *var_14 *= ((/* implicit */val<unsigned long long int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 225959360U;
signed char var_2 = (signed char)-28;
unsigned long long int var_4 = 12437926843959221202ULL;
signed char var_5 = (signed char)58;
int var_7 = 1839693346;
short var_8 = (short)296;
int zero = 0;
unsigned int var_11 = 3033151914U;
unsigned char var_12 = (unsigned char)84;
signed char var_13 = (signed char)6;
unsigned long long int var_14 = 18210684227069843022ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1839693346U;
    value_mismatch |= var_12 != (unsigned char)58;
    value_mismatch |= var_13 != (signed char)6;
    value_mismatch |= var_14 != 9212345181422227584ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_7, var_8, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
