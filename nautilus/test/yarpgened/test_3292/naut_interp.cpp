/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3292
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3292
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
void test(val<short> var_0, val<signed char> var_5, val<unsigned long long int> var_6, val<bool> var_10, val<int> zero, val<long long int*> var_15, val<bool*> var_16, val<unsigned int*> var_17, val<signed char*> var_18) {
    *var_15 = ((/* implicit */val<long long int>) var_10);
    *var_16 -= ((/* implicit */val<bool>) (((+(((((/* implicit */val<bool>) (val<unsigned char>)255)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) : (var_6))))) % (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10)))));
    *var_17 = ((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) (val<unsigned char>)1))));
    *var_18 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))) > (min((((1313541126U) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)(-32767 - 1)))))), (((/* implicit */val<unsigned int>) ((val<unsigned char>) (val<unsigned char>)24)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12169;
signed char var_5 = (signed char)-113;
unsigned long long int var_6 = 11677585569929728916ULL;
bool var_10 = (bool)1;
int zero = 0;
long long int var_15 = 7234821016479236485LL;
bool var_16 = (bool)1;
unsigned int var_17 = 124283233U;
signed char var_18 = (signed char)-2;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1LL;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 4294967294U;
    value_mismatch |= var_18 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_6, var_10, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
