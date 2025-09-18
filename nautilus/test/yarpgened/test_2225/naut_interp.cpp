/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2225
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2225
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
void test(val<unsigned short> var_2, val<signed char> var_6, val<short> var_7, val<short> var_10, val<int> zero, val<unsigned int*> var_11, val<short*> var_12, val<short*> var_13, val<short*> var_14) {
    *var_11 ^= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) (val<signed char>)7))) || (((/* implicit */val<bool>) var_10))));
    *var_12 *= ((/* implicit */val<short>) (val<bool>)1);
    *var_13 = ((/* implicit */val<short>) min((*var_13), (((/* implicit */val<short>) var_6))));
    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<int>) var_2)) - ((-(((/* implicit */val<int>) ((((/* implicit */val<int>) var_7)) > (((/* implicit */val<int>) (val<signed char>)63)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)65067;
signed char var_6 = (signed char)30;
short var_7 = (short)22921;
short var_10 = (short)-18404;
int zero = 0;
unsigned int var_11 = 612401062U;
short var_12 = (short)17204;
short var_13 = (short)-1415;
short var_14 = (short)30115;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 612401063U;
    value_mismatch |= var_12 != (short)17204;
    value_mismatch |= var_13 != (short)-1415;
    value_mismatch |= var_14 != (short)-468;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_7, var_10, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
