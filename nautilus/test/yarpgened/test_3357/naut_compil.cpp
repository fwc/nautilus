/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3357
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3357
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
void test(val<short> var_5, val<short> var_8, val<long long int> var_13, val<short> var_15, val<unsigned int> var_18, val<int> zero, val<signed char*> var_19, val<short*> var_20, val<long long int*> var_21) {
    *var_19 = ((/* implicit */val<signed char>) max((*var_19), (((/* implicit */val<signed char>) var_13))));
    *var_20 &= ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<int>) (val<short>)-24836)) : ((((~(((/* implicit */val<int>) var_5)))) - (((/* implicit */val<int>) var_8))))));
    *var_21 -= ((/* implicit */val<long long int>) (-(var_18)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-20389;
short var_8 = (short)18224;
long long int var_13 = -1830723555048078033LL;
short var_15 = (short)21646;
unsigned int var_18 = 2289661013U;
int zero = 0;
signed char var_19 = (signed char)-98;
short var_20 = (short)-665;
long long int var_21 = 4238189121308610736LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)47;
    value_mismatch |= var_20 != (short)-25500;
    value_mismatch |= var_21 != 4238189119303304453LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, var_13, var_15, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
}
