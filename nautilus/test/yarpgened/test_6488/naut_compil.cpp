/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6488
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6488
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
void test(val<unsigned short> var_0, val<short> var_4, val<int> var_10, val<unsigned int> var_12, val<int> zero, val<long long int*> var_13, val<unsigned long long int*> var_14) {
    *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<signed char>) var_0))) ? (((/* implicit */val<unsigned int>) ((-139025300) / (((/* implicit */val<int>) (val<unsigned short>)27495))))) : (var_12)))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 10605486387353111621ULL)) ? (((/* implicit */val<int>) var_4)) : (var_10)))) : ((-((+(2418582771394960066ULL)))))));
    *var_14 = ((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<bool>) 16028161302314591549ULL)) ? (((/* implicit */val<int>) (val<unsigned short>)38040)) : (((((/* implicit */val<bool>) 12951916424733673523ULL)) ? (((/* implicit */val<int>) (val<signed char>)121)) : (2147483647))))), (((/* implicit */val<int>) (val<signed char>)-8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26339;
short var_4 = (short)28334;
int var_10 = -985360318;
unsigned int var_12 = 1475740963U;
int zero = 0;
long long int var_13 = 5701946035957640851LL;
unsigned long long int var_14 = 14897334699016638725ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 28334LL;
    value_mismatch |= var_14 != 38040ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_10, var_12, zero, &var_13, &var_14);
  checksum();
}
