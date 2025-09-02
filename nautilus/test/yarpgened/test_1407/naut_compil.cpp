/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1407
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1407
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
void test(val<int> var_0, val<long long int> var_1, val<signed char> var_7, val<bool> var_10, val<unsigned long long int> var_13, val<int> zero, val<int*> var_15, val<int*> var_16, val<short*> var_17, val<unsigned int*> var_18) {
    *var_15 = ((/* implicit */val<int>) max((((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) (val<signed char>)0)), (var_0)))), (0ULL)));
    *var_16 = ((/* implicit */val<int>) ((max((min((((/* implicit */val<long long int>) var_10)), (var_1))), (((/* implicit */val<long long int>) ((val<signed char>) 8473148958056474593ULL))))) <= (((/* implicit */val<long long int>) (-(((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) var_0)) != (var_13)))))))));
    *var_17 = ((/* implicit */val<short>) ((18446744073709551615ULL) <= (((/* implicit */val<unsigned long long int>) 4222417140U))));
    *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7)))))))) ? (min((16318020585902327329ULL), (((/* implicit */val<unsigned long long int>) ((val<short>) 1203366716))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) var_0))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1091068395;
long long int var_1 = -4547232739699858849LL;
signed char var_7 = (signed char)27;
bool var_10 = (bool)0;
unsigned long long int var_13 = 2465913316993728153ULL;
int zero = 0;
int var_15 = -1790711389;
int var_16 = -1534799561;
short var_17 = (short)-29285;
unsigned int var_18 = 1053230894U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != -1091068395;
    value_mismatch |= var_16 != 1;
    value_mismatch |= var_17 != (short)0;
    value_mismatch |= var_18 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_7, var_10, var_13, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
