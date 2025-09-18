/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5681
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5681
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
void test(val<signed char> var_1, val<unsigned short> var_8, val<signed char> var_9, val<int> zero, val<signed char*> var_10, val<signed char*> var_11) {
    *var_10 |= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_1)) ? (((((/* implicit */val<bool>) (val<signed char>)0)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)11)) ? (((/* implicit */val<int>) (val<unsigned short>)6)) : (((/* implicit */val<int>) var_9))))) : (2625129424435305237LL))) : (((/* implicit */val<long long int>) max(((((val<bool>)0) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) (val<bool>)0)))), (((/* implicit */val<int>) (val<bool>)0)))))));
    *var_11 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_8))))) >= (((/* implicit */val<int>) (val<signed char>)0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-98;
unsigned short var_8 = (unsigned short)9079;
signed char var_9 = (signed char)112;
int zero = 0;
signed char var_10 = (signed char)94;
signed char var_11 = (signed char)-66;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)95;
    value_mismatch |= var_11 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, var_9, zero, &var_10, &var_11);
  checksum();
}
