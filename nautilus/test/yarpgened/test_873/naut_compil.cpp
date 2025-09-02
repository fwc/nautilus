/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 873
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=873
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
void test(val<unsigned long long int> var_4, val<signed char> var_5, val<unsigned int> var_7, val<int> var_12, val<int> zero, val<unsigned long long int*> var_13, val<int*> var_14) {
    *var_13 = (+(((val<unsigned long long int>) (val<bool>)0)));
    *var_14 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<short>)2047)) ? (((/* implicit */val<unsigned int>) min(((-(((/* implicit */val<int>) (val<short>)2047)))), (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) (val<short>)0)) : (((/* implicit */val<int>) var_5))))))) : (((((/* implicit */val<bool>) ((val<unsigned short>) (val<bool>)1))) ? (min((((/* implicit */val<unsigned int>) var_12)), (2318270535U))) : (var_7)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1611908760567790641ULL;
signed char var_5 = (signed char)31;
unsigned int var_7 = 4288052494U;
int var_12 = 1421888799;
int zero = 0;
unsigned long long int var_13 = 13263544460159645084ULL;
int var_14 = -1050171526;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 0ULL;
    value_mismatch |= var_14 != -2047;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_7, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
