/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2898
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2898
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
void test(val<unsigned char> var_1, val<unsigned short> var_2, val<unsigned long long int> var_3, val<short> var_4, val<bool> var_5, val<int> var_6, val<bool> var_7, val<unsigned char> var_9, val<unsigned short> var_11, val<int> zero, val<int*> var_12, val<unsigned int*> var_13, val<bool*> var_14, val<bool*> var_15, val<unsigned int*> var_16) {
    *var_12 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned int>) max((((((/* implicit */val<int>) var_5)) / (((/* implicit */val<int>) var_2)))), (((((/* implicit */val<int>) (val<bool>)1)) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775796LL))) + (43LL)))))))) : (max((0U), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<signed char>)15)) ? (((/* implicit */val<int>) (val<short>)-6266)) : (((/* implicit */val<int>) (val<short>)-6257)))))))));
    *var_13 |= ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_2)) : (var_6))))))) ^ (((((/* implicit */val<bool>) ((val<int>) -600812605))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_4)) || (((/* implicit */val<bool>) var_3))))) : (((((/* implicit */val<bool>) 23U)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) (val<short>)6266))))))));
    *var_14 = var_7;
    if (((/* implicit */val<bool>) max(((val<short>)6269), (((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) (((val<bool>)1) ? (((/* implicit */val<int>) (val<signed char>)105)) : (((/* implicit */val<int>) (val<unsigned char>)234))))) == (8ULL)))))))
    {
        *var_15 = ((/* implicit */val<bool>) ((val<unsigned int>) (((!(((/* implicit */val<bool>) var_9)))) ? (((0U) / (((/* implicit */val<unsigned int>) -600812605)))) : (((/* implicit */val<unsigned int>) ((var_6) | (((/* implicit */val<int>) (val<signed char>)-35))))))));
        *var_16 = ((/* implicit */val<unsigned int>) var_2);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)182;
unsigned short var_2 = (unsigned short)63165;
unsigned long long int var_3 = 7046004824146695656ULL;
short var_4 = (short)-26328;
bool var_5 = (bool)1;
int var_6 = 900162021;
bool var_7 = (bool)0;
unsigned char var_9 = (unsigned char)100;
unsigned short var_11 = (unsigned short)54872;
int zero = 0;
int var_12 = -837253655;
unsigned int var_13 = 1443021330U;
bool var_14 = (bool)0;
bool var_15 = (bool)1;
unsigned int var_16 = 4068732326U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0;
    value_mismatch |= var_13 != 1443021331U;
    value_mismatch |= var_14 != (bool)0;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 63165U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_9, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
