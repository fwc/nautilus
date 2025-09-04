/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7634
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7634
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
void test(val<unsigned char> var_3, val<short> var_7, val<signed char> var_9, val<int> zero, val<long long int*> var_15, val<short*> var_16) {
    *var_15 = ((/* implicit */val<long long int>) ((val<short>) var_9));
    *var_16 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((5735749308446950667LL) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7)))))) ? (((((/* implicit */val<bool>) 4194304U)) ? (((/* implicit */val<int>) (val<short>)21686)) : (((/* implicit */val<int>) (val<short>)-21687)))) : ((+(((/* implicit */val<int>) (val<bool>)1))))))) ? (min(((-(((/* implicit */val<int>) (val<short>)-21686)))), (((/* implicit */val<int>) (val<short>)21686)))) : (((/* implicit */val<int>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)202;
short var_7 = (short)30447;
signed char var_9 = (signed char)100;
int zero = 0;
long long int var_15 = -7645202090706656644LL;
short var_16 = (short)-28440;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 100LL;
    value_mismatch |= var_16 != (short)21686;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_9, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
