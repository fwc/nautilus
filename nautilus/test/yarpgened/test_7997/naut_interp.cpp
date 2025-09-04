/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7997
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7997
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
void test(val<bool> var_8, val<int> var_9, val<bool> var_10, val<int> var_11, val<short> var_12, val<int> zero, val<int*> var_14, val<signed char*> var_15, val<unsigned int*> var_16) {
    *var_14 = ((/* implicit */val<int>) min((((/* implicit */val<short>) (val<unsigned char>)0)), ((val<short>)21127)));
    *var_15 = ((/* implicit */val<signed char>) min((*var_15), (((/* implicit */val<signed char>) var_12))));
    *var_16 += ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_9)) ? (max((((((/* implicit */val<int>) var_10)) >> (((((/* implicit */val<int>) var_12)) - (3326))))), ((+(var_11))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_8))))) || (((((/* implicit */val<bool>) 6447663910249258990LL)) || (((/* implicit */val<bool>) 6447663910249259011LL)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_8 = (bool)1;
int var_9 = -1319797117;
bool var_10 = (bool)0;
int var_11 = 1021474034;
short var_12 = (short)3354;
int zero = 0;
int var_14 = -1616797008;
signed char var_15 = (signed char)62;
unsigned int var_16 = 3864393643U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 0;
    value_mismatch |= var_15 != (signed char)26;
    value_mismatch |= var_16 != 590900381U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, var_10, var_11, var_12, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
