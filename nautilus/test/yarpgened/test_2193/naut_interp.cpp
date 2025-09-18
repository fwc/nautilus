/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2193
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2193
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
void test(val<unsigned int> var_0, val<unsigned int> var_2, val<long long int> var_3, val<unsigned int> var_4, val<long long int> var_6, val<unsigned char> var_7, val<unsigned short> var_8, val<long long int> var_9, val<short> var_10, val<int> zero, val<short*> var_11, val<int*> var_12, val<int*> var_13, val<unsigned int*> var_14, val<bool*> var_15, val<short*> var_16, val<unsigned int*> var_17) {
    if (((((/* implicit */val<int>) ((val<short>) var_8))) != (((/* implicit */val<int>) ((((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)0))) & (var_6))) <= (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_10)) != (((/* implicit */val<int>) (val<signed char>)28)))))))))))
    {
        *var_11 = ((/* implicit */val<short>) ((((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_8)) / (((/* implicit */val<int>) var_7))))) ? (((/* implicit */val<long long int>) 1926661229U)) : (max((((/* implicit */val<long long int>) 1926661229U)), (var_3))))) <= (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10)))));
        *var_12 = ((/* implicit */val<int>) var_7);
        *var_13 |= ((/* implicit */val<int>) ((((val<bool>) max((3437625769994994335LL), (((/* implicit */val<long long int>) (val<unsigned short>)0))))) ? ((+(max((var_6), (((/* implicit */val<long long int>) (val<signed char>)-1)))))) : (min((((((/* implicit */val<bool>) 3437625769994994343LL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))) : (var_3))), (((/* implicit */val<long long int>) ((var_4) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))))))))));
        *var_14 = ((/* implicit */val<unsigned int>) (val<unsigned short>)53631);
        *var_15 = ((/* implicit */val<bool>) var_10);
    }

    *var_16 &= ((/* implicit */val<short>) (-(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)62251)) ? (((/* implicit */val<long long int>) var_2)) : (var_9)))) ? (var_9) : (((var_6) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)54871)))))))));
    *var_17 -= var_0;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1140281566U;
unsigned int var_2 = 77684317U;
long long int var_3 = -1392969622319558342LL;
unsigned int var_4 = 1925524125U;
long long int var_6 = 8362498257302341924LL;
unsigned char var_7 = (unsigned char)205;
unsigned short var_8 = (unsigned short)10642;
long long int var_9 = 8045281442871420409LL;
short var_10 = (short)-10013;
int zero = 0;
short var_11 = (short)11844;
int var_12 = 867368551;
int var_13 = -1331725322;
unsigned int var_14 = 1946934266U;
bool var_15 = (bool)0;
short var_16 = (short)8438;
unsigned int var_17 = 1265420443U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)0;
    value_mismatch |= var_12 != 205;
    value_mismatch |= var_13 != -35685386;
    value_mismatch |= var_14 != 53631U;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (short)6;
    value_mismatch |= var_17 != 125138877U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_6, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
