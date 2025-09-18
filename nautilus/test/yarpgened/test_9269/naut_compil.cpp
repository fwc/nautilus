/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9269
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9269
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
void test(val<short> var_1, val<unsigned int> var_2, val<bool> var_3, val<short> var_4, val<unsigned short> var_5, val<int> var_7, val<unsigned long long int> var_8, val<unsigned short> var_9, val<short> var_10, val<int> zero, val<long long int*> var_12, val<long long int*> var_13, val<unsigned long long int*> var_14, val<unsigned char*> var_15) {
    *var_12 += ((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) max((133693440U), (((/* implicit */val<unsigned int>) (val<unsigned short>)33697))))) ? (((((/* implicit */val<int>) var_10)) + (((/* implicit */val<int>) var_1)))) : (((/* implicit */val<int>) var_5)))) >= ((+(((/* implicit */val<int>) var_5))))));
    *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)33697))) / (14493968641025151756ULL)))) ? (var_2) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) != (((/* implicit */val<int>) var_3))))) << (((((((/* implicit */val<bool>) var_7)) ? (var_8) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))))) - (13904494359684707748ULL))))))));
    *var_14 -= ((/* implicit */val<unsigned long long int>) ((val<signed char>) ((min((((/* implicit */val<int>) var_1)), (var_7))) - (((/* implicit */val<int>) var_9)))));
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (((~(71776119061217280ULL))) >> ((((~(((/* implicit */val<int>) (val<short>)-1024)))) - (967)))))) ? ((-(min((var_2), (((/* implicit */val<unsigned int>) var_3)))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<bool>) min(((val<unsigned short>)28020), ((val<unsigned short>)31834))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22815;
unsigned int var_2 = 712896549U;
bool var_3 = (bool)1;
short var_4 = (short)13593;
unsigned short var_5 = (unsigned short)28046;
int var_7 = -1993122519;
unsigned long long int var_8 = 13904494359684707752ULL;
unsigned short var_9 = (unsigned short)61574;
short var_10 = (short)-2623;
int zero = 0;
long long int var_12 = 8432716479052128602LL;
long long int var_13 = 1790828133087028292LL;
unsigned long long int var_14 = 3176286735648179323ULL;
unsigned char var_15 = (unsigned char)33;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 8432716479052128602LL;
    value_mismatch |= var_13 != 16LL;
    value_mismatch |= var_14 != 3176286735648179416ULL;
    value_mismatch |= var_15 != (unsigned char)255;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
