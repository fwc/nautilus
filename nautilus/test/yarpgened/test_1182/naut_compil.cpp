/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1182
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1182
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
void test(val<signed char> var_0, val<bool> var_2, val<bool> var_3, val<unsigned short> var_6, val<unsigned short> var_7, val<long long int> var_10, val<unsigned int> var_12, val<bool> var_15, val<signed char> var_16, val<int> zero, val<unsigned int*> var_18, val<long long int*> var_19, val<signed char*> var_20, val<unsigned short*> var_21, val<bool*> var_22) {
    if (((/* implicit */val<bool>) var_10))
    {
        *var_18 += ((/* implicit */val<unsigned int>) ((val<long long int>) (~(((/* implicit */val<int>) var_2)))));
        *var_19 = ((/* implicit */val<long long int>) min((min((((/* implicit */val<unsigned int>) ((val<unsigned char>) (val<signed char>)-126))), (min((var_12), (((/* implicit */val<unsigned int>) (val<signed char>)(-127 - 1))))))), (((((/* implicit */val<bool>) var_6)) ? (var_12) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0)))))));
        *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_7)) ? (((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_3)), (var_12)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<bool>) (val<signed char>)98)))) : (((1152921504606846974LL) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)8191))))))) : (((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) | (1125899906809856LL)))) ? (((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) var_15)), (4U)))) : (min((((/* implicit */val<long long int>) var_15)), (1125899906809856LL)))))));
    }

    *var_21 = var_7;
    *var_22 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<long long int>) var_0))) ? ((-(1125899906809856LL))) : (((/* implicit */val<long long int>) (-(((/* implicit */val<int>) (val<signed char>)36)))))))) ? (((((/* implicit */val<bool>) 6982081320902006663LL)) ? (((/* implicit */val<int>) (val<signed char>)(-127 - 1))) : (((/* implicit */val<int>) (val<bool>)1)))) : (max((((/* implicit */val<int>) max((var_16), ((val<signed char>)23)))), ((+(((/* implicit */val<int>) (val<signed char>)124))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
bool var_2 = (bool)0;
bool var_3 = (bool)0;
unsigned short var_6 = (unsigned short)17024;
unsigned short var_7 = (unsigned short)57629;
long long int var_10 = -776768712462862474LL;
unsigned int var_12 = 3634134556U;
bool var_15 = (bool)0;
signed char var_16 = (signed char)16;
int zero = 0;
unsigned int var_18 = 900721723U;
long long int var_19 = -2458669650788387127LL;
signed char var_20 = (signed char)-71;
unsigned short var_21 = (unsigned short)41687;
bool var_22 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 900721722U;
    value_mismatch |= var_19 != 130LL;
    value_mismatch |= var_20 != (signed char)1;
    value_mismatch |= var_21 != (unsigned short)57629;
    value_mismatch |= var_22 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_6, var_7, var_10, var_12, var_15, var_16, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
