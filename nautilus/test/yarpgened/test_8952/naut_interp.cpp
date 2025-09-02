/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8952
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8952
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
void test(val<unsigned int> var_0, val<long long int> var_3, val<unsigned long long int> var_4, val<signed char> var_11, val<long long int> var_12, val<bool> var_13, val<int> var_14, val<int> zero, val<long long int*> var_15, val<short*> var_16, val<long long int*> var_17, val<signed char*> var_18) {
    *var_15 ^= ((/* implicit */val<long long int>) ((((min((((/* implicit */val<unsigned long long int>) var_3)), (var_4))) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))))) + (((/* implicit */val<unsigned long long int>) 1836468318U))));
    if (((/* implicit */val<bool>) (+((-(var_0))))))
    {
        *var_16 = ((/* implicit */val<short>) (+(-1LL)));
        *var_17 = ((/* implicit */val<long long int>) ((val<unsigned int>) ((val<short>) min((((/* implicit */val<long long int>) 2458498977U)), (var_12)))));
    }

    *var_18 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_14)), (((var_4) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3163910699U;
long long int var_3 = -73523077517689778LL;
unsigned long long int var_4 = 6474113090385437906ULL;
signed char var_11 = (signed char)71;
long long int var_12 = -3367911476574561602LL;
bool var_13 = (bool)0;
int var_14 = -616242184;
int zero = 0;
long long int var_15 = -2496822516371970868LL;
short var_16 = (short)29349;
long long int var_17 = -3482014773317455704LL;
signed char var_18 = (signed char)-38;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 3913088742223157840LL;
    value_mismatch |= var_16 != (short)-1;
    value_mismatch |= var_17 != 4294957758LL;
    value_mismatch |= var_18 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_11, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
