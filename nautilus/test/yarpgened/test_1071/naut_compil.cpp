/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1071
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1071
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
void test(val<short> var_6, val<short> var_8, val<short> var_17, val<int> zero, val<long long int*> var_19, val<signed char*> var_20, val<unsigned long long int*> var_21) {
    *var_19 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((val<bool>) (val<unsigned char>)204))) << (((((((/* implicit */val<bool>) (+((-2147483647 - 1))))) ? (13313223833663614025ULL) : (((((/* implicit */val<bool>) var_8)) ? (8261381957654383781ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_17))))))) - (13313223833663614005ULL)))));
    *var_20 += ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) 17LL)) && (((/* implicit */val<bool>) (val<signed char>)10))));
    *var_21 = ((/* implicit */val<unsigned long long int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)4280;
short var_8 = (short)-4540;
short var_17 = (short)30817;
int zero = 0;
long long int var_19 = -2043102738755383626LL;
signed char var_20 = (signed char)69;
unsigned long long int var_21 = 13727918730735240253ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1048576LL;
    value_mismatch |= var_20 != (signed char)70;
    value_mismatch |= var_21 != 4280ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
