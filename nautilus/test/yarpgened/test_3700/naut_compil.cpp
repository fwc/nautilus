/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3700
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3700
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
void test(val<signed char> var_0, val<long long int> var_2, val<signed char> var_3, val<long long int> var_4, val<unsigned int> var_5, val<short> var_6, val<unsigned long long int> var_8, val<int> zero, val<short*> var_10, val<short*> var_11, val<signed char*> var_12) {
    *var_10 += ((/* implicit */val<short>) min((-1988507767192868161LL), (var_2)));
    *var_11 = ((/* implicit */val<short>) ((((((/* implicit */val<bool>) ((val<signed char>) var_3))) || (((/* implicit */val<bool>) ((val<signed char>) var_6))))) ? (((/* implicit */val<int>) ((((val<int>) -859552191)) <= (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_0))))))) : (((((/* implicit */val<bool>) ((val<signed char>) var_5))) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) min(((val<unsigned short>)35600), ((val<unsigned short>)62742))))))));
    *var_12 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<unsigned short>) 18446744073709551586ULL))) ? (((((/* implicit */val<bool>) (val<signed char>)-1)) ? (((/* implicit */val<int>) (val<signed char>)1)) : (-859552194))) : (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) (val<signed char>)-18)) : (((/* implicit */val<int>) var_3))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) : (min((min((((/* implicit */val<unsigned long long int>) var_5)), (var_8))), (((/* implicit */val<unsigned long long int>) var_4))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
long long int var_2 = 3144530374115266700LL;
signed char var_3 = (signed char)34;
long long int var_4 = -6461479359596708782LL;
unsigned int var_5 = 1805982890U;
short var_6 = (short)-18211;
unsigned long long int var_8 = 2490842392476875700ULL;
int zero = 0;
short var_10 = (short)-11396;
short var_11 = (short)-31879;
signed char var_12 = (signed char)-112;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-453;
    value_mismatch |= var_11 != (short)1;
    value_mismatch |= var_12 != (signed char)-35;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
}
