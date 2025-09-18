/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1778
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1778
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
void test(val<unsigned char> var_2, val<long long int> var_5, val<short> var_7, val<unsigned int> var_10, val<long long int> var_11, val<int> zero, val<unsigned long long int*> var_14, val<unsigned char*> var_15, val<short*> var_16) {
    *var_14 = ((/* implicit */val<unsigned long long int>) ((val<unsigned char>) ((val<signed char>) ((val<int>) var_11))));
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((val<short>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)18969))) / (var_10))))) ? (min(((~(var_5))), (((/* implicit */val<long long int>) (val<unsigned short>)65535)))) : (var_5)));
    *var_16 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) ((val<signed char>) var_5))) : (((/* implicit */val<int>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)246;
long long int var_5 = 6333018773222616690LL;
short var_7 = (short)-31096;
unsigned int var_10 = 3783253841U;
long long int var_11 = 3414663342731734572LL;
int zero = 0;
unsigned long long int var_14 = 7570140245529314335ULL;
unsigned char var_15 = (unsigned char)110;
short var_16 = (short)-620;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 44ULL;
    value_mismatch |= var_15 != (unsigned char)114;
    value_mismatch |= var_16 != (short)114;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, var_10, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
}
