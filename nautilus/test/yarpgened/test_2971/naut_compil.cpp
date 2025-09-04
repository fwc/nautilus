/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2971
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2971
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
void test(val<int> var_0, val<unsigned short> var_1, val<unsigned char> var_2, val<unsigned short> var_3, val<signed char> var_4, val<unsigned int> var_7, val<signed char> var_9, val<unsigned int> var_10, val<unsigned short> var_11, val<signed char> var_12, val<signed char> var_14, val<long long int> var_15, val<long long int> var_16, val<unsigned long long int> var_17, val<int> zero, val<int*> var_18, val<short*> var_19, val<unsigned long long int*> var_20, val<unsigned short*> var_21, val<unsigned long long int*> var_22, val<unsigned long long int*> var_23) {
    *var_18 = ((/* implicit */val<int>) min((*var_18), (((((((/* implicit */val<int>) ((val<short>) (val<short>)-25140))) + (2147483647))) << (((((/* implicit */val<int>) var_3)) - (8984)))))));
    if (((/* implicit */val<bool>) ((val<unsigned char>) ((((max((var_15), (var_15))) + (9223372036854775807LL))) >> (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_4)) && (((/* implicit */val<bool>) var_15)))))))))
    {
        *var_19 *= ((/* implicit */val<short>) ((val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) (val<unsigned char>)211)) : (((/* implicit */val<int>) var_1))))) ? ((+(15102374167433280604ULL))) : (((((/* implicit */val<bool>) var_9)) ? (var_17) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))))))));
        *var_20 *= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (var_17) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)85)))))) && (((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_0)), (var_7)))))))) - (((((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12))) : (var_10))) * (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_1)) >> (((var_17) - (16569055667924108574ULL))))))))));
        *var_21 = ((/* implicit */val<unsigned short>) var_14);
    }

    *var_22 = ((/* implicit */val<unsigned long long int>) var_7);
    *var_23 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_15)) && (((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) | (var_15))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 484763042;
unsigned short var_1 = (unsigned short)42455;
unsigned char var_2 = (unsigned char)160;
unsigned short var_3 = (unsigned short)8984;
signed char var_4 = (signed char)8;
unsigned int var_7 = 1325016660U;
signed char var_9 = (signed char)13;
unsigned int var_10 = 3875264125U;
unsigned short var_11 = (unsigned short)51085;
signed char var_12 = (signed char)-67;
signed char var_14 = (signed char)71;
long long int var_15 = -1523715107168837354LL;
long long int var_16 = 6304104830779309015LL;
unsigned long long int var_17 = 16569055667924108605ULL;
int zero = 0;
int var_18 = 1337637124;
short var_19 = (short)978;
unsigned long long int var_20 = 9752530712137815222ULL;
unsigned short var_21 = (unsigned short)13382;
unsigned long long int var_22 = 8357556335949470911ULL;
unsigned long long int var_23 = 4987383819178356882ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1337637124;
    value_mismatch |= var_19 != (short)6008;
    value_mismatch |= var_20 != 9752530712137815222ULL;
    value_mismatch |= var_21 != (unsigned short)71;
    value_mismatch |= var_22 != 1325016660ULL;
    value_mismatch |= var_23 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_7, var_9, var_10, var_11, var_12, var_14, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
