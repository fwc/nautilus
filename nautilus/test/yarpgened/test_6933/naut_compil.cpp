/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6933
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6933
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
void test(val<short> var_0, val<int> var_1, val<unsigned long long int> var_2, val<long long int> var_3, val<short> var_4, val<int> var_6, val<long long int> var_7, val<long long int> var_8, val<unsigned long long int> var_9, val<short> var_10, val<int> zero, val<long long int*> var_12, val<unsigned short*> var_13, val<unsigned short*> var_14, val<unsigned int*> var_15, val<short*> var_16, val<signed char*> var_17, val<bool*> var_18) {
    if (((/* implicit */val<bool>) (~(((val<unsigned long long int>) ((13506278370828472793ULL) ^ (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1)))))))))
    {
        *var_12 ^= ((/* implicit */val<long long int>) min((max(((~(((/* implicit */val<int>) (val<bool>)1)))), (max((var_6), (((/* implicit */val<int>) var_4)))))), (((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (var_7) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))))) || (((/* implicit */val<bool>) var_1)))))));
        *var_13 = ((/* implicit */val<unsigned short>) ((((val<bool>) max(((val<unsigned short>)7), (((/* implicit */val<unsigned short>) (val<unsigned char>)139))))) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_4))));
        *var_14 = ((/* implicit */val<unsigned short>) max((((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) min((2147483648U), (((/* implicit */val<unsigned int>) (val<unsigned short>)65534))))) : (((((/* implicit */val<bool>) var_2)) ? (var_2) : (6115504064804563619ULL))))), (((((/* implicit */val<bool>) (val<unsigned short>)7)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)65505))) : (((((/* implicit */val<bool>) -1026286342)) ? (12331240008904987994ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1)))))))));
        *var_15 = ((/* implicit */val<unsigned int>) (~(var_2)));
    }

    if (((/* implicit */val<bool>) min((((/* implicit */val<long long int>) ((val<int>) var_10))), (((((/* implicit */val<bool>) ((val<long long int>) var_4))) ? (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) : (9223372036854775807LL))) : (var_7))))))
    {
        *var_16 = ((/* implicit */val<short>) (-(((val<long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)39811)) ? (5514693098531704825ULL) : (((/* implicit */val<unsigned long long int>) var_8)))))));
        *var_17 = ((/* implicit */val<signed char>) max((*var_17), (((/* implicit */val<signed char>) ((val<bool>) var_3)))));
        *var_18 = ((/* implicit */val<bool>) var_4);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25582;
int var_1 = -1489647587;
unsigned long long int var_2 = 10444660055532926610ULL;
long long int var_3 = 2392637719725074209LL;
short var_4 = (short)29084;
int var_6 = -1286451028;
long long int var_7 = -8859323246894491318LL;
long long int var_8 = -7360064753903735817LL;
unsigned long long int var_9 = 17758286779337520551ULL;
short var_10 = (short)30347;
int zero = 0;
long long int var_12 = -2094843904121180849LL;
unsigned short var_13 = (unsigned short)7745;
unsigned short var_14 = (unsigned short)27669;
unsigned int var_15 = 36281639U;
short var_16 = (short)4787;
signed char var_17 = (signed char)48;
bool var_18 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -2094843904121180850LL;
    value_mismatch |= var_13 != (unsigned short)29084;
    value_mismatch |= var_14 != (unsigned short)65534;
    value_mismatch |= var_15 != 2252310893U;
    value_mismatch |= var_16 != (short)12295;
    value_mismatch |= var_17 != (signed char)48;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_7, var_8, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
