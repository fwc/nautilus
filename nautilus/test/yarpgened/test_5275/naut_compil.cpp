/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5275
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5275
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
void test(val<unsigned char> var_1, val<signed char> var_13, val<signed char> var_14, val<int> zero, val<short*> var_17, val<unsigned int*> var_18) {
    *var_17 &= ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_1)) ? (((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_1))))) ? ((+(525607163028269590LL))) : (((/* implicit */val<long long int>) ((val<int>) (val<unsigned short>)63564))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_14)))));
    *var_18 = ((/* implicit */val<unsigned int>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)192;
signed char var_13 = (signed char)-123;
signed char var_14 = (signed char)-89;
int zero = 0;
short var_17 = (short)24669;
unsigned int var_18 = 3695603399U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)24596;
    value_mismatch |= var_18 != 4294967173U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_13, var_14, zero, &var_17, &var_18);
  checksum();
}
