/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4046
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4046
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
void test(val<unsigned long long int> var_1, val<signed char> var_3, val<unsigned short> var_4, val<unsigned int> var_10, val<int> zero, val<unsigned int*> var_11, val<unsigned long long int*> var_12, val<bool*> var_13) {
    *var_11 = ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) var_10))));
    *var_12 -= ((/* implicit */val<unsigned long long int>) ((val<signed char>) (-(((/* implicit */val<int>) var_4)))));
    *var_13 = ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) > (max((var_1), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<bool>)1)) > (((/* implicit */val<int>) var_4))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1450962919388686841ULL;
signed char var_3 = (signed char)119;
unsigned short var_4 = (unsigned short)34742;
unsigned int var_10 = 3200533660U;
int zero = 0;
unsigned int var_11 = 2524639874U;
unsigned long long int var_12 = 13639697406072043522ULL;
bool var_13 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0U;
    value_mismatch |= var_12 != 13639697406072043448ULL;
    value_mismatch |= var_13 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
