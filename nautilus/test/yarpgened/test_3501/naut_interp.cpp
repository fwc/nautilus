/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3501
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3501
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
void test(val<signed char> var_2, val<unsigned int> var_3, val<unsigned short> var_7, val<long long int> var_9, val<short> var_10, val<int> zero, val<bool*> var_12, val<bool*> var_13, val<short*> var_14, val<short*> var_15) {
    *var_12 |= ((/* implicit */val<bool>) var_7);
    *var_13 = ((/* implicit */val<bool>) (+(((((/* implicit */val<bool>) var_2)) ? (var_9) : (((/* implicit */val<long long int>) var_3))))));
    *var_14 *= ((/* implicit */val<short>) (((-(((var_3) - (967639063U))))) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((var_10), (max((var_10), (var_10)))))))));
    *var_15 *= ((/* implicit */val<short>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)121;
unsigned int var_3 = 2266087950U;
unsigned short var_7 = (unsigned short)21597;
long long int var_9 = -9213601773378973805LL;
short var_10 = (short)-29987;
int zero = 0;
bool var_12 = (bool)0;
bool var_13 = (bool)1;
short var_14 = (short)19173;
short var_15 = (short)6344;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (short)-15047;
    value_mismatch |= var_15 != (short)-3368;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_7, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
