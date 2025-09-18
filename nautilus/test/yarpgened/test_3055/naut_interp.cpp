/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3055
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3055
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
void test(val<short> var_0, val<short> var_1, val<short> var_3, val<short> var_5, val<int> zero, val<signed char*> var_11, val<unsigned long long int*> var_12, val<unsigned int*> var_13, val<signed char*> var_14) {
    if (((/* implicit */val<bool>) -1676213932))
    {
        *var_11 = ((/* implicit */val<signed char>) min((*var_11), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_0)) ? (((val<long long int>) var_3)) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))))))));
        *var_12 = ((/* implicit */val<unsigned long long int>) var_1);
    }

    *var_13 = ((/* implicit */val<unsigned int>) (!((!(((/* implicit */val<bool>) var_0))))));
    *var_14 = ((/* implicit */val<signed char>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3726;
short var_1 = (short)18066;
short var_3 = (short)23067;
short var_5 = (short)-22853;
int zero = 0;
signed char var_11 = (signed char)107;
unsigned long long int var_12 = 393498037456688551ULL;
unsigned int var_13 = 3786691731U;
signed char var_14 = (signed char)-28;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)27;
    value_mismatch |= var_12 != 18066ULL;
    value_mismatch |= var_13 != 1U;
    value_mismatch |= var_14 != (signed char)-114;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
