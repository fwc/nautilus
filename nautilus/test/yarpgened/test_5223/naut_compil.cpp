/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5223
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5223
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
void test(val<unsigned char> var_1, val<short> var_5, val<unsigned int> var_7, val<bool> var_11, val<int> zero, val<bool*> var_12, val<signed char*> var_13, val<bool*> var_14, val<bool*> var_15) {
    *var_12 = ((/* implicit */val<bool>) (val<unsigned short>)63488);
    *var_13 = ((/* implicit */val<signed char>) (+(max(((-(((/* implicit */val<int>) (val<signed char>)111)))), (((/* implicit */val<int>) var_5))))));
    *var_14 |= ((/* implicit */val<bool>) (((-(max((((/* implicit */val<long long int>) var_1)), (1152920405095219200LL))))) - (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_11)))))));
    *var_15 = ((/* implicit */val<bool>) min((*var_15), (((/* implicit */val<bool>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)124;
short var_5 = (short)17728;
unsigned int var_7 = 4100519926U;
bool var_11 = (bool)1;
int zero = 0;
bool var_12 = (bool)1;
signed char var_13 = (signed char)-75;
bool var_14 = (bool)0;
bool var_15 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (signed char)64;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_7, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
