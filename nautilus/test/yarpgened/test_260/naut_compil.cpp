/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 260
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=260
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
void test(val<long long int> var_0, val<unsigned char> var_3, val<short> var_5, val<short> var_8, val<long long int> var_9, val<unsigned short> var_11, val<int> zero, val<unsigned short*> var_13, val<unsigned long long int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned short>) ((1841786415) | (((/* implicit */val<int>) (val<unsigned short>)34540))));
    *var_14 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (((!(((/* implicit */val<bool>) var_8)))) && (((/* implicit */val<bool>) ((val<unsigned char>) var_11))))))) / (min((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))) - (var_9))), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_3)) << (((var_0) - (4491550448091849190LL))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4491550448091849193LL;
unsigned char var_3 = (unsigned char)232;
short var_5 = (short)26135;
short var_8 = (short)6062;
long long int var_9 = -5504675942448097037LL;
unsigned short var_11 = (unsigned short)51651;
int zero = 0;
unsigned short var_13 = (unsigned short)27985;
unsigned long long int var_14 = 11470360384766808526ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)61167;
    value_mismatch |= var_14 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_8, var_9, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
