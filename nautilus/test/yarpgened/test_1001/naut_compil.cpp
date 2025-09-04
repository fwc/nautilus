/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1001
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1001
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
void test(val<signed char> var_4, val<unsigned char> var_6, val<unsigned short> var_14, val<unsigned long long int> var_15, val<long long int> var_16, val<int> zero, val<long long int*> var_20, val<long long int*> var_21) {
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 14925464906324486027ULL)) && (((/* implicit */val<bool>) var_6))));
    *var_21 = ((/* implicit */val<long long int>) ((((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) > (var_15))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) : ((~(3521279167385065587ULL))))) * (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((18446744073709551606ULL), (((/* implicit */val<unsigned long long int>) -1816259547393623592LL))))) ? (var_16) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) max(((val<unsigned short>)8723), (var_14))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-62;
unsigned char var_6 = (unsigned char)135;
unsigned short var_14 = (unsigned short)9862;
unsigned long long int var_15 = 276508699485641786ULL;
long long int var_16 = 8885546746683246913LL;
int zero = 0;
long long int var_20 = -5280453603201910683LL;
long long int var_21 = -4797213413474254155LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1LL;
    value_mismatch |= var_21 != 510446011117478215LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_14, var_15, var_16, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
