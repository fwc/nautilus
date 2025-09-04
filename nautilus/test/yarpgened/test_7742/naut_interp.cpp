/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7742
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7742
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
void test(val<signed char> var_2, val<short> var_5, val<unsigned int> var_8, val<short> var_9, val<unsigned int> var_10, val<short> var_13, val<unsigned char> var_14, val<unsigned char> var_15, val<short> var_16, val<int> zero, val<unsigned short*> var_17, val<unsigned int*> var_18, val<signed char*> var_19, val<unsigned char*> var_20) {
    *var_17 = ((/* implicit */val<unsigned short>) min((*var_17), (((/* implicit */val<unsigned short>) (+(((/* implicit */val<int>) var_5)))))));
    *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((var_10) >= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_13))))))))) != (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_15))) : (var_8)))));
    *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((val<int>) ((((/* implicit */val<bool>) (val<signed char>)53)) || (((/* implicit */val<bool>) 374354546)))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_16))) : (min((((val<unsigned int>) (val<short>)0)), (((/* implicit */val<unsigned int>) var_14))))));
    *var_20 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<signed char>)53))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)204))))) : (((((/* implicit */val<bool>) -1090389761)) ? (((/* implicit */val<int>) (val<short>)-8443)) : (((/* implicit */val<int>) var_9)))))) != ((-(((/* implicit */val<int>) (val<unsigned char>)204))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)18;
short var_5 = (short)-24906;
unsigned int var_8 = 2053224961U;
short var_9 = (short)-6702;
unsigned int var_10 = 1181068448U;
short var_13 = (short)-22830;
unsigned char var_14 = (unsigned char)73;
unsigned char var_15 = (unsigned char)175;
short var_16 = (short)-16011;
int zero = 0;
unsigned short var_17 = (unsigned short)56479;
unsigned int var_18 = 2255711590U;
signed char var_19 = (signed char)-27;
unsigned char var_20 = (unsigned char)80;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)40630;
    value_mismatch |= var_18 != 1U;
    value_mismatch |= var_19 != (signed char)117;
    value_mismatch |= var_20 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_8, var_9, var_10, var_13, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
