/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4976
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4976
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
void test(val<short> var_2, val<short> var_9, val<unsigned short> var_18, val<int> zero, val<long long int*> var_19, val<short*> var_20, val<int*> var_21, val<bool*> var_22) {
    *var_19 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_18))) : (4179525815U)));
    *var_20 = (val<short>)-18942;
    *var_21 = ((/* implicit */val<int>) var_2);
    *var_22 = ((/* implicit */val<bool>) (-2147483647 - 1));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28643;
short var_9 = (short)-12100;
unsigned short var_18 = (unsigned short)46379;
int zero = 0;
long long int var_19 = 6532990066427719774LL;
short var_20 = (short)-29226;
int var_21 = -1391938924;
bool var_22 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 46379LL;
    value_mismatch |= var_20 != (short)-18942;
    value_mismatch |= var_21 != 28643;
    value_mismatch |= var_22 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_9, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
