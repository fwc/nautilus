/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3557
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3557
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
void test(val<signed char> var_0, val<signed char> var_4, val<signed char> var_5, val<bool> var_13, val<signed char> var_14, val<signed char> var_15, val<signed char> var_16, val<bool> var_17, val<int> zero, val<signed char*> var_18, val<signed char*> var_19, val<signed char*> var_20) {
    *var_18 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<signed char>)(-127 - 1)))))) && (((/* implicit */val<bool>) min((var_4), ((val<signed char>)(-127 - 1)))))))) >= (((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<signed char>)(-127 - 1))) * (((/* implicit */val<int>) (val<signed char>)(-127 - 1)))))) ? (((/* implicit */val<int>) (val<signed char>)-20)) : (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_15)) : (((/* implicit */val<int>) (val<signed char>)-27))))))));
    *var_19 = ((/* implicit */val<signed char>) ((val<long long int>) (val<signed char>)63));
    *var_20 &= ((/* implicit */val<signed char>) ((((((((/* implicit */val<bool>) min((var_0), (((/* implicit */val<signed char>) var_13))))) ? (((((/* implicit */val<bool>) (val<signed char>)96)) ? (((/* implicit */val<int>) (val<signed char>)-27)) : (((/* implicit */val<int>) (val<signed char>)26)))) : (((/* implicit */val<int>) min(((val<signed char>)60), (var_14)))))) + (2147483647))) >> (((((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_0)) + (((/* implicit */val<int>) var_16))))) ? (((((/* implicit */val<bool>) (val<signed char>)44)) ? (((/* implicit */val<int>) var_15)) : (((/* implicit */val<int>) var_14)))) : (((/* implicit */val<int>) var_17)))) + (7)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-26;
signed char var_4 = (signed char)19;
signed char var_5 = (signed char)123;
bool var_13 = (bool)0;
signed char var_14 = (signed char)-64;
signed char var_15 = (signed char)-5;
signed char var_16 = (signed char)2;
bool var_17 = (bool)1;
int zero = 0;
signed char var_18 = (signed char)35;
signed char var_19 = (signed char)42;
signed char var_20 = (signed char)-122;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)1;
    value_mismatch |= var_19 != (signed char)63;
    value_mismatch |= var_20 != (signed char)(-127 - 1);
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_13, var_14, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
