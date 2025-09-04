/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9584
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9584
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
void test(val<unsigned int> var_6, val<unsigned short> var_7, val<unsigned char> var_8, val<long long int> var_10, val<short> var_11, val<unsigned int> var_12, val<signed char> var_13, val<int> zero, val<unsigned short*> var_17, val<unsigned short*> var_18, val<long long int*> var_19, val<unsigned short*> var_20) {
    *var_17 = ((/* implicit */val<unsigned short>) ((val<signed char>) ((val<short>) min((var_10), (((/* implicit */val<long long int>) (val<short>)32767))))));
    *var_18 = ((/* implicit */val<unsigned short>) var_12);
    *var_19 = ((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) (+(((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (val<short>)(-32767 - 1)))))))), (min((var_6), (var_6)))));
    *var_20 = ((/* implicit */val<unsigned short>) ((val<int>) ((val<int>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11))) : (var_12)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 366994145U;
unsigned short var_7 = (unsigned short)44413;
unsigned char var_8 = (unsigned char)160;
long long int var_10 = -4386048960411926258LL;
short var_11 = (short)-7818;
unsigned int var_12 = 3681340271U;
signed char var_13 = (signed char)-118;
int zero = 0;
unsigned short var_17 = (unsigned short)29912;
unsigned short var_18 = (unsigned short)55002;
long long int var_19 = -5865806979861416445LL;
unsigned short var_20 = (unsigned short)63163;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)14;
    value_mismatch |= var_18 != (unsigned short)52079;
    value_mismatch |= var_19 != 44413LL;
    value_mismatch |= var_20 != (unsigned short)57718;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_8, var_10, var_11, var_12, var_13, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
