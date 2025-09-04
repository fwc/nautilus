/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1187
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1187
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
void test(val<unsigned int> var_0, val<unsigned long long int> var_4, val<unsigned short> var_10, val<int> zero, val<short*> var_16, val<short*> var_17) {
    *var_16 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (var_4) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)0)))))) ? (((/* implicit */val<int>) (val<signed char>)0)) : (((/* implicit */val<int>) var_10)))))));
    *var_17 = ((/* implicit */val<short>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3136324434U;
unsigned long long int var_4 = 11469558288045960274ULL;
unsigned short var_10 = (unsigned short)49254;
int zero = 0;
short var_16 = (short)5420;
short var_17 = (short)-12434;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)1;
    value_mismatch |= var_17 != (short)-5038;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_10, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
