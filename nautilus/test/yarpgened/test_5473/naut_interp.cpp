/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5473
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5473
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
void test(val<unsigned int> var_0, val<long long int> var_7, val<unsigned short> var_10, val<bool> var_11, val<int> zero, val<unsigned short*> var_13, val<long long int*> var_14, val<unsigned int*> var_15, val<unsigned short*> var_16) {
    *var_13 = ((/* implicit */val<unsigned short>) var_0);
    *var_14 = ((((-1LL) > (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)(-32767 - 1)))))) ? (((val<long long int>) (-9223372036854775807LL - 1LL))) : (var_7));
    *var_15 = ((/* implicit */val<unsigned int>) var_10);
    *var_16 = ((/* implicit */val<unsigned short>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2152629283U;
long long int var_7 = 788452627795545207LL;
unsigned short var_10 = (unsigned short)26235;
bool var_11 = (bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)59656;
long long int var_14 = 2232942826193969900LL;
unsigned int var_15 = 3047458438U;
unsigned short var_16 = (unsigned short)48887;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)33827;
    value_mismatch |= var_14 != (-9223372036854775807LL - 1LL);
    value_mismatch |= var_15 != 26235U;
    value_mismatch |= var_16 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_10, var_11, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
