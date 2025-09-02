/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 595
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=595
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
void test(val<short> var_4, val<int> zero, val<unsigned short*> var_15, val<short*> var_16) {
    *var_15 = ((/* implicit */val<unsigned short>) var_4);
    *var_16 = ((/* implicit */val<short>) (((val<bool>)1) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (9007199254740991LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-9827;
int zero = 0;
unsigned short var_15 = (unsigned short)33633;
short var_16 = (short)-1189;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)55709;
    value_mismatch |= var_16 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
