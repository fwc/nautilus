/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3146
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3146
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
void test(val<unsigned char> var_0, val<long long int> var_1, val<long long int> var_2, val<short> var_3, val<unsigned int> var_6, val<unsigned long long int> var_8, val<unsigned int> var_10, val<unsigned char> var_11, val<bool> var_12, val<unsigned char> var_13, val<signed char> var_15, val<int> zero, val<unsigned char*> var_16, val<int*> var_17, val<unsigned short*> var_18, val<unsigned short*> var_19, val<unsigned char*> var_20, val<long long int*> var_21, val<short*> var_22) {
    if (((/* implicit */val<bool>) var_0))
    {
        *var_16 = ((/* implicit */val<unsigned char>) ((val<bool>) min((((/* implicit */val<unsigned int>) ((val<unsigned short>) 15374880826690353273ULL))), (((val<unsigned int>) 3071863247019198327ULL)))));
        *var_17 = ((/* implicit */val<int>) (~(min((((/* implicit */val<unsigned int>) var_12)), (((((/* implicit */val<bool>) var_11)) ? (var_6) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3)))))))));
    }

    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<int>) (val<signed char>)40))) ? (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) var_10)) ? (2753684459621322653LL) : (var_1))) | (max((((/* implicit */val<long long int>) var_6)), (var_2)))))) : ((~(((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) ^ (var_8))))))))
    {
        *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) 1553579764U)) ? (((/* implicit */val<int>) ((val<bool>) ((val<long long int>) var_12)))) : (((/* implicit */val<int>) var_15))));
        *var_19 *= ((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) (~(((/* implicit */val<int>) ((val<unsigned short>) 3809369652U)))))) == (((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned char>) var_15)))) | (((((var_1) + (9223372036854775807LL))) >> (((((/* implicit */val<int>) (val<unsigned char>)255)) - (247)))))))));
        *var_20 = var_13;
    }

    *var_21 = ((/* implicit */val<long long int>) var_0);
    *var_22 = ((/* implicit */val<short>) (-(min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<unsigned short>)42280)) < (((/* implicit */val<int>) var_15))))), (((((/* implicit */val<bool>) (val<unsigned short>)0)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))) : (0ULL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
long long int var_1 = -2765080262619758109LL;
long long int var_2 = 6230267504057911035LL;
short var_3 = (short)26657;
unsigned int var_6 = 2483657915U;
unsigned long long int var_8 = 5421788511264691424ULL;
unsigned int var_10 = 2132939535U;
unsigned char var_11 = (unsigned char)144;
bool var_12 = (bool)1;
unsigned char var_13 = (unsigned char)47;
signed char var_15 = (signed char)-28;
int zero = 0;
unsigned char var_16 = (unsigned char)56;
int var_17 = 453276024;
unsigned short var_18 = (unsigned short)368;
unsigned short var_19 = (unsigned short)28074;
unsigned char var_20 = (unsigned char)1;
long long int var_21 = 8695451846805237630LL;
short var_22 = (short)-6152;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)1;
    value_mismatch |= var_17 != -2;
    value_mismatch |= var_18 != (unsigned short)1;
    value_mismatch |= var_19 != (unsigned short)0;
    value_mismatch |= var_20 != (unsigned char)47;
    value_mismatch |= var_21 != 22LL;
    value_mismatch |= var_22 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_6, var_8, var_10, var_11, var_12, var_13, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
