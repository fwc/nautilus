/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3554
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3554
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
void test(val<unsigned short> var_11, val<short> var_14, val<unsigned int> var_18, val<int> zero, val<bool*> var_20, val<unsigned char*> var_21, val<short*> var_22) {
    *var_20 = ((/* implicit */val<bool>) ((val<unsigned int>) var_11));
    *var_21 &= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (val<unsigned char>)3)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_14))) : ((~(max((var_18), (((/* implicit */val<unsigned int>) (val<signed char>)32))))))));
    *var_22 ^= ((/* implicit */val<short>) (val<signed char>)-33);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)11950;
short var_14 = (short)17547;
unsigned int var_18 = 591806426U;
int zero = 0;
bool var_20 = (bool)1;
unsigned char var_21 = (unsigned char)148;
short var_22 = (short)-4330;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (unsigned char)128;
    value_mismatch |= var_22 != (short)4297;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, var_14, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
