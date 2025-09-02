/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1318
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1318
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
void test(val<unsigned long long int> var_0, val<signed char> var_2, val<unsigned long long int> var_4, val<signed char> var_5, val<bool> var_8, val<unsigned long long int> var_9, val<int> zero, val<bool*> var_10, val<long long int*> var_11, val<bool*> var_12) {
    *var_10 = var_8;
    *var_11 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_5)) ? (var_9) : (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (val<short>)14210))))) : (min((var_0), (((/* implicit */val<unsigned long long int>) -1))))))));
    *var_12 += ((/* implicit */val<bool>) min((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) (val<unsigned short>)65535))))) ? ((-(var_4))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))))), (((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_8))))) ? (max((((/* implicit */val<unsigned long long int>) (val<bool>)0)), (var_0))) : (min((((/* implicit */val<unsigned long long int>) var_2)), (var_0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4146013548473898841ULL;
signed char var_2 = (signed char)-17;
unsigned long long int var_4 = 12166532060635884629ULL;
signed char var_5 = (signed char)63;
bool var_8 = (bool)0;
unsigned long long int var_9 = 15791319429636914009ULL;
int zero = 0;
bool var_10 = (bool)1;
long long int var_11 = 8843434142840119194LL;
bool var_12 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)0;
    value_mismatch |= var_11 != -2655424644072637607LL;
    value_mismatch |= var_12 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_8, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
