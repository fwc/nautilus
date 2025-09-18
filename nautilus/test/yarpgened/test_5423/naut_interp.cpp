/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5423
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5423
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
void test(val<short> var_1, val<int> var_2, val<unsigned long long int> var_3, val<int> var_4, val<short> var_6, val<short> var_7, val<signed char> var_8, val<int> zero, val<long long int*> var_10, val<signed char*> var_11, val<long long int*> var_12) {
    *var_10 = ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_7))))) ? (((((/* implicit */val<int>) var_7)) / (var_4))) : ((~(((/* implicit */val<int>) var_6))))))), (((((68489815337202761ULL) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)25976))))) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8)))))));
    *var_11 = ((/* implicit */val<signed char>) var_3);
    *var_12 = ((/* implicit */val<long long int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30298;
int var_2 = -1288459456;
unsigned long long int var_3 = 7463564653540111728ULL;
int var_4 = 2061191004;
short var_6 = (short)-12496;
short var_7 = (short)29179;
signed char var_8 = (signed char)-8;
int zero = 0;
long long int var_10 = 2142360529461372389LL;
signed char var_11 = (signed char)-20;
long long int var_12 = 6655141723649972830LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -7LL;
    value_mismatch |= var_11 != (signed char)112;
    value_mismatch |= var_12 != -8LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_6, var_7, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
}
