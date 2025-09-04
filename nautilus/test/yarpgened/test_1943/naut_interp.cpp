/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1943
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1943
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
void test(val<short> var_0, val<short> var_4, val<unsigned int> var_8, val<short> var_10, val<int> zero, val<long long int*> var_19, val<int*> var_20, val<bool*> var_21) {
    *var_19 = ((/* implicit */val<long long int>) (val<bool>)1);
    *var_20 = ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) ((val<short>) 9223372036854775807LL))) : (((/* implicit */val<int>) ((((((/* implicit */val<unsigned int>) 2147483647)) - (var_8))) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10)))))));
    *var_21 = ((/* implicit */val<bool>) min((*var_21), (((/* implicit */val<bool>) (+(((/* implicit */val<int>) min((var_10), (min((var_0), ((val<short>)16384)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25022;
short var_4 = (short)-14245;
unsigned int var_8 = 3210959352U;
short var_10 = (short)29832;
int zero = 0;
long long int var_19 = 1250721348734259093LL;
int var_20 = -437978696;
bool var_21 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1LL;
    value_mismatch |= var_20 != -1;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_8, var_10, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
