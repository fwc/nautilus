/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5067
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5067
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
void test(val<unsigned long long int> var_1, val<long long int> var_2, val<unsigned long long int> var_6, val<unsigned long long int> var_11, val<signed char> var_16, val<int> zero, val<long long int*> var_18, val<unsigned long long int*> var_19) {
    *var_18 |= ((/* implicit */val<long long int>) var_1);
    *var_19 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_11)) ? (max((var_2), (min((var_2), (((/* implicit */val<long long int>) 2147483647)))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 15LL))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_2)) && (((/* implicit */val<bool>) var_16))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2262375291848067688ULL;
long long int var_2 = 4833330088039782624LL;
unsigned long long int var_6 = 7881226692613792084ULL;
unsigned long long int var_11 = 16824759318145930291ULL;
signed char var_16 = (signed char)7;
int zero = 0;
long long int var_18 = -8016286639974303001LL;
unsigned long long int var_19 = 16366901113670507639ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -6924847549241115921LL;
    value_mismatch |= var_19 != 4833330088039782624ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_6, var_11, var_16, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
