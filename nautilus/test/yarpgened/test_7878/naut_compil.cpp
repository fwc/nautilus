/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7878
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7878
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
void test(val<short> var_1, val<short> var_2, val<int> zero, val<long long int*> var_15, val<signed char*> var_16, val<unsigned int*> var_17) {
    if (((/* implicit */val<bool>) max((((/* implicit */val<long long int>) var_2)), ((+(((((/* implicit */val<bool>) var_2)) ? (-9136125909976484834LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)39))))))))))
    {
        *var_15 = ((/* implicit */val<long long int>) max((*var_15), (((/* implicit */val<long long int>) 2575672497U))));
        *var_16 = ((/* implicit */val<signed char>) 591777777U);
    }

    *var_17 = ((/* implicit */val<unsigned int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25528;
short var_2 = (short)23565;
int zero = 0;
long long int var_15 = 6766296520605831794LL;
signed char var_16 = (signed char)-96;
unsigned int var_17 = 517446200U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 6766296520605831794LL;
    value_mismatch |= var_16 != (signed char)-15;
    value_mismatch |= var_17 != 4294941768U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
