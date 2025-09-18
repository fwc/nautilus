/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8321
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8321
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
void test(val<signed char> var_0, val<int> var_6, val<int> zero, val<unsigned long long int*> var_15, val<short*> var_16, val<short*> var_17, val<unsigned long long int*> var_18) {
    *var_15 = ((/* implicit */val<unsigned long long int>) min((*var_15), (((/* implicit */val<unsigned long long int>) ((val<short>) var_0)))));
    *var_16 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) 3708929997585704928LL))));
    *var_17 = ((/* implicit */val<short>) var_6);
    *var_18 = ((/* implicit */val<unsigned long long int>) (~((~(((/* implicit */val<int>) (val<unsigned short>)0))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)26;
int var_6 = -1817290415;
int zero = 0;
unsigned long long int var_15 = 14347436169900007177ULL;
short var_16 = (short)778;
short var_17 = (short)-32005;
unsigned long long int var_18 = 5223128157220234361ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 26ULL;
    value_mismatch |= var_16 != (short)0;
    value_mismatch |= var_17 != (short)22865;
    value_mismatch |= var_18 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
