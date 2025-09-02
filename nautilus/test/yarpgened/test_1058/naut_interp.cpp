/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1058
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1058
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
void test(val<bool> var_1, val<unsigned short> var_2, val<unsigned short> var_8, val<bool> var_12, val<signed char> var_14, val<unsigned long long int> var_16, val<int> zero, val<long long int*> var_17, val<unsigned int*> var_18, val<long long int*> var_19) {
    *var_17 = (~(((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) (val<bool>)1))))) * (max((((/* implicit */val<long long int>) -1316561325)), (-814112095059104615LL))))));
    *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((min((((/* implicit */val<long long int>) var_8)), (-6516461830423021629LL))) + (((((/* implicit */val<long long int>) 1794961908U)) + (-1026787562794271297LL)))))) ? (1316561325) : (((((/* implicit */val<int>) ((var_12) && (((/* implicit */val<bool>) var_14))))) >> (((/* implicit */val<int>) var_1))))));
    *var_19 |= ((/* implicit */val<long long int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned short var_2 = (unsigned short)56792;
unsigned short var_8 = (unsigned short)3755;
bool var_12 = (bool)0;
signed char var_14 = (signed char)29;
unsigned long long int var_16 = 14643152907241973356ULL;
int zero = 0;
long long int var_17 = 7102483982639406912LL;
unsigned int var_18 = 667532180U;
long long int var_19 = 4190254542626177582LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 74770150769399LL;
    value_mismatch |= var_18 != 1316561325U;
    value_mismatch |= var_19 != 4190254542626180783LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_8, var_12, var_14, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
