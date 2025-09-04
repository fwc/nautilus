/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5690
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5690
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
void test(val<unsigned short> var_0, val<bool> var_3, val<unsigned char> var_4, val<short> var_5, val<unsigned long long int> var_6, val<short> var_7, val<unsigned long long int> var_8, val<int> var_9, val<unsigned int> var_10, val<unsigned int> var_11, val<unsigned long long int> var_12, val<unsigned char> var_13, val<unsigned int> var_15, val<short> var_17, val<int> zero, val<unsigned int*> var_19, val<short*> var_20, val<unsigned long long int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_0)), (((((/* implicit */val<bool>) var_9)) ? (var_10) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3)))))))) ? (max((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_4))))), (var_12))) : (((((((/* implicit */val<unsigned long long int>) var_9)) ^ (var_6))) * (((/* implicit */val<unsigned long long int>) var_15))))));
    *var_20 |= ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) : (min((((/* implicit */val<unsigned long long int>) var_0)), (var_8))))))));
    *var_21 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_13))))) ? (((/* implicit */val<int>) (val<unsigned short>)52760)) : ((+(((/* implicit */val<int>) var_17))))))) ? (var_8) : (((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<bool>) (val<unsigned short>)12783)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))) : (var_10))), ((-(var_11)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52942;
bool var_3 = (bool)1;
unsigned char var_4 = (unsigned char)112;
short var_5 = (short)30887;
unsigned long long int var_6 = 16527214105072987079ULL;
short var_7 = (short)-31484;
unsigned long long int var_8 = 369312635248166507ULL;
int var_9 = -53541212;
unsigned int var_10 = 2952630531U;
unsigned int var_11 = 958138131U;
unsigned long long int var_12 = 13472951211328040497ULL;
unsigned char var_13 = (unsigned char)177;
unsigned int var_15 = 2825682463U;
short var_17 = (short)10057;
int zero = 0;
unsigned int var_19 = 3390166967U;
short var_20 = (short)-15765;
unsigned long long int var_21 = 15792764605957929927ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1935699505U;
    value_mismatch |= var_20 != (short)-15765;
    value_mismatch |= var_21 != 369312635248166507ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_15, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
