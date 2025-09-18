/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4673
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4673
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
void test(val<short> var_0, val<unsigned short> var_1, val<unsigned char> var_2, val<signed char> var_3, val<unsigned int> var_4, val<unsigned int> var_7, val<short> var_8, val<signed char> var_10, val<unsigned char> var_11, val<short> var_13, val<int> zero, val<unsigned char*> var_14, val<signed char*> var_15, val<unsigned short*> var_16, val<unsigned long long int*> var_17) {
    if (((/* implicit */val<bool>) (~(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)7773)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)7768))) : (13149023122739739815ULL)))) ? (var_4) : (((var_7) % (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))))))))))
    {
        *var_14 = ((/* implicit */val<unsigned char>) ((var_7) - (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) max((var_13), (((/* implicit */val<short>) var_3))))) ? (((/* implicit */val<int>) ((val<signed char>) (val<unsigned short>)57737))) : (((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<signed char>)-69)), ((val<unsigned short>)57737)))))))));
        if (((/* implicit */val<bool>) (~(((/* implicit */val<int>) (((~(((/* implicit */val<int>) var_2)))) >= ((~(((/* implicit */val<int>) var_11))))))))))
        {
            *var_15 = ((/* implicit */val<signed char>) max((*var_15), (((/* implicit */val<signed char>) var_0))));
            *var_16 = ((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) (((~(((/* implicit */val<int>) var_8)))) <= (((/* implicit */val<int>) var_10)))))));
        }

    }

    *var_17 |= max((((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_1))))) - ((~(17223842064010672681ULL))))), (((/* implicit */val<unsigned long long int>) (~(((((/* implicit */val<bool>) (val<signed char>)-19)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_13))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1768;
unsigned short var_1 = (unsigned short)37543;
unsigned char var_2 = (unsigned char)159;
signed char var_3 = (signed char)78;
unsigned int var_4 = 4155016865U;
unsigned int var_7 = 3025048969U;
short var_8 = (short)-5729;
signed char var_10 = (signed char)-89;
unsigned char var_11 = (unsigned char)162;
short var_13 = (short)-26901;
int zero = 0;
unsigned char var_14 = (unsigned char)44;
signed char var_15 = (signed char)114;
unsigned short var_16 = (unsigned short)20788;
unsigned long long int var_17 = 5548803602236498484ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)0;
    value_mismatch |= var_15 != (signed char)114;
    value_mismatch |= var_16 != (unsigned short)65535;
    value_mismatch |= var_17 != 18446744073709551541ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_7, var_8, var_10, var_11, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
