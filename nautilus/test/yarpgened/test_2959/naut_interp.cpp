/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2959
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2959
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
void test(val<unsigned long long int> var_1, val<short> var_14, val<int> zero, val<unsigned short*> var_18, val<unsigned short*> var_19, val<short*> var_20) {
    *var_18 ^= ((/* implicit */val<unsigned short>) var_14);
    *var_19 -= (val<unsigned short>)24396;
    *var_20 = ((/* implicit */val<short>) (-(var_1)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14890922322407427620ULL;
short var_14 = (short)24678;
int zero = 0;
unsigned short var_18 = (unsigned short)11664;
unsigned short var_19 = (unsigned short)24761;
short var_20 = (short)-20828;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)19958;
    value_mismatch |= var_19 != (unsigned short)365;
    value_mismatch |= var_20 != (short)29148;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_14, zero, &var_18, &var_19, &var_20);
  checksum();
}
