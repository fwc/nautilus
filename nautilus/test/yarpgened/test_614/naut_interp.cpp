/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 614
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=614
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
void test(val<long long int> var_1, val<long long int> var_2, val<signed char> var_12, val<long long int> var_13, val<int> zero, val<long long int*> var_16, val<long long int*> var_17, val<signed char*> var_18) {
    *var_16 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((val<signed char>) ((-5629799601658063615LL) >= (-9223372036854775807LL))))) / (((((/* implicit */val<int>) (val<signed char>)7)) * (((/* implicit */val<int>) (val<signed char>)11))))));
    *var_17 = var_2;
    *var_18 = ((/* implicit */val<signed char>) max((((/* implicit */val<int>) ((val<signed char>) var_1))), (max((((((/* implicit */val<int>) var_12)) >> (((1253248472647812779LL) - (1253248472647812766LL))))), (((/* implicit */val<int>) ((var_13) <= (1253248472647812789LL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2278702914128895810LL;
long long int var_2 = -2830363915658862425LL;
signed char var_12 = (signed char)114;
long long int var_13 = 385251156840000968LL;
int zero = 0;
long long int var_16 = -6129876251357255200LL;
long long int var_17 = -4757583436393049054LL;
signed char var_18 = (signed char)79;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0LL;
    value_mismatch |= var_17 != -2830363915658862425LL;
    value_mismatch |= var_18 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_12, var_13, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
