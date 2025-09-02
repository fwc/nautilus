/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9912
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9912
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
void test(val<unsigned long long int> var_6, val<unsigned short> var_8, val<int> zero, val<unsigned int*> var_12, val<unsigned short*> var_13) {
    *var_12 = ((/* implicit */val<unsigned int>) ((((3376311888292360183ULL) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((var_6) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-24364))))))))) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8)))));
    *var_13 = ((/* implicit */val<unsigned short>) 12601717041604688550ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 13497329155792845271ULL;
unsigned short var_8 = (unsigned short)17281;
int zero = 0;
unsigned int var_12 = 1256483010U;
unsigned short var_13 = (unsigned short)11407;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0U;
    value_mismatch |= var_13 != (unsigned short)31398;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
