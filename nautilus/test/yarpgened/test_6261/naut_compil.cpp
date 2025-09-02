/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6261
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6261
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
void test(val<signed char> var_2, val<unsigned char> var_3, val<unsigned long long int> var_4, val<signed char> var_6, val<short> var_8, val<unsigned char> var_10, val<long long int> var_11, val<long long int> var_12, val<signed char> var_13, val<int> zero, val<unsigned short*> var_17, val<short*> var_18) {
    *var_17 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_2)) && (((/* implicit */val<bool>) var_4))))) : (((((/* implicit */val<bool>) (val<signed char>)127)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1))))));
    *var_18 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_2))))) ? (((((/* implicit */val<bool>) (val<short>)512)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_8)))) : (((((/* implicit */val<bool>) 16325999741003879521ULL)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_13))))))) : (((((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) var_11)) : (15086909636111132875ULL))) * (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_10)) << (((var_4) - (320783325686646285ULL))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-91;
unsigned char var_3 = (unsigned char)126;
unsigned long long int var_4 = 320783325686646297ULL;
signed char var_6 = (signed char)9;
short var_8 = (short)23921;
unsigned char var_10 = (unsigned char)41;
long long int var_11 = -4645724731455804151LL;
long long int var_12 = -8583755857181996676LL;
signed char var_13 = (signed char)-61;
int zero = 0;
unsigned short var_17 = (unsigned short)32447;
short var_18 = (short)31008;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)1;
    value_mismatch |= var_18 != (short)41;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_6, var_8, var_10, var_11, var_12, var_13, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
