/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4728
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4728
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
void test(val<long long int> var_0, val<unsigned int> var_3, val<bool> var_4, val<unsigned char> var_5, val<signed char> var_9, val<int> var_10, val<unsigned char> var_13, val<int> zero, val<short*> var_15, val<bool*> var_16, val<unsigned long long int*> var_17, val<unsigned int*> var_18) {
    *var_15 &= ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)20776)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) ((var_4) && (((/* implicit */val<bool>) -1377577909))))))))));
    *var_16 *= ((((/* implicit */val<int>) ((val<signed char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) + (var_0))))) == (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)20784)) ? (((/* implicit */val<unsigned int>) var_10)) : (var_3)))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_9)) && (((/* implicit */val<bool>) var_13))))) : (((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) == (((/* implicit */val<int>) var_9))))))));
    *var_17 = ((/* implicit */val<unsigned long long int>) var_9);
    *var_18 = var_3;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6990309164097312685LL;
unsigned int var_3 = 3778549464U;
bool var_4 = (bool)1;
unsigned char var_5 = (unsigned char)227;
signed char var_9 = (signed char)-98;
int var_10 = 616373148;
unsigned char var_13 = (unsigned char)185;
int zero = 0;
short var_15 = (short)-29774;
bool var_16 = (bool)0;
unsigned long long int var_17 = 15839204167548292658ULL;
unsigned int var_18 = 2102484753U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)0;
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != 18446744073709551518ULL;
    value_mismatch |= var_18 != 3778549464U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_9, var_10, var_13, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
