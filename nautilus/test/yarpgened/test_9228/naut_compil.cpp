/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9228
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9228
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
void test(val<bool> var_3, val<signed char> var_7, val<unsigned short> var_8, val<unsigned int> var_10, val<int> zero, val<short*> var_11, val<signed char*> var_12, val<unsigned long long int*> var_13) {
    *var_11 = ((/* implicit */val<short>) var_8);
    *var_12 |= ((/* implicit */val<signed char>) var_8);
    *var_13 *= max((((/* implicit */val<unsigned long long int>) var_7)), (max((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned int>) (val<bool>)0)), (var_10)))), (((((/* implicit */val<bool>) var_10)) ? (12558780745508100930ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)0;
signed char var_7 = (signed char)-13;
unsigned short var_8 = (unsigned short)19506;
unsigned int var_10 = 4201638399U;
int zero = 0;
short var_11 = (short)19481;
signed char var_12 = (signed char)-64;
unsigned long long int var_13 = 4739656682010851554ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)19506;
    value_mismatch |= var_12 != (signed char)-14;
    value_mismatch |= var_13 != 12171439428697136262ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_8, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
}
