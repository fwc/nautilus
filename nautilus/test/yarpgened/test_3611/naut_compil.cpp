/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3611
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3611
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
void test(val<short> var_0, val<int> var_9, val<unsigned long long int> var_12, val<int> var_14, val<int> zero, val<int*> var_16, val<short*> var_17) {
    *var_16 = ((/* implicit */val<int>) max((*var_16), (((/* implicit */val<int>) var_0))));
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned long long int>) var_14)) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)0)) ? (((/* implicit */val<int>) (val<short>)0)) : (((/* implicit */val<int>) (val<short>)0))))) ? (min((((/* implicit */val<unsigned long long int>) (val<short>)-1)), (var_12))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max(((val<short>)30), ((val<short>)0)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20282;
int var_9 = -622447143;
unsigned long long int var_12 = 4836112511959558392ULL;
int var_14 = -539576957;
int zero = 0;
int var_16 = -1551232953;
short var_17 = (short)29436;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 20282;
    value_mismatch |= var_17 != (short)-19069;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_9, var_12, var_14, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
