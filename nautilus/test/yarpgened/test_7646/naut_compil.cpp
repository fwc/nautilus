/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7646
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7646
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
void test(val<int> zero, val<signed char*> var_13, val<long long int*> var_14) {
    *var_13 = ((/* implicit */val<signed char>) 4294967295U);
    *var_14 = ((/* implicit */val<long long int>) max(((-(((/* implicit */val<int>) (val<unsigned short>)19716)))), (((/* implicit */val<int>) max(((val<unsigned short>)45820), (((/* implicit */val<unsigned short>) (val<short>)30720)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
signed char var_13 = (signed char)-76;
long long int var_14 = -7192666566973267450LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)-1;
    value_mismatch |= var_14 != 45820LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
