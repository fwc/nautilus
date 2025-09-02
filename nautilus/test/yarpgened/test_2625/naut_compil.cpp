/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2625
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2625
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
void test(val<bool> var_0, val<unsigned int> var_1, val<bool> var_2, val<bool> var_3, val<int> var_4, val<bool> var_5, val<long long int> var_6, val<bool> var_9, val<bool> var_10, val<unsigned int> var_12, val<long long int> var_13, val<long long int> var_14, val<int> zero, val<bool*> var_15, val<bool*> var_16, val<bool*> var_17, val<unsigned int*> var_18, val<long long int*> var_19, val<bool*> var_20, val<long long int*> var_21, val<unsigned int*> var_22) {
    *var_15 = ((/* implicit */val<bool>) var_4);
    *var_16 = ((((((((/* implicit */val<bool>) var_12)) && (var_0))) ? (var_14) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))))) == (((/* implicit */val<long long int>) ((var_1) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((var_12) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5)))))))))));
    *var_17 = ((/* implicit */val<bool>) var_4);
    if (((/* implicit */val<bool>) (~(((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_3))))) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (!(var_3)))))))))
    {
        if (var_3)
        {
            *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((var_14), ((~(var_13)))))) ? (((/* implicit */val<int>) var_3)) : ((-(((/* implicit */val<int>) ((var_2) || (var_9))))))));
            *var_19 = ((/* implicit */val<long long int>) var_10);
            *var_20 *= var_0;
        }

        *var_21 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((((val<unsigned int>) 5115547821658424835LL)) <= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))) <= (((/* implicit */val<int>) var_9))));
        *var_22 += ((/* implicit */val<unsigned int>) var_6);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned int var_1 = 544470308U;
bool var_2 = (bool)1;
bool var_3 = (bool)1;
int var_4 = -498344182;
bool var_5 = (bool)1;
long long int var_6 = -7139286597940912632LL;
bool var_9 = (bool)0;
bool var_10 = (bool)0;
unsigned int var_12 = 2636340290U;
long long int var_13 = -7111446934907896790LL;
long long int var_14 = 5439356694879474051LL;
int zero = 0;
bool var_15 = (bool)1;
bool var_16 = (bool)0;
bool var_17 = (bool)0;
unsigned int var_18 = 1679832095U;
long long int var_19 = -7418570666593827074LL;
bool var_20 = (bool)0;
long long int var_21 = -417455064685715649LL;
unsigned int var_22 = 389395021U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != 1U;
    value_mismatch |= var_19 != 0LL;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != 1LL;
    value_mismatch |= var_22 != 1128009813U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_9, var_10, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
