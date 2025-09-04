/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5196
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5196
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
void test(val<int> var_1, val<unsigned char> var_2, val<long long int> var_3, val<short> var_4, val<long long int> var_5, val<int> var_6, val<unsigned short> var_8, val<int> zero, val<unsigned char*> var_11, val<unsigned char*> var_12, val<unsigned char*> var_13, val<int*> var_14) {
    *var_11 &= ((/* implicit */val<unsigned char>) ((min((((var_3) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))))), (((/* implicit */val<long long int>) var_8)))) != (max((((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<unsigned char>)255)) << (((/* implicit */val<int>) (val<signed char>)0))))), (((var_3) % (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2)))))))));
    *var_12 &= ((/* implicit */val<unsigned char>) (-(var_6)));
    *var_13 = ((/* implicit */val<unsigned char>) min((*var_13), (((/* implicit */val<unsigned char>) var_1))));
    *var_14 = ((/* implicit */val<int>) (+(((((var_5) >= (5119431889971362788LL))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_8)) >> (((((/* implicit */val<int>) var_4)) + (11962)))))) : (((val<long long int>) var_5))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1423725602;
unsigned char var_2 = (unsigned char)88;
long long int var_3 = 3562642050725382598LL;
short var_4 = (short)-11952;
long long int var_5 = -8801640369819297445LL;
int var_6 = 1077702514;
unsigned short var_8 = (unsigned short)46520;
int zero = 0;
unsigned char var_11 = (unsigned char)187;
unsigned char var_12 = (unsigned char)147;
unsigned char var_13 = (unsigned char)30;
int var_14 = -1084051663;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)1;
    value_mismatch |= var_12 != (unsigned char)130;
    value_mismatch |= var_13 != (unsigned char)30;
    value_mismatch |= var_14 != 2083445083;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_8, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
