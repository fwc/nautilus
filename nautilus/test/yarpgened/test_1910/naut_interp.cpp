/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1910
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1910
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
void test(val<unsigned long long int> var_1, val<signed char> var_2, val<int> var_7, val<short> var_8, val<signed char> var_9, val<int> zero, val<int*> var_10, val<int*> var_11) {
    *var_10 = ((/* implicit */val<int>) var_1);
    *var_11 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((1023300326U) != (((/* implicit */val<unsigned int>) var_7)))) ? ((+(((/* implicit */val<int>) var_9)))) : (((/* implicit */val<int>) var_8))))) ? (((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) (val<bool>)1)), (1574343874U)))) : (((((/* implicit */val<bool>) 0U)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 4294967292U)) ? (((/* implicit */val<int>) (val<unsigned short>)6956)) : (((/* implicit */val<int>) var_2))))) : ((~(-5984040151446054835LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13126526621736974975ULL;
signed char var_2 = (signed char)-77;
int var_7 = 1815412091;
short var_8 = (short)-14380;
signed char var_9 = (signed char)49;
int zero = 0;
int var_10 = -1900584126;
int var_11 = -644312620;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1196898943;
    value_mismatch |= var_11 != 1574343874;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, var_8, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
