/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1517
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1517
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
void test(val<unsigned short> var_2, val<unsigned int> var_5, val<unsigned int> var_14, val<int> zero, val<signed char*> var_18, val<unsigned long long int*> var_19, val<long long int*> var_20) {
    *var_18 = ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned int>) var_2)), (((val<unsigned int>) var_14))));
    *var_19 *= ((/* implicit */val<unsigned long long int>) (val<short>)28980);
    *var_20 = ((/* implicit */val<long long int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22497;
unsigned int var_5 = 1986276154U;
unsigned int var_14 = 3790910801U;
int zero = 0;
signed char var_18 = (signed char)94;
unsigned long long int var_19 = 8039476881119044021ULL;
long long int var_20 = 863698129301592289LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)81;
    value_mismatch |= var_19 != 1662363878258818500ULL;
    value_mismatch |= var_20 != 1986276154LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_14, zero, &var_18, &var_19, &var_20);
  checksum();
}
