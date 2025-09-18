/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8523
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8523
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
void test(val<long long int> var_0, val<unsigned long long int> var_2, val<unsigned long long int> var_3, val<long long int> var_4, val<signed char> var_5, val<signed char> var_6, val<bool> var_7, val<unsigned int> var_8, val<unsigned long long int> var_9, val<unsigned short> var_10, val<long long int> var_11, val<unsigned long long int> var_12, val<short> var_13, val<int> zero, val<short*> var_14, val<long long int*> var_15, val<long long int*> var_16, val<unsigned long long int*> var_17, val<long long int*> var_18, val<long long int*> var_19, val<short*> var_20) {
    *var_14 = ((/* implicit */val<short>) ((val<unsigned int>) (val<bool>)1));
    if (max((((max((var_3), (((/* implicit */val<unsigned long long int>) var_8)))) <= (((/* implicit */val<unsigned long long int>) var_11)))), ((!(((/* implicit */val<bool>) max((((/* implicit */val<long long int>) var_13)), (-889093816429891906LL))))))))
    {
        *var_15 ^= ((/* implicit */val<long long int>) (((!(((/* implicit */val<bool>) min((var_12), (((/* implicit */val<unsigned long long int>) var_6))))))) ? (((/* implicit */val<unsigned long long int>) var_0)) : ((-(var_9)))));
        *var_16 = ((/* implicit */val<long long int>) var_9);
        *var_17 = ((/* implicit */val<unsigned long long int>) (+(((((/* implicit */val<bool>) var_2)) ? (((((/* implicit */val<int>) var_13)) / (((/* implicit */val<int>) var_10)))) : (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) (val<unsigned short>)0)) : (((/* implicit */val<int>) (val<signed char>)-78))))))));
        *var_18 = ((/* implicit */val<long long int>) min((*var_18), (((/* implicit */val<long long int>) ((((/* implicit */val<long long int>) ((val<unsigned int>) var_6))) <= (((((val<long long int>) var_4)) + (var_0))))))));
    }

    *var_19 = ((/* implicit */val<long long int>) min((*var_19), (((/* implicit */val<long long int>) max((var_6), (var_5))))));
    *var_20 *= ((/* implicit */val<short>) min((((/* implicit */val<long long int>) var_7)), (((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<short>) var_6)))) & (var_4)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7952722994568007550LL;
unsigned long long int var_2 = 12474951847768360017ULL;
unsigned long long int var_3 = 13619972225733914539ULL;
long long int var_4 = -4896825551412532619LL;
signed char var_5 = (signed char)-72;
signed char var_6 = (signed char)-103;
bool var_7 = (bool)1;
unsigned int var_8 = 3832188434U;
unsigned long long int var_9 = 13545396064881021322ULL;
unsigned short var_10 = (unsigned short)37282;
long long int var_11 = 3923620045958328898LL;
unsigned long long int var_12 = 15884189436399225543ULL;
short var_13 = (short)18311;
int zero = 0;
short var_14 = (short)12514;
long long int var_15 = -6065304856658969683LL;
long long int var_16 = 3239812912524420456LL;
unsigned long long int var_17 = 14724205578593868513ULL;
long long int var_18 = -2597378195155513092LL;
long long int var_19 = -2245569178587033074LL;
short var_20 = (short)25465;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)1;
    value_mismatch |= var_15 != -6065304856658969683LL;
    value_mismatch |= var_16 != 3239812912524420456LL;
    value_mismatch |= var_17 != 14724205578593868513ULL;
    value_mismatch |= var_18 != -2597378195155513092LL;
    value_mismatch |= var_19 != -2245569178587033074LL;
    value_mismatch |= var_20 != (short)13577;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
