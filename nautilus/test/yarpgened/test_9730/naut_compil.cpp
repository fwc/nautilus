/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9730
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9730
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
void test(val<int> var_4, val<unsigned int> var_10, val<signed char> var_17, val<long long int> var_18, val<int> zero, val<unsigned long long int*> var_20, val<long long int*> var_21, val<unsigned int*> var_22) {
    *var_20 = ((/* implicit */val<unsigned long long int>) var_17);
    *var_21 = max((((/* implicit */val<long long int>) (val<short>)11034)), (((((((/* implicit */val<bool>) 1046382720)) ? (var_18) : (((/* implicit */val<long long int>) var_4)))) / (((/* implicit */val<long long int>) var_10)))));
    *var_22 += var_10;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -854389984;
unsigned int var_10 = 1066952621U;
signed char var_17 = (signed char)41;
long long int var_18 = -2384594077961963408LL;
int zero = 0;
unsigned long long int var_20 = 1714602285571271807ULL;
long long int var_21 = 5817466824266981793LL;
unsigned int var_22 = 4101276683U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 41ULL;
    value_mismatch |= var_21 != 11034LL;
    value_mismatch |= var_22 != 873262008U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_10, var_17, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
