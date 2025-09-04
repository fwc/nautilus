/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4813
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4813
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
void test(val<short> var_7, val<int> zero, val<unsigned short*> var_16, val<unsigned char*> var_17) {
    *var_16 = ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) var_7))));
    *var_17 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<long long int>) (val<bool>)1)), (-6787136745736817316LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)11801;
int zero = 0;
unsigned short var_16 = (unsigned short)20728;
unsigned char var_17 = (unsigned char)123;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)53735;
    value_mismatch |= var_17 != (unsigned char)92;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
