/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2750
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2750
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_2, val<unsigned short> var_5, val<unsigned int> var_6, val<short> var_7, val<bool> var_8, val<bool> var_10, val<short> var_11, val<short> var_12, val<long long int> var_13, val<unsigned char> var_14, val<short> var_15, val<short> var_16, val<long long int> var_17, val<int> zero, val<unsigned int*> var_18, val<unsigned int*> var_19, val<unsigned int*> var_20, val<unsigned char*> var_21) {
    *var_18 = (+(var_6));
    if (((/* implicit */val<bool>) var_11))
    {
        *var_19 = ((/* implicit */val<unsigned int>) ((((((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) (val<unsigned short>)65527)))) < (((((/* implicit */val<int>) (val<unsigned short>)31)) >> (((((/* implicit */val<int>) (val<unsigned char>)180)) - (171))))))) ? (((((var_10) && (((/* implicit */val<bool>) var_15)))) ? (((/* implicit */val<int>) min(((val<bool>)1), ((val<bool>)0)))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_0))))))) : (((/* implicit */val<int>) var_12))));
        *var_20 = ((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_0))));
        *var_21 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((var_6), (((/* implicit */val<unsigned int>) var_7))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) : (((((/* implicit */val<bool>) var_11)) ? (var_2) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5)))))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<bool>)1))))) ? (((((/* implicit */val<int>) var_7)) - (((/* implicit */val<int>) var_8)))) : (((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<int>) var_16)) : (((/* implicit */val<int>) var_5))))))) : (((((/* implicit */val<bool>) (val<unsigned short>)61080)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11))) | (663130796U)))) : (5973106803208540015ULL)))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
unsigned long long int var_2 = 14851190549438546048ULL;
unsigned short var_5 = (unsigned short)20132;
unsigned int var_6 = 1218009244U;
short var_7 = (short)23534;
bool var_8 = (bool)1;
bool var_10 = (bool)1;
short var_11 = (short)-25180;
short var_12 = (short)17658;
long long int var_13 = -6611925686708235699LL;
unsigned char var_14 = (unsigned char)86;
short var_15 = (short)9790;
short var_16 = (short)-3054;
long long int var_17 = -6104932293550271252LL;
int zero = 0;
unsigned int var_18 = 2178289043U;
unsigned int var_19 = 229648651U;
unsigned int var_20 = 795703459U;
unsigned char var_21 = (unsigned char)145;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1218009244U;
    value_mismatch |= var_19 != 17658U;
    value_mismatch |= var_20 != 66U;
    value_mismatch |= var_21 != (unsigned char)237;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_6, var_7, var_8, var_10, var_11, var_12, var_13, var_14, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
