/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4549
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4549
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
void test(val<signed char> var_0, val<unsigned char> var_1, val<bool> var_2, val<unsigned char> var_3, val<int> var_4, val<short> var_6, val<unsigned char> var_7, val<long long int> var_8, val<unsigned char> var_9, val<bool> var_10, val<int> zero, val<short*> var_12, val<signed char*> var_13, val<long long int*> var_14, val<bool*> var_15, val<unsigned char*> var_16) {
    *var_12 = ((/* implicit */val<short>) var_10);
    *var_13 -= ((/* implicit */val<signed char>) (val<bool>)1);
    *var_14 = ((/* implicit */val<long long int>) var_6);
    *var_15 = ((((/* implicit */val<bool>) ((val<int>) ((((/* implicit */val<int>) (val<bool>)1)) << (((/* implicit */val<int>) var_2)))))) || (((/* implicit */val<bool>) (val<unsigned short>)8011)));
    *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_3)) >> (((((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_7)) : (var_4))) - (125)))))) ? (((/* implicit */val<long long int>) ((max(((val<bool>)1), ((val<bool>)1))) ? (((/* implicit */val<int>) min(((val<bool>)1), (var_10)))) : (((/* implicit */val<int>) var_9))))) : (((((/* implicit */val<bool>) max((var_7), (var_1)))) ? (((var_8) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)8035))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
unsigned char var_1 = (unsigned char)206;
bool var_2 = (bool)0;
unsigned char var_3 = (unsigned char)55;
int var_4 = -562097545;
short var_6 = (short)-18725;
unsigned char var_7 = (unsigned char)134;
long long int var_8 = -991155224810877653LL;
unsigned char var_9 = (unsigned char)175;
bool var_10 = (bool)0;
int zero = 0;
short var_12 = (short)17702;
signed char var_13 = (signed char)95;
long long int var_14 = -8148613374702253693LL;
bool var_15 = (bool)0;
unsigned char var_16 = (unsigned char)119;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)0;
    value_mismatch |= var_13 != (signed char)94;
    value_mismatch |= var_14 != -18725LL;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (unsigned char)142;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_7, var_8, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
