/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2169
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2169
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
void test(val<unsigned int> var_0, val<bool> var_1, val<unsigned short> var_4, val<long long int> var_5, val<bool> var_11, val<int> zero, val<long long int*> var_12, val<bool*> var_13, val<bool*> var_14, val<short*> var_15) {
    *var_12 = ((/* implicit */val<long long int>) var_0);
    *var_13 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (((val<bool>)1) ? (((var_1) ? (var_0) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11)))))) ? (max((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_5)) ? (245859692) : (((/* implicit */val<int>) (val<short>)26690))))), (((20U) * (3681217851U))))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 8957138155247442361ULL)) ? (((/* implicit */val<int>) (val<signed char>)127)) : (((/* implicit */val<int>) (val<signed char>)127)))))));
    *var_14 = ((/* implicit */val<bool>) (val<signed char>)119);
    *var_15 = ((/* implicit */val<short>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2895353893U;
bool var_1 = (bool)1;
unsigned short var_4 = (unsigned short)24338;
long long int var_5 = 1385012250824342189LL;
bool var_11 = (bool)0;
int zero = 0;
long long int var_12 = 6608879664200668471LL;
bool var_13 = (bool)0;
bool var_14 = (bool)1;
short var_15 = (short)-21182;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 2895353893LL;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (short)-26587;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
