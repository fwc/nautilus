/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7934
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7934
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
void test(val<long long int> var_0, val<short> var_1, val<unsigned long long int> var_2, val<int> var_3, val<short> var_5, val<short> var_7, val<signed char> var_8, val<int> var_10, val<int> zero, val<long long int*> var_11, val<short*> var_12, val<int*> var_13) {
    *var_11 = ((/* implicit */val<long long int>) min((*var_11), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_8))))) ? (var_10) : (max((((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_7)))), (max((((/* implicit */val<int>) var_8)), (var_3))))))))));
    if (((/* implicit */val<bool>) var_3))
    {
        *var_12 = ((/* implicit */val<short>) (+((((!(((/* implicit */val<bool>) 18747522674827509ULL)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_2)))))) : (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)90))) : (var_0)))))));
        *var_13 = var_10;
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7950226033574427814LL;
short var_1 = (short)12772;
unsigned long long int var_2 = 1479148741604985018ULL;
int var_3 = 1342269105;
short var_5 = (short)-14581;
short var_7 = (short)27789;
signed char var_8 = (signed char)78;
int var_10 = -1804100838;
int zero = 0;
long long int var_11 = -307213211232451680LL;
short var_12 = (short)-1519;
int var_13 = -2023774151;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -307213211232451680LL;
    value_mismatch |= var_12 != (short)90;
    value_mismatch |= var_13 != -1804100838;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_7, var_8, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
