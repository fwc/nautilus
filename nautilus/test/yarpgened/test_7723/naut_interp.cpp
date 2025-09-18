/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7723
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7723
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
void test(val<short> var_5, val<short> var_7, val<short> var_15, val<int> var_17, val<int> zero, val<signed char*> var_19, val<unsigned long long int*> var_20) {
    *var_19 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) (+(((/* implicit */val<int>) ((val<signed char>) (val<unsigned char>)15))))))));
    *var_20 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_17)) ? (((var_17) << (((((/* implicit */val<int>) var_7)) - (782))))) : (var_17)))) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_15))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-29289;
short var_7 = (short)783;
short var_15 = (short)28331;
int var_17 = 1212990073;
int zero = 0;
signed char var_19 = (signed char)-121;
unsigned long long int var_20 = 4679553901692122050ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)0;
    value_mismatch |= var_20 != 18446744073709522327ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, var_15, var_17, zero, &var_19, &var_20);
  checksum();
}
