/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8572
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8572
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
void test(val<short> var_3, val<unsigned long long int> var_5, val<unsigned long long int> var_6, val<short> var_8, val<unsigned char> var_9, val<int> zero, val<unsigned char*> var_10, val<signed char*> var_11, val<int*> var_12) {
    *var_10 = ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) ((var_6) <= (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)4094)) ? (((/* implicit */val<int>) (val<unsigned char>)192)) : (((/* implicit */val<int>) (val<unsigned char>)64))))))))));
    *var_11 = ((/* implicit */val<signed char>) ((((val<unsigned long long int>) var_9)) << (((((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_9))))) ? (var_5) : ((+(var_6))))) - (14448094154063126879ULL)))));
    *var_12 = (+(((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) ((((/* implicit */val<int>) var_3)) > (((/* implicit */val<int>) var_8))))) : (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) (val<signed char>)24)) : (-145400725))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-19653;
unsigned long long int var_5 = 14448094154063126912ULL;
unsigned long long int var_6 = 14227122467627922882ULL;
short var_8 = (short)-14518;
unsigned char var_9 = (unsigned char)211;
int zero = 0;
unsigned char var_10 = (unsigned char)92;
signed char var_11 = (signed char)-11;
int var_12 = 306617064;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)255;
    value_mismatch |= var_11 != (signed char)0;
    value_mismatch |= var_12 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_6, var_8, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
