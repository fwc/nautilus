/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6058
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6058
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
void test(val<unsigned long long int> var_0, val<bool> var_6, val<unsigned int> var_7, val<int> zero, val<unsigned long long int*> var_14, val<int*> var_15, val<int*> var_16) {
    *var_14 = ((/* implicit */val<unsigned long long int>) ((val<int>) (-(((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) != (var_7)))))));
    *var_15 = (+(((/* implicit */val<int>) ((val<signed char>) var_0))));
    *var_16 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5789366084449958063ULL;
bool var_6 = (bool)1;
unsigned int var_7 = 3300921152U;
int zero = 0;
unsigned long long int var_14 = 11478994432880444033ULL;
int var_15 = -440780783;
int var_16 = -503266846;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 18446744073709551615ULL;
    value_mismatch |= var_15 != -81;
    value_mismatch |= var_16 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_7, zero, &var_14, &var_15, &var_16);
  checksum();
}
