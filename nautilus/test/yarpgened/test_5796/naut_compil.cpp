/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5796
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5796
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
void test(val<unsigned short> var_4, val<unsigned int> var_6, val<long long int> var_8, val<unsigned int> var_11, val<int> zero, val<bool*> var_14, val<short*> var_15, val<unsigned int*> var_16) {
    *var_14 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) 17338635906771944556ULL)))) ? ((~(16383U))) : (var_6)))) ? (min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) -1)) | (var_8)))), ((-(1108108166937607087ULL))))) : ((((((val<bool>)1) && (((/* implicit */val<bool>) var_11)))) ? (min((((/* implicit */val<unsigned long long int>) 2510484554U)), (1108108166937607067ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<signed char>) var_8))))))));
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<int>) var_4)) - (((2147483647) << (((3171233374U) - (3171233374U)))))));
    *var_16 = ((/* implicit */val<unsigned int>) ((val<bool>) 9308949645450591349ULL));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)17704;
unsigned int var_6 = 3901430767U;
long long int var_8 = 3033157713453914569LL;
unsigned int var_11 = 2270431173U;
int zero = 0;
bool var_14 = (bool)0;
short var_15 = (short)-24907;
unsigned int var_16 = 222875304U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (short)17705;
    value_mismatch |= var_16 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_8, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
