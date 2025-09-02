/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5927
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5927
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
void test(val<unsigned short> var_5, val<signed char> var_11, val<int> zero, val<unsigned short*> var_14, val<unsigned short*> var_15, val<bool*> var_16) {
    *var_14 = ((/* implicit */val<unsigned short>) 134215680U);
    *var_15 = ((/* implicit */val<unsigned short>) max((((val<unsigned long long int>) (((val<bool>)1) ? (((/* implicit */val<int>) (val<unsigned short>)65527)) : (((/* implicit */val<int>) var_11))))), (((/* implicit */val<unsigned long long int>) var_5))));
    *var_16 ^= ((val<bool>) (!(((/* implicit */val<bool>) (-(1035104919U))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)53607;
signed char var_11 = (signed char)-124;
int zero = 0;
unsigned short var_14 = (unsigned short)55385;
unsigned short var_15 = (unsigned short)22968;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)63488;
    value_mismatch |= var_15 != (unsigned short)65527;
    value_mismatch |= var_16 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
