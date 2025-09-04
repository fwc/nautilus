/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3810
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3810
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
void test(val<signed char> var_0, val<unsigned short> var_2, val<unsigned int> var_3, val<int> var_4, val<unsigned short> var_5, val<int> var_6, val<unsigned short> var_7, val<int> var_8, val<unsigned short> var_9, val<int> zero, val<short*> var_12, val<long long int*> var_13) {
    *var_12 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (var_4) : (((/* implicit */val<int>) var_7))))) ? (max((max((((/* implicit */val<int>) var_7)), (var_8))), (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_5)))))) : (max((((((/* implicit */val<bool>) var_5)) ? (var_6) : (((/* implicit */val<int>) var_0)))), (max((var_4), (((/* implicit */val<int>) var_0))))))));
    *var_13 = ((/* implicit */val<long long int>) ((val<short>) var_3));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
unsigned short var_2 = (unsigned short)41296;
unsigned int var_3 = 2366790604U;
int var_4 = 1877215201;
unsigned short var_5 = (unsigned short)42474;
int var_6 = 1283715824;
unsigned short var_7 = (unsigned short)52971;
int var_8 = -1379261050;
unsigned short var_9 = (unsigned short)49708;
int zero = 0;
short var_12 = (short)-27434;
long long int var_13 = -1463445274145497348LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)-12565;
    value_mismatch |= var_13 != 23500LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
