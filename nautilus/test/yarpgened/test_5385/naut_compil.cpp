/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5385
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5385
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
void test(val<unsigned long long int> var_0, val<short> var_1, val<long long int> var_2, val<int> var_3, val<unsigned long long int> var_5, val<unsigned int> var_6, val<bool> var_8, val<int> var_10, val<long long int> var_11, val<unsigned long long int> var_12, val<unsigned int> var_13, val<unsigned short> var_14, val<int> zero, val<signed char*> var_15, val<unsigned short*> var_16) {
    *var_15 = ((/* implicit */val<signed char>) max((*var_15), (((/* implicit */val<signed char>) ((((((/* implicit */val<bool>) max((var_3), (((/* implicit */val<int>) var_14))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<long long int>) -936855716)) : (var_2)))) : (max((((/* implicit */val<unsigned long long int>) var_11)), (var_5))))) == (((/* implicit */val<unsigned long long int>) var_10)))))));
    *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_0)) ? (min(((~(var_0))), (((/* implicit */val<unsigned long long int>) var_6)))) : (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))) == (-7030373341222502317LL))) ? (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned int>) var_3)) : (var_13))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_1)) : (var_10)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11513145985545759650ULL;
short var_1 = (short)-31862;
long long int var_2 = -526691762578350331LL;
int var_3 = -644752624;
unsigned long long int var_5 = 15484428916210345060ULL;
unsigned int var_6 = 4034792918U;
bool var_8 = (bool)0;
int var_10 = -1685966790;
long long int var_11 = -7606353828913776975LL;
unsigned long long int var_12 = 10922420879738871712ULL;
unsigned int var_13 = 2130139399U;
unsigned short var_14 = (unsigned short)42893;
int zero = 0;
signed char var_15 = (signed char)96;
unsigned short var_16 = (unsigned short)25388;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)96;
    value_mismatch |= var_16 != (unsigned short)3542;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_8, var_10, var_11, var_12, var_13, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
