/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1421
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1421
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
void test(val<long long int> var_9, val<int> zero, val<long long int*> var_13, val<short*> var_14) {
    *var_13 = (+((-(var_9))));
    *var_14 = ((/* implicit */val<short>) max(((val<unsigned char>)242), ((val<unsigned char>)52)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -4239011270100658270LL;
int zero = 0;
long long int var_13 = -7443538542170867736LL;
short var_14 = (short)4921;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 4239011270100658270LL;
    value_mismatch |= var_14 != (short)242;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
