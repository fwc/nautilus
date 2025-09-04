/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2993
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2993
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
void test(val<short> var_3, val<long long int> var_5, val<unsigned char> var_6, val<unsigned int> var_9, val<unsigned long long int> var_12, val<int> zero, val<unsigned long long int*> var_14, val<unsigned char*> var_15) {
    *var_14 |= ((/* implicit */val<unsigned long long int>) var_5);
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (-(11704450434215939520ULL)))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 750305567)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_6))))) ? (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_3))))) : (var_9)))) : (((val<unsigned long long int>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) (val<unsigned char>)160)) : (-1073741824))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)14999;
long long int var_5 = 4876086921967554071LL;
unsigned char var_6 = (unsigned char)104;
unsigned int var_9 = 3834110086U;
unsigned long long int var_12 = 15410367182050551920ULL;
int zero = 0;
unsigned long long int var_14 = 4711206377338295310ULL;
unsigned char var_15 = (unsigned char)81;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 4894242080245538335ULL;
    value_mismatch |= var_15 != (unsigned char)105;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_6, var_9, var_12, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
