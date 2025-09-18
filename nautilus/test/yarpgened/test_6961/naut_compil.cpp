/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6961
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6961
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
void test(val<bool> var_2, val<long long int> var_5, val<int> var_7, val<signed char> var_9, val<int> zero, val<unsigned int*> var_10, val<unsigned long long int*> var_11, val<bool*> var_12, val<unsigned short*> var_13) {
    *var_10 = ((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) ((-860737914707719785LL) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9)))))) ? ((~(((/* implicit */val<int>) var_9)))) : (min((((/* implicit */val<int>) (val<bool>)1)), (var_7))))) & (((/* implicit */val<int>) var_2))));
    *var_11 = ((/* implicit */val<unsigned long long int>) min((*var_11), (((/* implicit */val<unsigned long long int>) var_2))));
    *var_12 = ((/* implicit */val<bool>) (+(((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (val<unsigned short>)8))))) / ((+(10840992750078728298ULL)))))));
    *var_13 = ((/* implicit */val<unsigned short>) max((*var_13), (((/* implicit */val<unsigned short>) ((var_5) & (var_5))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)0;
long long int var_5 = -2595609722678902913LL;
int var_7 = -1439223213;
signed char var_9 = (signed char)-104;
int zero = 0;
unsigned int var_10 = 1319518019U;
unsigned long long int var_11 = 16317802310946814109ULL;
bool var_12 = (bool)0;
unsigned short var_13 = (unsigned short)48147;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 0U;
    value_mismatch |= var_11 != 0ULL;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (unsigned short)48147;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
}
