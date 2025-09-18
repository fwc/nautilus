/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2722
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2722
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
void test(val<signed char> var_0, val<unsigned char> var_1, val<signed char> var_2, val<unsigned int> var_3, val<unsigned char> var_4, val<bool> var_5, val<unsigned int> var_6, val<long long int> var_7, val<unsigned char> var_8, val<signed char> var_9, val<long long int> var_10, val<signed char> var_11, val<unsigned long long int> var_12, val<short> var_14, val<short> var_15, val<bool> var_16, val<short> var_17, val<int> zero, val<short*> var_18, val<signed char*> var_19, val<short*> var_20, val<long long int*> var_21, val<unsigned int*> var_22) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_0))))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_4))))) : (var_6)))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_2)) ? (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_11)))) : (((/* implicit */val<int>) var_9))))) : (var_10))))
    {
        *var_18 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_17)))) : (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_15))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_16))) : (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned long long int>) ((val<unsigned int>) var_15))) : (var_12)))));
        *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((val<int>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_14)))))) ? (((((/* implicit */val<bool>) var_10)) ? (((((/* implicit */val<bool>) var_8)) ? (var_12) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_14))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))) : (var_7)))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<short>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_15)) : (((/* implicit */val<int>) var_11)))))))));
        *var_20 |= ((/* implicit */val<short>) var_1);
    }

    *var_21 = ((/* implicit */val<long long int>) var_2);
    *var_22 = ((/* implicit */val<unsigned int>) ((val<short>) ((((/* implicit */val<bool>) ((val<long long int>) var_11))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<signed char>) var_10)))) : (var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-18;
unsigned char var_1 = (unsigned char)48;
signed char var_2 = (signed char)49;
unsigned int var_3 = 1304810088U;
unsigned char var_4 = (unsigned char)102;
bool var_5 = (bool)1;
unsigned int var_6 = 579083829U;
long long int var_7 = 1097163841820967527LL;
unsigned char var_8 = (unsigned char)90;
signed char var_9 = (signed char)-96;
long long int var_10 = 8299684117367098598LL;
signed char var_11 = (signed char)-95;
unsigned long long int var_12 = 7525802337293196073ULL;
short var_14 = (short)24023;
short var_15 = (short)30645;
bool var_16 = (bool)0;
short var_17 = (short)-6751;
int zero = 0;
short var_18 = (short)22609;
signed char var_19 = (signed char)95;
short var_20 = (short)-26061;
long long int var_21 = -3821827415624092004LL;
unsigned int var_22 = 1114084732U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)0;
    value_mismatch |= var_19 != (signed char)41;
    value_mismatch |= var_20 != (short)-26061;
    value_mismatch |= var_21 != 49LL;
    value_mismatch |= var_22 != 4294967270U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_14, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
