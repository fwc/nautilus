/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3016
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3016
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
void test(val<unsigned long long int> var_5, val<int> var_8, val<signed char> var_9, val<long long int> var_10, val<int> zero, val<unsigned int*> var_13, val<long long int*> var_14, val<unsigned long long int*> var_15) {
    *var_13 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_9)) > (((/* implicit */val<int>) (((!(((/* implicit */val<bool>) (val<signed char>)-6)))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (var_10) : (-2694240405189642863LL)))))))));
    *var_14 = ((/* implicit */val<long long int>) min((max((18446744073709551615ULL), (((/* implicit */val<unsigned long long int>) 1708439799U)))), (((/* implicit */val<unsigned long long int>) (+((-(var_8))))))));
    *var_15 = ((/* implicit */val<unsigned long long int>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9908318893179830585ULL;
int var_8 = -1194161708;
signed char var_9 = (signed char)36;
long long int var_10 = 9075207195218799843LL;
int zero = 0;
unsigned int var_13 = 504106382U;
long long int var_14 = -5668557856043115356LL;
unsigned long long int var_15 = 11955441558166702357ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1U;
    value_mismatch |= var_14 != 1194161708LL;
    value_mismatch |= var_15 != 36ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, var_9, var_10, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
