/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2261
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2261
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
void test(val<unsigned char> var_2, val<short> var_3, val<unsigned char> var_4, val<unsigned int> var_6, val<unsigned int> var_8, val<signed char> var_11, val<int> var_12, val<unsigned short> var_14, val<int> zero, val<unsigned short*> var_15, val<unsigned int*> var_16, val<unsigned short*> var_17, val<unsigned short*> var_18, val<signed char*> var_19, val<short*> var_20, val<signed char*> var_21, val<short*> var_22) {
    if (((/* implicit */val<bool>) var_12))
    {
        *var_15 -= ((/* implicit */val<unsigned short>) var_2);
        *var_16 = (+((-(((((/* implicit */val<bool>) 6U)) ? (10U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11))))))));
        *var_17 = ((/* implicit */val<unsigned short>) 8652063788941437166ULL);
    }

    if (((/* implicit */val<bool>) min((max((((/* implicit */val<unsigned int>) ((val<unsigned short>) var_8))), (((val<unsigned int>) 9794680284768114450ULL)))), (((/* implicit */val<unsigned int>) ((val<unsigned short>) ((((/* implicit */val<bool>) var_8)) ? (713708086) : (((/* implicit */val<int>) var_3)))))))))
    {
        if (((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_3)))))
        {
            *var_18 = ((/* implicit */val<unsigned short>) (~(max((((/* implicit */val<unsigned long long int>) min((23U), (var_6)))), ((~(9794680284768114428ULL)))))));
            *var_19 = ((/* implicit */val<signed char>) var_3);
            *var_20 = ((/* implicit */val<short>) max((*var_20), (((/* implicit */val<short>) ((((/* implicit */val<bool>) (val<short>)32756)) ? ((~(var_8))) : (((/* implicit */val<unsigned int>) min(((+(((/* implicit */val<int>) (val<unsigned short>)48764)))), (((/* implicit */val<int>) var_4))))))))));
        }

        *var_21 = ((/* implicit */val<signed char>) var_4);
        *var_22 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) var_14))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)58;
short var_3 = (short)-29839;
unsigned char var_4 = (unsigned char)56;
unsigned int var_6 = 395947256U;
unsigned int var_8 = 195255833U;
signed char var_11 = (signed char)-98;
int var_12 = 1282475310;
unsigned short var_14 = (unsigned short)61186;
int zero = 0;
unsigned short var_15 = (unsigned short)32112;
unsigned int var_16 = 106016839U;
unsigned short var_17 = (unsigned short)41022;
unsigned short var_18 = (unsigned short)51385;
signed char var_19 = (signed char)-51;
short var_20 = (short)-4741;
signed char var_21 = (signed char)124;
short var_22 = (short)1832;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)32054;
    value_mismatch |= var_16 != 4294967286U;
    value_mismatch |= var_17 != (unsigned short)59630;
    value_mismatch |= var_18 != (unsigned short)5884;
    value_mismatch |= var_19 != (signed char)113;
    value_mismatch |= var_20 != (short)-4741;
    value_mismatch |= var_21 != (signed char)56;
    value_mismatch |= var_22 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_6, var_8, var_11, var_12, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
