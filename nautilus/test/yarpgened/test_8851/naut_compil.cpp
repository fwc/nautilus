/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8851
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8851
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
void test(val<long long int> var_1, val<long long int> var_2, val<unsigned int> var_3, val<unsigned int> var_4, val<unsigned int> var_5, val<long long int> var_6, val<short> var_7, val<long long int> var_10, val<unsigned long long int> var_11, val<int> var_12, val<short> var_13, val<int> zero, val<unsigned long long int*> var_14, val<bool*> var_15, val<bool*> var_16, val<unsigned long long int*> var_17, val<long long int*> var_18, val<long long int*> var_19, val<int*> var_20) {
    *var_14 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (var_3) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)29123)))))) ? (var_10) : (((/* implicit */val<long long int>) var_5))));
    if (((((18446744073709551615ULL) >> (((((/* implicit */val<int>) min((var_13), ((val<short>)29123)))) + (2340))))) <= (((/* implicit */val<unsigned long long int>) (+(((((/* implicit */val<int>) var_7)) | (((/* implicit */val<int>) (val<short>)29123)))))))))
    {
        *var_15 = ((/* implicit */val<bool>) var_3);
        *var_16 = (!(((/* implicit */val<bool>) max((((/* implicit */val<long long int>) (val<short>)29123)), (min((var_6), (((/* implicit */val<long long int>) var_12))))))));
        *var_17 = ((/* implicit */val<unsigned long long int>) var_1);
    }

    *var_18 |= ((/* implicit */val<long long int>) var_12);
    if ((!((!(((/* implicit */val<bool>) max((var_11), (((/* implicit */val<unsigned long long int>) var_7)))))))))
    {
        *var_19 = ((/* implicit */val<long long int>) var_4);
        *var_20 = ((/* implicit */val<int>) max((*var_20), (((/* implicit */val<int>) ((((/* implicit */val<bool>) (~(min((var_10), (((/* implicit */val<long long int>) var_4))))))) ? (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (val<short>)29123))))) : (var_2))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3344066499983346347LL;
long long int var_2 = -3074341497520025600LL;
unsigned int var_3 = 2622484822U;
unsigned int var_4 = 4134943953U;
unsigned int var_5 = 2272160430U;
long long int var_6 = -3143638533268882122LL;
short var_7 = (short)-8527;
long long int var_10 = 1262644236033695799LL;
unsigned long long int var_11 = 6242327607930969307ULL;
int var_12 = 1134134150;
short var_13 = (short)-2318;
int zero = 0;
unsigned long long int var_14 = 12081769548838182547ULL;
bool var_15 = (bool)0;
bool var_16 = (bool)0;
unsigned long long int var_17 = 1536970588225940626ULL;
long long int var_18 = -7596914599412895209LL;
long long int var_19 = -5140066604351156828LL;
int var_20 = 84834941;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1262644236033695799ULL;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != 3344066499983346347ULL;
    value_mismatch |= var_18 != -7596914598295637097LL;
    value_mismatch |= var_19 != 4134943953LL;
    value_mismatch |= var_20 != 84834941;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
