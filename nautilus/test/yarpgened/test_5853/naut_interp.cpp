/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5853
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5853
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
void test(val<bool> var_0, val<unsigned short> var_7, val<int> var_12, val<int> zero, val<unsigned short*> var_15, val<unsigned int*> var_16, val<unsigned char*> var_17) {
    *var_15 = ((/* implicit */val<unsigned short>) max((*var_15), (((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) var_7)))))));
    *var_16 = ((/* implicit */val<unsigned int>) var_0);
    *var_17 = ((/* implicit */val<unsigned char>) max(((~(2713664873127046306LL))), (((/* implicit */val<long long int>) var_12))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned short var_7 = (unsigned short)87;
int var_12 = -497623055;
int zero = 0;
unsigned short var_15 = (unsigned short)19968;
unsigned int var_16 = 3974884536U;
unsigned char var_17 = (unsigned char)140;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)19968;
    value_mismatch |= var_16 != 0U;
    value_mismatch |= var_17 != (unsigned char)241;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_12, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
