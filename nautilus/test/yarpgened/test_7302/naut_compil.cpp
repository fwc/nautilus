/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7302
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7302
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
void test(val<short> var_0, val<int> var_1, val<unsigned char> var_2, val<signed char> var_4, val<int> var_6, val<bool> var_8, val<short> var_13, val<long long int> var_14, val<unsigned long long int> var_15, val<int> zero, val<short*> var_16, val<unsigned long long int*> var_17, val<unsigned char*> var_18) {
    *var_16 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) var_6)) & (12597588663870647180ULL)))) ? (((((((/* implicit */val<bool>) (val<signed char>)37)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) (val<signed char>)42)))) >> (((((/* implicit */val<int>) var_0)) - (898))))) : (var_1)));
    *var_17 *= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) | (var_15)))) ? (((((/* implicit */val<bool>) ((5322343274353264473LL) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2)))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned char>) var_4)))) : (min((5322343274353264470LL), (((/* implicit */val<long long int>) var_13)))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) == (var_14)))))));
    *var_18 = ((/* implicit */val<unsigned char>) ((val<unsigned short>) ((((/* implicit */val<bool>) ((val<unsigned short>) var_8))) ? (((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_2))))) : (var_14))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)913;
int var_1 = 1012347971;
unsigned char var_2 = (unsigned char)199;
signed char var_4 = (signed char)50;
int var_6 = 224124193;
bool var_8 = (bool)1;
short var_13 = (short)-12684;
long long int var_14 = 9130648388345636725LL;
unsigned long long int var_15 = 4062321812261785517ULL;
int zero = 0;
short var_16 = (short)24892;
unsigned long long int var_17 = 6606110554359441343ULL;
unsigned char var_18 = (unsigned char)227;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)0;
    value_mismatch |= var_17 != 16710878464909689678ULL;
    value_mismatch |= var_18 != (unsigned char)57;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_8, var_13, var_14, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
}
