/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9621
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9621
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
void test(val<unsigned long long int> var_12, val<int> zero, val<long long int*> var_14, val<short*> var_15, val<bool*> var_16, val<unsigned char*> var_17) {
    *var_14 = ((/* implicit */val<long long int>) (val<bool>)0);
    *var_15 = ((/* implicit */val<short>) max((*var_15), (((/* implicit */val<short>) (val<bool>)1))));
    *var_16 = ((/* implicit */val<bool>) max((*var_16), (((/* implicit */val<bool>) (~(((val<int>) (+(540748784)))))))));
    *var_17 = ((/* implicit */val<unsigned char>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 14745884163431404553ULL;
int zero = 0;
long long int var_14 = 6101678774933729429LL;
short var_15 = (short)-17418;
bool var_16 = (bool)0;
unsigned char var_17 = (unsigned char)129;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 0LL;
    value_mismatch |= var_15 != (short)1;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (unsigned char)9;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
