/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7085
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7085
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
void test(val<short> var_1, val<short> var_6, val<unsigned char> var_9, val<unsigned char> var_10, val<int> zero, val<signed char*> var_11, val<unsigned int*> var_12) {
    *var_11 = ((/* implicit */val<signed char>) max((*var_11), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned short>) var_9)), (((val<unsigned short>) var_6))))) ? (((val<int>) var_10)) : ((-2147483647 - 1)))))));
    *var_12 = ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_1))))) - (((/* implicit */val<int>) ((val<signed char>) 2147483647U))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11885;
short var_6 = (short)26201;
unsigned char var_9 = (unsigned char)172;
unsigned char var_10 = (unsigned char)177;
int zero = 0;
signed char var_11 = (signed char)-111;
unsigned int var_12 = 2686766540U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)-79;
    value_mismatch |= var_12 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_9, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
