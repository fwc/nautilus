/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2121
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2121
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
void test(val<unsigned short> var_14, val<int> zero, val<unsigned long long int*> var_15, val<int*> var_16, val<unsigned long long int*> var_17) {
    *var_15 = ((/* implicit */val<unsigned long long int>) var_14);
    *var_16 = ((/* implicit */val<int>) min((((/* implicit */val<unsigned long long int>) (val<short>)32767)), (max((((/* implicit */val<unsigned long long int>) -9223372036854775802LL)), (((((/* implicit */val<bool>) 4345064888157103747ULL)) ? (4345064888157103747ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)32767)))))))));
    *var_17 -= ((((/* implicit */val<bool>) (val<short>)32755)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (4345064888157103769ULL));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_14 = (unsigned short)31249;
int zero = 0;
unsigned long long int var_15 = 6529378188250982664ULL;
int var_16 = 947852779;
unsigned long long int var_17 = 14943086096281955509ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 31249ULL;
    value_mismatch |= var_16 != 32767;
    value_mismatch |= var_17 != 14943086096281955508ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_14, zero, &var_15, &var_16, &var_17);
  checksum();
}
