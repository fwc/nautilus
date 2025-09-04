/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3000
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3000
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
void test(val<int> var_0, val<int> var_1, val<unsigned long long int> var_6, val<short> var_13, val<int> zero, val<unsigned long long int*> var_18, val<unsigned long long int*> var_19, val<signed char*> var_20) {
    *var_18 = ((/* implicit */val<unsigned long long int>) var_1);
    *var_19 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)74))) >= (((((/* implicit */val<unsigned long long int>) 850643891U)) * (var_6)))))) % ((+(((/* implicit */val<int>) ((val<short>) 9608938442867779385ULL)))))));
    *var_20 -= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) ((((((/* implicit */val<bool>) 9608938442867779381ULL)) ? (((/* implicit */val<unsigned long long int>) var_0)) : (8837805630841772230ULL))) < (((/* implicit */val<unsigned long long int>) ((2852178944U) * (((/* implicit */val<unsigned int>) var_0)))))))) : (((val<int>) var_13))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1326505776;
int var_1 = -1678240887;
unsigned long long int var_6 = 12582205277086313650ULL;
short var_13 = (short)4043;
int zero = 0;
unsigned long long int var_18 = 9394090271615296346ULL;
unsigned long long int var_19 = 5684921037634094827ULL;
signed char var_20 = (signed char)-94;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 18446744072031310729ULL;
    value_mismatch |= var_19 != 0ULL;
    value_mismatch |= var_20 != (signed char)-95;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, var_13, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
