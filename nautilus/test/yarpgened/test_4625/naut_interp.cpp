/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4625
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4625
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
void test(val<signed char> var_3, val<unsigned long long int> var_4, val<unsigned short> var_8, val<signed char> var_9, val<short> var_11, val<int> zero, val<long long int*> var_12, val<signed char*> var_13, val<signed char*> var_14) {
    *var_12 -= ((/* implicit */val<long long int>) var_4);
    *var_13 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_9)) : (((val<int>) -1954145064))));
    *var_14 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) - (max((var_4), (((((/* implicit */val<bool>) var_8)) ? (var_4) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)56)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-101;
unsigned long long int var_4 = 4410145965259699994ULL;
unsigned short var_8 = (unsigned short)20039;
signed char var_9 = (signed char)77;
short var_11 = (short)14704;
int zero = 0;
long long int var_12 = 6226389212766304788LL;
signed char var_13 = (signed char)-70;
signed char var_14 = (signed char)88;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1816243247506604794LL;
    value_mismatch |= var_13 != (signed char)77;
    value_mismatch |= var_14 != (signed char)-127;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_8, var_9, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
}
