/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3153
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3153
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
void test(val<unsigned long long int> var_8, val<unsigned short> var_14, val<int> zero, val<unsigned int*> var_18, val<short*> var_19) {
    *var_18 *= ((/* implicit */val<unsigned int>) min((((/* implicit */val<long long int>) var_14)), (((((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) 6117416016518398566LL)))))) | (min((8112509099958659048LL), (-8112509099958659054LL)))))));
    *var_19 = ((/* implicit */val<short>) max((*var_19), (((/* implicit */val<short>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 8884483133938419978ULL;
unsigned short var_14 = (unsigned short)9305;
int zero = 0;
unsigned int var_18 = 749297086U;
short var_19 = (short)(-32767 - 1);
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 3376703324U;
    value_mismatch |= var_19 != (short)18698;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_14, zero, &var_18, &var_19);
  checksum();
}
