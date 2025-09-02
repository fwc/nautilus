/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8603
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8603
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
void test(val<short> var_0, val<int> var_1, val<unsigned short> var_2, val<int> var_4, val<unsigned long long int> var_5, val<unsigned short> var_10, val<int> zero, val<unsigned long long int*> var_11, val<unsigned long long int*> var_12, val<bool*> var_13, val<unsigned int*> var_14) {
    *var_11 &= (+((-(max((var_5), (18446744073709551615ULL))))));
    if (((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_2)))))
    {
        *var_12 = ((/* implicit */val<unsigned long long int>) max(((+(((/* implicit */val<int>) (val<unsigned short>)42922)))), (((/* implicit */val<int>) var_10))));
        *var_13 += ((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_0))));
    }

    *var_14 = ((/* implicit */val<unsigned int>) max((*var_14), (((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) var_10)) ? (min((var_4), (var_4))) : (((/* implicit */val<int>) ((val<short>) var_5))))) - (var_1))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31939;
int var_1 = -949047883;
unsigned short var_2 = (unsigned short)57011;
int var_4 = -1502120184;
unsigned long long int var_5 = 7585655362582476087ULL;
unsigned short var_10 = (unsigned short)35338;
int zero = 0;
unsigned long long int var_11 = 1405417546108773074ULL;
unsigned long long int var_12 = 5471496957866626495ULL;
bool var_13 = (bool)1;
unsigned int var_14 = 2779694021U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0ULL;
    value_mismatch |= var_12 != 42922ULL;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 3741894995U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_10, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
