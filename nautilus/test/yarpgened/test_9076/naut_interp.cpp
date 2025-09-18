/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9076
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9076
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
void test(val<unsigned long long int> var_3, val<unsigned long long int> var_5, val<unsigned long long int> var_6, val<unsigned int> var_10, val<short> var_11, val<short> var_14, val<int> zero, val<long long int*> var_16, val<int*> var_17, val<unsigned char*> var_18) {
    *var_16 = ((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_14))) : (var_5))) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_3)) && (((/* implicit */val<bool>) var_11))))))));
    *var_17 = ((/* implicit */val<int>) (((+(((((/* implicit */val<unsigned int>) -1536922402)) - (var_10))))) & (var_10)));
    *var_18 = ((/* implicit */val<unsigned char>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14534829771462335389ULL;
unsigned long long int var_5 = 10276217613260867638ULL;
unsigned long long int var_6 = 18383676984784612655ULL;
unsigned int var_10 = 544476274U;
short var_11 = (short)-7749;
short var_14 = (short)-17207;
int zero = 0;
long long int var_16 = 719372127026881686LL;
int var_17 = -1766199382;
unsigned char var_18 = (unsigned char)86;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -17208LL;
    value_mismatch |= var_17 != 7340128;
    value_mismatch |= var_18 != (unsigned char)47;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_6, var_10, var_11, var_14, zero, &var_16, &var_17, &var_18);
  checksum();
}
