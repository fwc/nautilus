/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3847
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3847
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
void test(val<short> var_0, val<signed char> var_1, val<unsigned short> var_4, val<signed char> var_8, val<signed char> var_9, val<bool> var_11, val<bool> var_12, val<unsigned char> var_14, val<unsigned long long int> var_15, val<int> zero, val<unsigned int*> var_16, val<unsigned int*> var_17, val<signed char*> var_18) {
    *var_16 = ((/* implicit */val<unsigned int>) min((((((((/* implicit */val<int>) min((var_8), ((val<signed char>)31)))) + (2147483647))) << (((((((/* implicit */val<int>) var_9)) + (104))) - (12))))), (((((/* implicit */val<int>) var_1)) | (((((/* implicit */val<int>) var_4)) << (((((((/* implicit */val<int>) var_1)) + (81))) - (20)))))))));
    *var_17 = ((/* implicit */val<unsigned int>) ((var_11) ? (((/* implicit */val<long long int>) ((((((/* implicit */val<int>) var_8)) + (2147483647))) << (((((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<short>)-18384)), (var_4)))) - (47152)))))) : (((((-4041267637649486812LL) | (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))))) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12)))))));
    *var_18 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_14))) - (((var_15) / (((12260366135015012081ULL) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)31)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16636;
signed char var_1 = (signed char)-56;
unsigned short var_4 = (unsigned short)33544;
signed char var_8 = (signed char)-29;
signed char var_9 = (signed char)-91;
bool var_11 = (bool)0;
bool var_12 = (bool)0;
unsigned char var_14 = (unsigned char)20;
unsigned long long int var_15 = 15974166295169641220ULL;
int zero = 0;
unsigned int var_16 = 1436607381U;
unsigned int var_17 = 202649625U;
signed char var_18 = (signed char)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 4294967236U;
    value_mismatch |= var_17 != 4294967076U;
    value_mismatch |= var_18 != (signed char)19;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_8, var_9, var_11, var_12, var_14, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
