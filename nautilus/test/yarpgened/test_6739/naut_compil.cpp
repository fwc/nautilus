/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6739
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6739
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
void test(val<signed char> var_2, val<bool> var_4, val<unsigned short> var_5, val<unsigned char> var_6, val<unsigned int> var_9, val<unsigned int> var_10, val<bool> var_11, val<unsigned int> var_12, val<int> zero, val<int*> var_13, val<int*> var_14, val<long long int*> var_15) {
    *var_13 = ((/* implicit */val<int>) max((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (var_10) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5)))))) ? (((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) : (var_12))) : (((var_11) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) : (var_9))))), (min((((/* implicit */val<unsigned int>) (val<short>)32760)), (3U)))));
    *var_14 = ((/* implicit */val<int>) var_2);
    *var_15 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_5)) + (((/* implicit */val<int>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-26;
bool var_4 = (bool)0;
unsigned short var_5 = (unsigned short)42131;
unsigned char var_6 = (unsigned char)66;
unsigned int var_9 = 565286897U;
unsigned int var_10 = 447391366U;
bool var_11 = (bool)1;
unsigned int var_12 = 919234343U;
int zero = 0;
int var_13 = 1628639088;
int var_14 = -1715135610;
long long int var_15 = 4752799658121379440LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 66;
    value_mismatch |= var_14 != -26;
    value_mismatch |= var_15 != 42131LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_9, var_10, var_11, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
