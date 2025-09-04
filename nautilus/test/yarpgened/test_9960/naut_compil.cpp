/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9960
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9960
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
void test(val<long long int> var_3, val<unsigned long long int> var_5, val<unsigned short> var_7, val<unsigned long long int> var_11, val<int> zero, val<unsigned int*> var_15, val<unsigned long long int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (~(var_5)))) ? ((~(var_11))) : (((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<bool>) -1038304549596139595LL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))) : (var_3))), (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))) : (var_3))))))));
    *var_16 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)123))) == (-1LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8941772044981647382LL;
unsigned long long int var_5 = 1251718515827560110ULL;
unsigned short var_7 = (unsigned short)26312;
unsigned long long int var_11 = 5289846259835883985ULL;
int zero = 0;
unsigned int var_15 = 4040320722U;
unsigned long long int var_16 = 12968596951845492307ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 2114825774U;
    value_mismatch |= var_16 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_7, var_11, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
