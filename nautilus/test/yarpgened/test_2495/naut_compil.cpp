/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2495
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2495
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
void test(val<short> var_2, val<unsigned int> var_3, val<short> var_4, val<short> var_5, val<short> var_6, val<unsigned int> var_9, val<unsigned short> var_10, val<unsigned long long int> var_11, val<unsigned short> var_12, val<short> var_13, val<unsigned long long int> var_14, val<int> zero, val<unsigned long long int*> var_15, val<unsigned long long int*> var_16, val<short*> var_17, val<unsigned short*> var_18, val<short*> var_19, val<unsigned long long int*> var_20, val<short*> var_21, val<unsigned short*> var_22, val<unsigned short*> var_23) {
    *var_15 = ((/* implicit */val<unsigned long long int>) var_3);
    if (((/* implicit */val<bool>) (~((-(((/* implicit */val<int>) var_6)))))))
    {
        *var_16 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_14)) && (((/* implicit */val<bool>) (val<short>)-22775))));
        *var_17 = ((/* implicit */val<short>) (-(((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) (val<unsigned short>)3))))) + (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) + (2460019336U)))))));
    }

    if (((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) % (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 5ULL)) ? (((/* implicit */val<unsigned long long int>) var_3)) : (var_11)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_13))) : (4294967273U))))))
    {
        if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((((/* implicit */val<int>) var_4)) + (2147483647))) << (((((val<unsigned int>) -2049482869)) - (2245484427U)))))) ? (((/* implicit */val<unsigned long long int>) var_9)) : (((val<unsigned long long int>) ((val<unsigned short>) var_13))))))
        {
            *var_18 = ((/* implicit */val<unsigned short>) max((*var_18), (((/* implicit */val<unsigned short>) var_6))));
            *var_19 = ((/* implicit */val<short>) min((*var_19), (((/* implicit */val<short>) (-(min((((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_2)))), (((/* implicit */val<int>) ((((/* implicit */val<int>) var_5)) >= (((/* implicit */val<int>) (val<unsigned char>)221))))))))))));
            *var_20 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<unsigned char>)171))))) - (((val<unsigned int>) var_4))));
            *var_21 = ((/* implicit */val<short>) min((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_4)) / (((/* implicit */val<int>) ((val<short>) var_6)))))), (var_3)));
            *var_22 *= ((/* implicit */val<unsigned short>) 6ULL);
        }

        *var_23 = ((/* implicit */val<unsigned short>) ((val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (-2049482869) : (((/* implicit */val<int>) var_2))))) ? (min((((/* implicit */val<unsigned long long int>) 2643945798U)), (2305842940494217216ULL))) : (var_14))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2527;
unsigned int var_3 = 1862594569U;
short var_4 = (short)-2729;
short var_5 = (short)-1421;
short var_6 = (short)13291;
unsigned int var_9 = 95335641U;
unsigned short var_10 = (unsigned short)1474;
unsigned long long int var_11 = 3573149458704509792ULL;
unsigned short var_12 = (unsigned short)64936;
short var_13 = (short)31097;
unsigned long long int var_14 = 9678931075708913013ULL;
int zero = 0;
unsigned long long int var_15 = 14870515251141215235ULL;
unsigned long long int var_16 = 4748521804326534010ULL;
short var_17 = (short)17208;
unsigned short var_18 = (unsigned short)11347;
short var_19 = (short)2554;
unsigned long long int var_20 = 15853051930627348514ULL;
short var_21 = (short)-22214;
unsigned short var_22 = (unsigned short)9136;
unsigned short var_23 = (unsigned short)45045;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1862594569ULL;
    value_mismatch |= var_16 != 1ULL;
    value_mismatch |= var_17 != (short)-5066;
    value_mismatch |= var_18 != (unsigned short)13291;
    value_mismatch |= var_19 != (short)0;
    value_mismatch |= var_20 != 2900ULL;
    value_mismatch |= var_21 != (short)0;
    value_mismatch |= var_22 != (unsigned short)54816;
    value_mismatch |= var_23 != (unsigned short)26950;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_6, var_9, var_10, var_11, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
