/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9402
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9402
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
void test(val<short> var_5, val<unsigned int> var_7, val<int> zero, val<unsigned int*> var_10, val<unsigned short*> var_11) {
    *var_10 += var_7;
    *var_11 |= ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) (~(((val<long long int>) var_5))))) > (1862544686183621520ULL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-25126;
unsigned int var_7 = 3771076384U;
int zero = 0;
unsigned int var_10 = 1023251451U;
unsigned short var_11 = (unsigned short)64340;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 499360539U;
    value_mismatch |= var_11 != (unsigned short)64340;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
