/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7987
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7987
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
void test(val<long long int> var_1, val<unsigned short> var_2, val<signed char> var_3, val<unsigned short> var_4, val<int> var_5, val<int> var_6, val<short> var_7, val<unsigned int> var_8, val<unsigned short> var_10, val<unsigned short> var_11, val<unsigned short> var_12, val<long long int> var_13, val<unsigned char> var_14, val<int> zero, val<bool*> var_15, val<bool*> var_16, val<unsigned char*> var_17, val<unsigned short*> var_18) {
    *var_15 = ((/* implicit */val<bool>) min((*var_15), (((/* implicit */val<bool>) max(((~(((/* implicit */val<int>) ((var_5) > (((/* implicit */val<int>) var_2))))))), (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_7)))))))));
    *var_16 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<unsigned int>) max((((((/* implicit */val<bool>) var_4)) ? (var_5) : (((/* implicit */val<int>) var_7)))), (((((/* implicit */val<int>) var_14)) * (((/* implicit */val<int>) var_3))))))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (var_13) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11)))))) ? (((/* implicit */val<unsigned int>) max((var_6), (var_5)))) : (((var_8) << (((var_1) + (6734149720553188198LL)))))))));
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) var_7)) << (((var_1) + (6734149720553188177LL)))));
    *var_18 &= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (val<signed char>)-11)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)65526))) : (4845430140653629797LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6734149720553188170LL;
unsigned short var_2 = (unsigned short)37612;
signed char var_3 = (signed char)-99;
unsigned short var_4 = (unsigned short)64317;
int var_5 = 386872470;
int var_6 = 40883016;
short var_7 = (short)31624;
unsigned int var_8 = 140757111U;
unsigned short var_10 = (unsigned short)20476;
unsigned short var_11 = (unsigned short)24978;
unsigned short var_12 = (unsigned short)35950;
long long int var_13 = 645279793999543366LL;
unsigned char var_14 = (unsigned char)6;
int zero = 0;
bool var_15 = (bool)0;
bool var_16 = (bool)1;
unsigned char var_17 = (unsigned char)237;
unsigned short var_18 = (unsigned short)48558;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (unsigned char)0;
    value_mismatch |= var_18 != (unsigned short)48550;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_10, var_11, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
