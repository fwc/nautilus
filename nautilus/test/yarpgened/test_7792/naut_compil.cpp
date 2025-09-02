/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7792
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7792
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
void test(val<long long int> var_0, val<signed char> var_1, val<unsigned long long int> var_3, val<unsigned long long int> var_5, val<unsigned long long int> var_6, val<unsigned short> var_7, val<unsigned long long int> var_8, val<unsigned long long int> var_9, val<int> var_11, val<unsigned short> var_12, val<signed char> var_13, val<unsigned long long int> var_14, val<unsigned short> var_15, val<int> zero, val<signed char*> var_16, val<signed char*> var_17, val<unsigned long long int*> var_18, val<unsigned char*> var_19, val<signed char*> var_20, val<unsigned short*> var_21, val<signed char*> var_22, val<unsigned char*> var_23) {
    *var_16 = ((/* implicit */val<signed char>) (-((-((~(((/* implicit */val<int>) (val<unsigned short>)15))))))));
    *var_17 = ((/* implicit */val<signed char>) max((*var_17), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) ((var_3) <= (var_9))))))) ? (((val<unsigned long long int>) max((((/* implicit */val<unsigned short>) (val<signed char>)-43)), (var_15)))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) (val<signed char>)-20)) : (((/* implicit */val<int>) (val<signed char>)-35))))))))));
    if (((/* implicit */val<bool>) (+(((/* implicit */val<int>) ((((/* implicit */val<bool>) ((val<short>) (val<unsigned short>)5052))) || (((/* implicit */val<bool>) -2147483626))))))))
    {
        *var_18 = ((/* implicit */val<unsigned long long int>) min((*var_18), (((/* implicit */val<unsigned long long int>) ((val<long long int>) max((var_11), (((/* implicit */val<int>) var_1))))))));
        *var_19 = ((/* implicit */val<unsigned char>) var_5);
    }
    else
    {
        *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned short>) var_7)))) * (((((/* implicit */val<bool>) max(((val<signed char>)0), ((val<signed char>)68)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)100))) : (min((6288545630590582195ULL), (var_14)))))));
        *var_21 = var_12;
        *var_22 = ((/* implicit */val<signed char>) max((*var_22), (((/* implicit */val<signed char>) min((((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_15))) == (var_14))) ? (var_6) : (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (val<unsigned short>)65535))))))), (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))) + (((((/* implicit */val<bool>) var_12)) ? (var_9) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)31))))))))))));
    }

    *var_23 = ((/* implicit */val<unsigned char>) min((((((/* implicit */val<unsigned long long int>) (~(var_0)))) | ((~(var_6))))), ((~(var_8)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2711254742440616654LL;
signed char var_1 = (signed char)68;
unsigned long long int var_3 = 7603235143802615796ULL;
unsigned long long int var_5 = 1828021562726331178ULL;
unsigned long long int var_6 = 2363997562269598543ULL;
unsigned short var_7 = (unsigned short)21084;
unsigned long long int var_8 = 17490265892769088926ULL;
unsigned long long int var_9 = 3193994928024047209ULL;
int var_11 = 1959131355;
unsigned short var_12 = (unsigned short)48624;
signed char var_13 = (signed char)80;
unsigned long long int var_14 = 11791406625154211086ULL;
unsigned short var_15 = (unsigned short)43739;
int zero = 0;
signed char var_16 = (signed char)-3;
signed char var_17 = (signed char)-65;
unsigned long long int var_18 = 17640819458651292386ULL;
unsigned char var_19 = (unsigned char)181;
signed char var_20 = (signed char)122;
unsigned short var_21 = (unsigned short)33411;
signed char var_22 = (signed char)-124;
unsigned char var_23 = (unsigned char)25;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)-16;
    value_mismatch |= var_17 != (signed char)-20;
    value_mismatch |= var_18 != 1959131355ULL;
    value_mismatch |= var_19 != (unsigned char)42;
    value_mismatch |= var_20 != (signed char)122;
    value_mismatch |= var_21 != (unsigned short)33411;
    value_mismatch |= var_22 != (signed char)-124;
    value_mismatch |= var_23 != (unsigned char)97;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_6, var_7, var_8, var_9, var_11, var_12, var_13, var_14, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
