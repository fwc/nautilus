/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 546
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=546
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
void test(val<long long int> var_1, val<short> var_3, val<bool> var_18, val<int> zero, val<signed char*> var_19, val<unsigned long long int*> var_20) {
    *var_19 = ((/* implicit */val<signed char>) ((val<short>) ((((val<bool>) var_18)) ? (((((/* implicit */val<bool>) var_3)) ? (18446744073709551615ULL) : (((/* implicit */val<unsigned long long int>) var_1)))) : (((/* implicit */val<unsigned long long int>) max((7242728780052757505LL), (((/* implicit */val<long long int>) 675523775))))))));
    *var_20 = ((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (val<signed char>)-6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4872859708807593431LL;
short var_3 = (short)27510;
bool var_18 = (bool)1;
int zero = 0;
signed char var_19 = (signed char)-22;
unsigned long long int var_20 = 9761043778668366502ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)-1;
    value_mismatch |= var_20 != 18446744073709551610ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
