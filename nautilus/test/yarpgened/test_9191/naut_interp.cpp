/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9191
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9191
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
void test(val<short> var_5, val<short> var_6, val<int> zero, val<signed char*> var_11, val<bool*> var_12, val<long long int*> var_13, val<int*> var_14) {
    if (((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_6)))))
    {
        *var_11 = ((/* implicit */val<signed char>) (!((val<bool>)0)));
        *var_12 = (!((!(((/* implicit */val<bool>) max((((/* implicit */val<long long int>) var_5)), (-8378089750198212300LL)))))));
        *var_13 = ((-8378089750198212302LL) - (-8378089750198212300LL));
    }

    *var_14 = ((/* implicit */val<int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-23778;
short var_6 = (short)9858;
int zero = 0;
signed char var_11 = (signed char)-116;
bool var_12 = (bool)0;
long long int var_13 = -7554400482031286648LL;
int var_14 = -1166725077;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)1;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != -2LL;
    value_mismatch |= var_14 != -23778;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
