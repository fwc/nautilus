/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1997
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1997
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
void test(val<unsigned char> var_2, val<unsigned short> var_3, val<bool> var_4, val<unsigned char> var_5, val<int> zero, val<bool*> var_10, val<signed char*> var_11, val<signed char*> var_12, val<unsigned short*> var_13) {
    *var_10 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<unsigned short>) (val<short>)-10727))) ? (((/* implicit */val<int>) ((val<unsigned char>) (-(((/* implicit */val<int>) (val<unsigned short>)65535)))))) : ((-(((/* implicit */val<int>) (val<bool>)1))))));
    *var_11 = ((/* implicit */val<signed char>) (val<unsigned short>)26166);
    *var_12 ^= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (val<signed char>)-120)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))) : (((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<signed char>)-18)) * (((/* implicit */val<int>) var_5))))) ? (((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_2))))) : (max((((/* implicit */val<long long int>) var_3)), (5700890626111340236LL)))))));
    *var_13 = ((/* implicit */val<unsigned short>) min((*var_13), (((/* implicit */val<unsigned short>) max((max((((val<long long int>) var_2)), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_4)) >= (((/* implicit */val<int>) var_3))))))), (((/* implicit */val<long long int>) var_5)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)105;
unsigned short var_3 = (unsigned short)10831;
bool var_4 = (bool)1;
unsigned char var_5 = (unsigned char)243;
int zero = 0;
bool var_10 = (bool)1;
signed char var_11 = (signed char)9;
signed char var_12 = (signed char)14;
unsigned short var_13 = (unsigned short)24469;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != (signed char)54;
    value_mismatch |= var_12 != (signed char)15;
    value_mismatch |= var_13 != (unsigned short)243;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
