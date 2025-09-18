/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7257
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7257
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
void test(val<unsigned short> var_2, val<int> zero, val<short*> var_15, val<unsigned long long int*> var_16, val<int*> var_17) {
    *var_15 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) (+(((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)29505))))))))));
    *var_16 = ((/* implicit */val<unsigned long long int>) var_2);
    *var_17 &= ((/* implicit */val<int>) max((((val<long long int>) ((val<signed char>) -4462134061503727339LL))), (((/* implicit */val<long long int>) ((val<signed char>) ((val<signed char>) (val<bool>)1))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18763;
int zero = 0;
short var_15 = (short)-5;
unsigned long long int var_16 = 7219470327413699375ULL;
int var_17 = 1424951193;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)1;
    value_mismatch |= var_16 != 18763ULL;
    value_mismatch |= var_17 != 17;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, zero, &var_15, &var_16, &var_17);
  checksum();
}
