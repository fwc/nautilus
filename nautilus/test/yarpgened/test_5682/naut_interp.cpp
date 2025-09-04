/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5682
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5682
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
void test(val<long long int> var_1, val<bool> var_4, val<unsigned int> var_10, val<int> zero, val<unsigned short*> var_15, val<bool*> var_16, val<signed char*> var_17, val<bool*> var_18) {
    *var_15 = ((/* implicit */val<unsigned short>) (val<bool>)1);
    *var_16 = ((/* implicit */val<bool>) (+(((val<unsigned int>) var_1))));
    *var_17 -= ((/* implicit */val<signed char>) -2147483624);
    *var_18 = ((((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!((val<bool>)1))))) : (max((((/* implicit */val<unsigned int>) (val<signed char>)113)), (var_10))))) >= (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (+(524286LL)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_10))))) : ((-(((/* implicit */val<int>) var_4))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8217848282654728981LL;
bool var_4 = (bool)0;
unsigned int var_10 = 1061538776U;
int zero = 0;
unsigned short var_15 = (unsigned short)62859;
bool var_16 = (bool)0;
signed char var_17 = (signed char)93;
bool var_18 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)1;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (signed char)69;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_10, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
