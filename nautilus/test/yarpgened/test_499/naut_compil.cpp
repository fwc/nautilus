/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 499
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=499
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
void test(val<int> var_4, val<unsigned long long int> var_5, val<long long int> var_7, val<short> var_8, val<long long int> var_10, val<unsigned long long int> var_13, val<int> var_14, val<int> zero, val<long long int*> var_16, val<unsigned int*> var_17, val<unsigned short*> var_18, val<unsigned long long int*> var_19) {
    *var_16 = ((/* implicit */val<long long int>) (-(((/* implicit */val<int>) (val<signed char>)(-127 - 1)))));
    *var_17 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((4294967295U), (((/* implicit */val<unsigned int>) (val<unsigned short>)27484))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<signed char>)-125)))))) : (var_5)))) ? (((var_13) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)81))))) : (((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) var_10)), (var_5)))) ? (((((/* implicit */val<bool>) 2147483647)) ? (17639891482910828518ULL) : (((/* implicit */val<unsigned long long int>) var_7)))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) -9223372036854775787LL)) ? (((/* implicit */val<int>) (val<signed char>)122)) : (211811925))))))));
    *var_18 = ((/* implicit */val<unsigned short>) var_4);
    *var_19 = ((/* implicit */val<unsigned long long int>) min((*var_19), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_14)) ? (max((((/* implicit */val<unsigned long long int>) -4979482172468344368LL)), (17639891482910828528ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-124)))))) ? (((4979482172468344382LL) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))))) : (((/* implicit */val<long long int>) 2147483647)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1673394649;
unsigned long long int var_5 = 799347147936372957ULL;
long long int var_7 = -3444698998619948923LL;
short var_8 = (short)19146;
long long int var_10 = -2942130108154964557LL;
unsigned long long int var_13 = 14853531540745499897ULL;
int var_14 = 935632800;
int zero = 0;
long long int var_16 = -6263780056718765502LL;
unsigned int var_17 = 1266462108U;
unsigned short var_18 = (unsigned short)39383;
unsigned long long int var_19 = 8246913084943903203ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 128LL;
    value_mismatch |= var_17 != 4082542566U;
    value_mismatch |= var_18 != (unsigned short)63961;
    value_mismatch |= var_19 != 522ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_7, var_8, var_10, var_13, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
