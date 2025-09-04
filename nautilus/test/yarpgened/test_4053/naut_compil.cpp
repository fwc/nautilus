/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4053
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4053
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
void test(val<short> var_0, val<signed char> var_1, val<signed char> var_2, val<signed char> var_5, val<unsigned short> var_8, val<unsigned int> var_10, val<int> zero, val<unsigned char*> var_12, val<short*> var_13, val<unsigned char*> var_14) {
    *var_12 = ((/* implicit */val<unsigned char>) (~(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) (val<signed char>)-82))))) ? (((((/* implicit */val<bool>) var_10)) ? (1022659308U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)65535))))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) (val<short>)-20027)) : (((/* implicit */val<int>) var_0)))))))));
    *var_13 = ((/* implicit */val<short>) var_8);
    *var_14 = ((/* implicit */val<unsigned char>) min((*var_14), (((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) max(((val<unsigned char>)187), (((/* implicit */val<unsigned char>) var_2))))) ? ((~(((/* implicit */val<int>) var_5)))) : (((/* implicit */val<int>) var_5)))) < ((+((+(((/* implicit */val<int>) (val<unsigned short>)65515)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4349;
signed char var_1 = (signed char)25;
signed char var_2 = (signed char)-102;
signed char var_5 = (signed char)122;
unsigned short var_8 = (unsigned short)59362;
unsigned int var_10 = 2449854500U;
int zero = 0;
unsigned char var_12 = (unsigned char)35;
short var_13 = (short)18740;
unsigned char var_14 = (unsigned char)125;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)19;
    value_mismatch |= var_13 != (short)-6174;
    value_mismatch |= var_14 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, var_8, var_10, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
