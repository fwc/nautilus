/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1354
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1354
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
void test(val<int> zero, val<int*> var_15, val<signed char*> var_16, val<unsigned int*> var_17) {
    *var_15 = (~(min((((/* implicit */val<int>) (val<short>)-1703)), (815778692))));
    *var_16 = ((/* implicit */val<signed char>) ((val<unsigned char>) (~(max((815778692), (((/* implicit */val<int>) (val<unsigned short>)53926)))))));
    *var_17 = ((/* implicit */val<unsigned int>) max((*var_17), (((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) -815778693)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
int var_15 = -651167396;
signed char var_16 = (signed char)-86;
unsigned int var_17 = 1192717777U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1702;
    value_mismatch |= var_16 != (signed char)123;
    value_mismatch |= var_17 != 1192717777U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
