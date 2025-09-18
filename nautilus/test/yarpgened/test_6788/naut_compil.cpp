/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6788
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6788
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
void test(val<unsigned long long int> var_0, val<bool> var_2, val<short> var_3, val<unsigned char> var_4, val<unsigned int> var_6, val<bool> var_7, val<signed char> var_13, val<unsigned int> var_15, val<int> var_16, val<int> zero, val<signed char*> var_20, val<int*> var_21, val<int*> var_22) {
    *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((val<int>) min((var_0), (((/* implicit */val<unsigned long long int>) var_15)))))) ? ((~(((/* implicit */val<int>) var_13)))) : (((/* implicit */val<int>) var_7))));
    *var_21 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (((((/* implicit */val<bool>) var_16)) ? (var_16) : (((/* implicit */val<int>) var_3)))) : ((-(((/* implicit */val<int>) var_3))))))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<signed char>) var_2))) ? (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_3))))) : (var_0))))));
    *var_22 = ((/* implicit */val<int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13346007286466944944ULL;
bool var_2 = (bool)0;
short var_3 = (short)-2184;
unsigned char var_4 = (unsigned char)92;
unsigned int var_6 = 3859431850U;
bool var_7 = (bool)0;
signed char var_13 = (signed char)1;
unsigned int var_15 = 42145056U;
int var_16 = -2026100045;
int zero = 0;
signed char var_20 = (signed char)9;
int var_21 = 722169708;
int var_22 = 1349260349;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)-2;
    value_mismatch |= var_21 != 1;
    value_mismatch |= var_22 != -435535446;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_6, var_7, var_13, var_15, var_16, zero, &var_20, &var_21, &var_22);
  checksum();
}
