/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4746
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4746
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
void test(val<long long int> var_15, val<int> var_16, val<int> zero, val<unsigned char*> var_20, val<unsigned char*> var_21) {
    *var_20 = ((/* implicit */val<unsigned char>) 5968824352241679646ULL);
    *var_21 -= ((val<unsigned char>) ((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) (val<unsigned short>)24170)), (var_15)))) || (((/* implicit */val<bool>) var_16))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_15 = 6267961890125480855LL;
int var_16 = -1682735083;
int zero = 0;
unsigned char var_20 = (unsigned char)149;
unsigned char var_21 = (unsigned char)29;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)30;
    value_mismatch |= var_21 != (unsigned char)28;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_15, var_16, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
