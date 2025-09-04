/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3013
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3013
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
void test(val<bool> var_0, val<int> var_2, val<unsigned char> var_3, val<short> var_4, val<short> var_6, val<signed char> var_13, val<int> zero, val<unsigned int*> var_14, val<unsigned int*> var_15, val<bool*> var_16, val<unsigned long long int*> var_17, val<short*> var_18) {
    if (((/* implicit */val<bool>) var_2))
    {
        *var_14 += ((/* implicit */val<unsigned int>) var_2);
        *var_15 *= ((/* implicit */val<unsigned int>) var_0);
    }

    *var_16 = ((/* implicit */val<bool>) min((*var_16), (((/* implicit */val<bool>) max((((((/* implicit */val<int>) var_13)) - (-1421404212))), (((((/* implicit */val<bool>) max((var_6), (((/* implicit */val<short>) (val<bool>)1))))) ? (((((/* implicit */val<bool>) (val<short>)0)) ? (((/* implicit */val<int>) (val<short>)10)) : (((/* implicit */val<int>) (val<unsigned short>)9449)))) : (((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<short>)-1)), ((val<unsigned short>)28134)))))))))));
    *var_17 = (~(((val<unsigned long long int>) ((((/* implicit */val<int>) var_3)) >= (((/* implicit */val<int>) var_4))))));
    *var_18 = ((/* implicit */val<short>) ((((/* implicit */val<int>) max(((val<unsigned short>)56093), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) 2147483647)) && (((/* implicit */val<bool>) 8582428428070115508ULL)))))))) == (((/* implicit */val<int>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
int var_2 = 10522696;
unsigned char var_3 = (unsigned char)86;
short var_4 = (short)-2044;
short var_6 = (short)9604;
signed char var_13 = (signed char)-45;
int zero = 0;
unsigned int var_14 = 2815199280U;
unsigned int var_15 = 2318706507U;
bool var_16 = (bool)0;
unsigned long long int var_17 = 3436744054077966492ULL;
short var_18 = (short)6282;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 2825721976U;
    value_mismatch |= var_15 != 2318706507U;
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != 18446744073709551614ULL;
    value_mismatch |= var_18 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_6, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
