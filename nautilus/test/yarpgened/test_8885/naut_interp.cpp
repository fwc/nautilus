/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8885
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8885
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
void test(val<unsigned short> var_14, val<int> zero, val<unsigned short*> var_17, val<int*> var_18, val<unsigned short*> var_19) {
    *var_17 = ((/* implicit */val<unsigned short>) (-(((((/* implicit */val<bool>) (+(-1LL)))) ? (1LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<short>) (val<signed char>)-20))))))));
    *var_18 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<signed char>)58)) ? ((~(((((/* implicit */val<bool>) (val<signed char>)58)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-24815))) : (1LL))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)3)))));
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_14)) ? (0LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)16383)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_14 = (unsigned short)15691;
int zero = 0;
unsigned short var_17 = (unsigned short)1355;
int var_18 = -65193948;
unsigned short var_19 = (unsigned short)64579;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)65535;
    value_mismatch |= var_18 != 24814;
    value_mismatch |= var_19 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_14, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
