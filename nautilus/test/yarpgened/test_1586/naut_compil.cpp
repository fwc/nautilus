/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1586
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1586
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
void test(val<signed char> var_0, val<unsigned short> var_1, val<unsigned char> var_2, val<unsigned int> var_3, val<int> var_5, val<bool> var_6, val<unsigned int> var_7, val<int> var_8, val<signed char> var_9, val<long long int> var_10, val<int> zero, val<unsigned short*> var_12, val<unsigned int*> var_13, val<unsigned long long int*> var_14, val<signed char*> var_15, val<unsigned short*> var_16) {
    *var_12 = ((/* implicit */val<unsigned short>) ((val<unsigned int>) var_7));
    if (((/* implicit */val<bool>) ((val<short>) ((((/* implicit */val<bool>) ((val<unsigned int>) var_2))) ? (((val<long long int>) (val<unsigned short>)17473)) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9)))))))
    {
        *var_13 -= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_3)) ? (var_5) : (((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<bool>)0))))) ? (((/* implicit */val<int>) var_0)) : (((val<int>) (val<unsigned char>)252))))));
        *var_14 = ((/* implicit */val<unsigned long long int>) max((*var_14), (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_9))))) - (var_7)))), (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) : (max((((/* implicit */val<long long int>) (val<bool>)0)), (var_10))))))))));
    }

    *var_15 = ((/* implicit */val<signed char>) var_6);
    *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_2)) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (var_5) : (((/* implicit */val<int>) var_2))))) ? (((/* implicit */val<int>) ((val<short>) (val<bool>)1))) : (((/* implicit */val<int>) var_2)))) : (((/* implicit */val<int>) ((val<short>) var_8)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
unsigned short var_1 = (unsigned short)57829;
unsigned char var_2 = (unsigned char)4;
unsigned int var_3 = 1529146244U;
int var_5 = 1058632526;
bool var_6 = (bool)0;
unsigned int var_7 = 4230784130U;
int var_8 = 1108973030;
signed char var_9 = (signed char)122;
long long int var_10 = 3746597294648959070LL;
int zero = 0;
unsigned short var_12 = (unsigned short)23035;
unsigned int var_13 = 3286378235U;
unsigned long long int var_14 = 1492608303445304541ULL;
signed char var_15 = (signed char)69;
unsigned short var_16 = (unsigned short)33041;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)42114;
    value_mismatch |= var_13 != 2227745709U;
    value_mismatch |= var_14 != 1492608303445304541ULL;
    value_mismatch |= var_15 != (signed char)0;
    value_mismatch |= var_16 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_7, var_8, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
