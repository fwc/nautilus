/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9541
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9541
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
void test(val<signed char> var_2, val<unsigned int> var_3, val<unsigned int> var_6, val<long long int> var_7, val<signed char> var_8, val<unsigned int> var_13, val<unsigned int> var_16, val<signed char> var_18, val<int> zero, val<unsigned int*> var_20, val<int*> var_21, val<int*> var_22) {
    *var_20 = ((/* implicit */val<unsigned int>) min((*var_20), (min(((~(((((/* implicit */val<bool>) var_13)) ? (var_6) : (var_16))))), (((val<unsigned int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_18))) : (var_7))))))));
    *var_21 = ((((/* implicit */val<bool>) (-2147483647 - 1))) ? (-1512689621) : (((/* implicit */val<int>) (val<signed char>)123)));
    *var_22 = ((/* implicit */val<int>) max((((/* implicit */val<unsigned int>) var_8)), (var_3)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-86;
unsigned int var_3 = 952281578U;
unsigned int var_6 = 1307689505U;
long long int var_7 = -2439775820546951174LL;
signed char var_8 = (signed char)-111;
unsigned int var_13 = 4113131616U;
unsigned int var_16 = 283646044U;
signed char var_18 = (signed char)-50;
int zero = 0;
unsigned int var_20 = 2940749918U;
int var_21 = 713129280;
int var_22 = 602655514;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 2940749918U;
    value_mismatch |= var_21 != -1512689621;
    value_mismatch |= var_22 != -111;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_6, var_7, var_8, var_13, var_16, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
