/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6295
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6295
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
void test(val<unsigned int> var_3, val<short> var_4, val<unsigned char> var_7, val<short> var_8, val<short> var_12, val<unsigned char> var_13, val<unsigned int> var_14, val<int> zero, val<short*> var_15, val<short*> var_16) {
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) min((min((((/* implicit */val<unsigned int>) (val<unsigned char>)103)), (var_14))), (((/* implicit */val<unsigned int>) min((var_13), (var_7))))))) ? (((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_4)) ? (3694439109U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12))))) <= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_14))))))))) : ((-(((/* implicit */val<int>) var_8))))));
    *var_16 = ((/* implicit */val<short>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3084006034U;
short var_4 = (short)29241;
unsigned char var_7 = (unsigned char)83;
short var_8 = (short)29592;
short var_12 = (short)16413;
unsigned char var_13 = (unsigned char)149;
unsigned int var_14 = 2497624019U;
int zero = 0;
short var_15 = (short)6819;
short var_16 = (short)-15691;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)0;
    value_mismatch |= var_16 != (short)12946;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_7, var_8, var_12, var_13, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
