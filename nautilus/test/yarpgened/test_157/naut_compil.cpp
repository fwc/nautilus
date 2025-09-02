/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 157
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=157
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
void test(val<short> var_1, val<unsigned short> var_2, val<bool> var_5, val<signed char> var_6, val<int> var_8, val<short> var_9, val<short> var_12, val<bool> var_14, val<int> zero, val<unsigned char*> var_15, val<long long int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) var_5))))) ? (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_2)))) : (max((((/* implicit */val<int>) var_12)), (var_8))))) - (((/* implicit */val<int>) var_1))));
    *var_16 = ((/* implicit */val<long long int>) max((*var_16), (((/* implicit */val<long long int>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8673;
unsigned short var_2 = (unsigned short)26515;
bool var_5 = (bool)0;
signed char var_6 = (signed char)124;
int var_8 = -927145927;
short var_9 = (short)-17549;
short var_12 = (short)-15281;
bool var_14 = (bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)211;
long long int var_16 = 1224204429956657885LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)110;
    value_mismatch |= var_16 != 1224204429956657885LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_6, var_8, var_9, var_12, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
