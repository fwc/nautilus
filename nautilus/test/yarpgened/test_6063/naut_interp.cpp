/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6063
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6063
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
void test(val<unsigned int> var_3, val<short> var_5, val<long long int> var_7, val<long long int> var_10, val<signed char> var_11, val<int> zero, val<short*> var_12, val<signed char*> var_13, val<unsigned int*> var_14) {
    *var_12 = ((/* implicit */val<short>) var_11);
    *var_13 = ((/* implicit */val<signed char>) (val<unsigned char>)14);
    *var_14 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_10)) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)65528)) ? (((/* implicit */val<int>) (val<unsigned char>)1)) : (((/* implicit */val<int>) var_5))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<short>)12997)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)13769))) : (var_3)))) : (var_7))) : (((/* implicit */val<long long int>) (+((-(((/* implicit */val<int>) (val<unsigned char>)14)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 205551105U;
short var_5 = (short)-24100;
long long int var_7 = 7205641238040219854LL;
long long int var_10 = 8420365532823856366LL;
signed char var_11 = (signed char)99;
int zero = 0;
short var_12 = (short)1471;
signed char var_13 = (signed char)-81;
unsigned int var_14 = 2098943008U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)99;
    value_mismatch |= var_13 != (signed char)14;
    value_mismatch |= var_14 != 13769U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_7, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
}
