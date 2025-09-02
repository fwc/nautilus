/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5926
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5926
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
void test(val<short> var_4, val<int> zero, val<unsigned short*> var_20, val<bool*> var_21, val<unsigned long long int*> var_22) {
    *var_20 = ((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) var_4))));
    *var_21 = ((/* implicit */val<bool>) (+(3731030706748808890LL)));
    *var_22 &= ((/* implicit */val<unsigned long long int>) ((val<unsigned int>) (val<bool>)0));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)27665;
int zero = 0;
unsigned short var_20 = (unsigned short)37016;
bool var_21 = (bool)0;
unsigned long long int var_22 = 6354016957714290713ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)37870;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
