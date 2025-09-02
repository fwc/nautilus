/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2737
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2737
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
void test(val<unsigned char> var_4, val<bool> var_5, val<signed char> var_7, val<short> var_10, val<unsigned char> var_12, val<bool> var_13, val<int> zero, val<bool*> var_15, val<int*> var_16, val<unsigned long long int*> var_17, val<unsigned int*> var_18, val<long long int*> var_19, val<bool*> var_20) {
    if ((!(((/* implicit */val<bool>) 2147483647))))
    {
        *var_15 = ((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) (val<short>)32767)) ? (3695801040U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-43))))) * (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<signed char>)42)) ? (((/* implicit */val<int>) (val<unsigned char>)144)) : (((/* implicit */val<int>) var_4)))))))) * (max((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) (val<signed char>)81))))), (max((((/* implicit */val<long long int>) (val<signed char>)43)), (-9150789558475548988LL)))))));
        *var_16 = (~(min(((~(231553741))), (((((/* implicit */val<bool>) (val<signed char>)-27)) ? (((/* implicit */val<int>) (val<signed char>)127)) : (1968524388))))));
        *var_17 = ((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (val<short>)18031))));
    }
    else
    {
        *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_7))))) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) (val<signed char>)39))));
        *var_19 = ((/* implicit */val<long long int>) (val<signed char>)42);
    }

    *var_20 |= var_5;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)219;
bool var_5 = (bool)1;
signed char var_7 = (signed char)-115;
short var_10 = (short)-9171;
unsigned char var_12 = (unsigned char)122;
bool var_13 = (bool)0;
int zero = 0;
bool var_15 = (bool)0;
int var_16 = 1434005757;
unsigned long long int var_17 = 3075805363508736680ULL;
unsigned int var_18 = 3718070935U;
long long int var_19 = -2030773841381376019LL;
bool var_20 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != 1434005757;
    value_mismatch |= var_17 != 3075805363508736680ULL;
    value_mismatch |= var_18 != 122U;
    value_mismatch |= var_19 != 42LL;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_7, var_10, var_12, var_13, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
