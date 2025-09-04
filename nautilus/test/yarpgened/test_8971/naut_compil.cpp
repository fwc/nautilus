/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8971
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8971
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
void test(val<unsigned short> var_3, val<unsigned short> var_7, val<signed char> var_16, val<int> zero, val<unsigned short*> var_19, val<unsigned long long int*> var_20, val<unsigned int*> var_21, val<unsigned long long int*> var_22) {
    *var_19 |= var_7;
    *var_20 = ((/* implicit */val<unsigned long long int>) var_3);
    *var_21 = ((/* implicit */val<unsigned int>) var_16);
    *var_22 = ((/* implicit */val<unsigned long long int>) ((val<unsigned short>) var_16));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)46664;
unsigned short var_7 = (unsigned short)11418;
signed char var_16 = (signed char)0;
int zero = 0;
unsigned short var_19 = (unsigned short)56602;
unsigned long long int var_20 = 11503509206835220168ULL;
unsigned int var_21 = 3449688765U;
unsigned long long int var_22 = 2374323400408534165ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)64922;
    value_mismatch |= var_20 != 46664ULL;
    value_mismatch |= var_21 != 0U;
    value_mismatch |= var_22 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_16, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
