/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6229
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6229
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
void test(val<unsigned long long int> var_0, val<unsigned char> var_4, val<long long int> var_8, val<int> zero, val<short*> var_13, val<unsigned int*> var_14, val<long long int*> var_15, val<int*> var_16) {
    *var_13 += ((/* implicit */val<short>) (-9223372036854775807LL - 1LL));
    *var_14 = ((/* implicit */val<unsigned int>) min((*var_14), (((/* implicit */val<unsigned int>) var_4))));
    *var_15 = var_8;
    *var_16 = (+(((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((val<unsigned int>) var_0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12517769540080233038ULL;
unsigned char var_4 = (unsigned char)37;
long long int var_8 = 6867323008570894011LL;
int zero = 0;
short var_13 = (short)502;
unsigned int var_14 = 4150652377U;
long long int var_15 = 9001184777693603078LL;
int var_16 = -894781154;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)502;
    value_mismatch |= var_14 != 37U;
    value_mismatch |= var_15 != 6867323008570894011LL;
    value_mismatch |= var_16 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_8, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
