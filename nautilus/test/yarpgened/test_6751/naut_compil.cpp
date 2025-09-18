/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6751
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6751
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
void test(val<long long int> var_5, val<unsigned long long int> var_7, val<unsigned char> var_8, val<signed char> var_9, val<short> var_13, val<unsigned char> var_14, val<unsigned char> var_17, val<unsigned long long int> var_18, val<int> zero, val<unsigned long long int*> var_19, val<unsigned char*> var_20, val<unsigned char*> var_21, val<long long int*> var_22, val<int*> var_23) {
    *var_19 = ((/* implicit */val<unsigned long long int>) var_5);
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_14))))) : (((((/* implicit */val<bool>) ((((((/* implicit */val<int>) (val<signed char>)-111)) + (2147483647))) >> (((var_7) - (12335337741465783524ULL)))))) ? (max((((/* implicit */val<unsigned long long int>) var_14)), (var_18))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))))))))
    {
        *var_20 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<bool>) var_18)) ? (((/* implicit */val<int>) var_17)) : (((/* implicit */val<int>) (val<bool>)0)))), ((~(1533245507)))))) <= (((((val<unsigned long long int>) (val<signed char>)0)) >> (((/* implicit */val<int>) ((15939607022360855067ULL) < (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-14))))))))));
        *var_21 *= ((/* implicit */val<unsigned char>) (!(((((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)46614)))))) < (-3822557720973362919LL)))));
    }

    *var_22 = ((/* implicit */val<long long int>) max((((((/* implicit */val<bool>) 67108863LL)) ? (((/* implicit */val<int>) (val<signed char>)124)) : (((/* implicit */val<int>) (val<signed char>)13)))), (((/* implicit */val<int>) var_8))));
    *var_23 = ((/* implicit */val<int>) ((val<unsigned char>) min(((val<unsigned short>)8064), (((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) (val<signed char>)27))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6669205614679309740LL;
unsigned long long int var_7 = 12335337741465783538ULL;
unsigned char var_8 = (unsigned char)88;
signed char var_9 = (signed char)4;
short var_13 = (short)-23685;
unsigned char var_14 = (unsigned char)65;
unsigned char var_17 = (unsigned char)40;
unsigned long long int var_18 = 7145419926300253440ULL;
int zero = 0;
unsigned long long int var_19 = 459628754903520712ULL;
unsigned char var_20 = (unsigned char)241;
unsigned char var_21 = (unsigned char)191;
long long int var_22 = -1143535876550089337LL;
int var_23 = 1411908321;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 6669205614679309740ULL;
    value_mismatch |= var_20 != (unsigned char)0;
    value_mismatch |= var_21 != (unsigned char)191;
    value_mismatch |= var_22 != 124LL;
    value_mismatch |= var_23 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, var_8, var_9, var_13, var_14, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
