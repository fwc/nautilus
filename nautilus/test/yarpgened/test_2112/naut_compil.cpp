/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2112
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2112
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
void test(val<unsigned long long int> var_0, val<unsigned char> var_2, val<signed char> var_7, val<int> var_10, val<unsigned long long int> var_11, val<int> var_12, val<short> var_14, val<unsigned char> var_18, val<int> zero, val<unsigned int*> var_19, val<unsigned short*> var_20, val<unsigned short*> var_21, val<signed char*> var_22, val<unsigned long long int*> var_23) {
    *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<signed char>)120)) ? (((/* implicit */val<unsigned long long int>) (~((~(((/* implicit */val<int>) (val<bool>)1))))))) : (((((/* implicit */val<bool>) ((var_0) & (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)124)))))) ? (((18446744073709551600ULL) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))))) : (((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (10320245524724610794ULL)))))));
    *var_20 = ((/* implicit */val<unsigned short>) var_12);
    *var_21 += ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (val<signed char>)-19)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_18))))) : (((/* implicit */val<int>) (val<signed char>)125))));
    *var_22 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned long long int>) ((val<long long int>) max(((val<unsigned short>)65515), (((/* implicit */val<unsigned short>) var_2)))))), ((-(min((var_11), (((/* implicit */val<unsigned long long int>) 574208952489738240LL))))))));
    *var_23 = ((/* implicit */val<unsigned long long int>) (((~(((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) (val<short>)5049)) : (var_10))))) % (((/* implicit */val<int>) (val<short>)8128))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2477873096120745061ULL;
unsigned char var_2 = (unsigned char)243;
signed char var_7 = (signed char)47;
int var_10 = -1183152415;
unsigned long long int var_11 = 18190177464304021249ULL;
int var_12 = 2128514679;
short var_14 = (short)24564;
unsigned char var_18 = (unsigned char)152;
int zero = 0;
unsigned int var_19 = 2213812106U;
unsigned short var_20 = (unsigned short)9473;
unsigned short var_21 = (unsigned short)28247;
signed char var_22 = (signed char)89;
unsigned long long int var_23 = 962975067188150952ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1U;
    value_mismatch |= var_20 != (unsigned short)36471;
    value_mismatch |= var_21 != (unsigned short)28247;
    value_mismatch |= var_22 != (signed char)-21;
    value_mismatch |= var_23 != 18446744073709546566ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_7, var_10, var_11, var_12, var_14, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
