/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7636
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7636
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
void test(val<short> var_0, val<unsigned int> var_2, val<int> var_6, val<short> var_9, val<unsigned int> var_13, val<int> zero, val<unsigned short*> var_15, val<signed char*> var_16, val<long long int*> var_17) {
    *var_15 = ((/* implicit */val<unsigned short>) ((-4077573933129725455LL) - (4077573933129725446LL)));
    *var_16 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) ^ (max((((/* implicit */val<unsigned int>) var_9)), (var_13)))))) ? (min((max((var_2), (((/* implicit */val<unsigned int>) var_0)))), (max((var_2), (var_2))))) : (((/* implicit */val<unsigned int>) var_6))));
    *var_17 = ((/* implicit */val<long long int>) (val<short>)-23328);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25798;
unsigned int var_2 = 4098296414U;
int var_6 = 236383312;
short var_9 = (short)-4198;
unsigned int var_13 = 138943402U;
int zero = 0;
unsigned short var_15 = (unsigned short)31192;
signed char var_16 = (signed char)73;
long long int var_17 = 8179668524851662101LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)5099;
    value_mismatch |= var_16 != (signed char)94;
    value_mismatch |= var_17 != -23328LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_9, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
