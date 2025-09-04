/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5178
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5178
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
void test(val<short> var_0, val<short> var_1, val<unsigned int> var_4, val<unsigned int> var_9, val<unsigned char> var_10, val<int> zero, val<short*> var_17, val<signed char*> var_18, val<signed char*> var_19) {
    *var_17 = ((/* implicit */val<short>) ((var_4) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-1)))));
    *var_18 *= ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) ((val<unsigned short>) var_0)))));
    *var_19 = ((/* implicit */val<signed char>) ((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))) <= (max((var_9), (((/* implicit */val<unsigned int>) var_0)))))) ? ((+(((((/* implicit */val<bool>) (val<signed char>)-1)) ? (-174408463) : (((/* implicit */val<int>) var_10)))))) : (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_10)) : (max((-174408463), (((/* implicit */val<int>) (val<signed char>)(-127 - 1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10150;
short var_1 = (short)14841;
unsigned int var_4 = 1039846073U;
unsigned int var_9 = 998005173U;
unsigned char var_10 = (unsigned char)37;
int zero = 0;
short var_17 = (short)-9350;
signed char var_18 = (signed char)-102;
signed char var_19 = (signed char)-112;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)0;
    value_mismatch |= var_18 != (signed char)0;
    value_mismatch |= var_19 != (signed char)-15;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_9, var_10, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
