/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8512
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8512
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
void test(val<unsigned int> var_0, val<unsigned char> var_2, val<signed char> var_3, val<int> var_4, val<int> var_7, val<int> var_10, val<short> var_13, val<int> zero, val<short*> var_19, val<short*> var_20) {
    *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (var_0) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_13)))))) ? (((((/* implicit */val<bool>) (-(var_7)))) ? ((+(((/* implicit */val<int>) var_13)))) : (((((/* implicit */val<bool>) var_2)) ? (-15) : (var_7))))) : (((/* implicit */val<int>) ((val<unsigned char>) var_3)))));
    *var_20 = ((/* implicit */val<short>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2928945957U;
unsigned char var_2 = (unsigned char)102;
signed char var_3 = (signed char)99;
int var_4 = -1248167656;
int var_7 = -885943332;
int var_10 = 639660668;
short var_13 = (short)10471;
int zero = 0;
short var_19 = (short)10156;
short var_20 = (short)-22605;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)10471;
    value_mismatch |= var_20 != (short)31000;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_7, var_10, var_13, zero, &var_19, &var_20);
  checksum();
}
