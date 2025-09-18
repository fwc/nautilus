/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8781
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8781
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
void test(val<int> var_1, val<unsigned short> var_4, val<unsigned long long int> var_8, val<short> var_9, val<unsigned int> var_10, val<int> zero, val<unsigned long long int*> var_11, val<unsigned long long int*> var_12, val<unsigned long long int*> var_13, val<signed char*> var_14) {
    if (((/* implicit */val<bool>) max((((/* implicit */val<int>) var_9)), (var_1))))
    {
        *var_11 = var_8;
        *var_12 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_1)) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)64349)) ? (2047ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)82)))))) ? (((((/* implicit */val<bool>) (val<unsigned short>)5977)) ? (1094060048U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)1186))))) : (min((((/* implicit */val<unsigned int>) (val<unsigned short>)59542)), (1386236829U))))) : (max((var_10), (var_10)))));
    }

    *var_13 = ((/* implicit */val<unsigned long long int>) var_9);
    *var_14 = ((/* implicit */val<signed char>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -132703370;
unsigned short var_4 = (unsigned short)22563;
unsigned long long int var_8 = 8204524156846220972ULL;
short var_9 = (short)-9419;
unsigned int var_10 = 2714399143U;
int zero = 0;
unsigned long long int var_11 = 4172328422172026095ULL;
unsigned long long int var_12 = 15782569347993994544ULL;
unsigned long long int var_13 = 10752713197345342631ULL;
signed char var_14 = (signed char)44;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 8204524156846220972ULL;
    value_mismatch |= var_12 != 1094060048ULL;
    value_mismatch |= var_13 != 18446744073709542197ULL;
    value_mismatch |= var_14 != (signed char)35;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
