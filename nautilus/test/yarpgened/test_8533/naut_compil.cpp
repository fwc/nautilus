/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8533
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8533
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
void test(val<short> var_2, val<signed char> var_5, val<unsigned short> var_6, val<unsigned int> var_7, val<int> var_8, val<unsigned long long int> var_9, val<unsigned int> var_10, val<unsigned int> var_13, val<int> zero, val<unsigned short*> var_14, val<unsigned int*> var_15, val<short*> var_16, val<unsigned short*> var_17) {
    *var_14 = ((/* implicit */val<unsigned short>) ((var_10) != (((((/* implicit */val<bool>) (~(27ULL)))) ? (((((/* implicit */val<bool>) 18446744073709551607ULL)) ? (var_13) : (var_13))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 0U)) ? (((/* implicit */val<int>) (val<short>)32767)) : (((/* implicit */val<int>) (val<unsigned char>)255)))))))));
    *var_15 = ((/* implicit */val<unsigned int>) ((((((val<unsigned long long int>) (val<unsigned short>)32768)) != (((/* implicit */val<unsigned long long int>) max((0U), (((/* implicit */val<unsigned int>) var_8))))))) ? (((val<long long int>) ((var_7) != (var_7)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9))))))));
    *var_16 = ((/* implicit */val<short>) var_6);
    *var_17 = ((/* implicit */val<unsigned short>) max((*var_17), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (+(var_7)))) ? (((/* implicit */val<int>) ((val<signed char>) ((val<unsigned short>) var_2)))) : (((((/* implicit */val<bool>) var_10)) ? (((((/* implicit */val<int>) (val<unsigned short>)1181)) / (((/* implicit */val<int>) var_5)))) : ((+(((/* implicit */val<int>) var_2)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20524;
signed char var_5 = (signed char)-60;
unsigned short var_6 = (unsigned short)23263;
unsigned int var_7 = 3452109353U;
int var_8 = 113097379;
unsigned long long int var_9 = 2205906444549408992ULL;
unsigned int var_10 = 4155804867U;
unsigned int var_13 = 2424482417U;
int zero = 0;
unsigned short var_14 = (unsigned short)34976;
unsigned int var_15 = 3919862479U;
short var_16 = (short)-21226;
unsigned short var_17 = (unsigned short)15349;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)1;
    value_mismatch |= var_15 != 0U;
    value_mismatch |= var_16 != (short)23263;
    value_mismatch |= var_17 != (unsigned short)15349;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_7, var_8, var_9, var_10, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
