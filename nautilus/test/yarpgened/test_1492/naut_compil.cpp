/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1492
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1492
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
void test(val<unsigned long long int> var_0, val<short> var_3, val<bool> var_6, val<unsigned int> var_16, val<int> zero, val<bool*> var_17, val<long long int*> var_18) {
    *var_17 = ((var_0) == (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))));
    *var_18 = ((/* implicit */val<long long int>) ((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((-8235811406362621126LL) > (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)44881))))))) + (((var_16) << (((/* implicit */val<int>) var_6)))))) == (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<short>)17865))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11301883747746829772ULL;
short var_3 = (short)11908;
bool var_6 = (bool)0;
unsigned int var_16 = 3071596646U;
int zero = 0;
bool var_17 = (bool)1;
long long int var_18 = 5064331084389351415LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_16, zero, &var_17, &var_18);
  checksum();
}
