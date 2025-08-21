/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 611
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=611
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
void test(val<short> var_1, val<long long int> var_3, val<signed char> var_4, val<unsigned int> var_5, val<short> var_7, val<int> zero, val<unsigned char*> var_12, val<unsigned char*> var_13) {
    *var_12 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) var_1)) >> (((val<unsigned long long int>) ((((/* implicit */val<int>) var_4)) >= ((-2147483647 - 1)))))));
    *var_13 *= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned long long int>) 0U)) > (9160155337768310296ULL)))), (((val<unsigned int>) var_5))))) : (((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))) / (var_3))) - (((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) var_4)), (23U))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12113;
long long int var_3 = 3451617708084396550LL;
signed char var_4 = (signed char)-69;
unsigned int var_5 = 1642068331U;
short var_7 = (short)-12943;
int zero = 0;
unsigned char var_12 = (unsigned char)73;
unsigned char var_13 = (unsigned char)237;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)168;
    value_mismatch |= var_13 != (unsigned char)15;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_7, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
