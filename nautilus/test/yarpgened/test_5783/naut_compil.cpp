/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5783
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5783
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
void test(val<unsigned short> var_0, val<unsigned char> var_2, val<bool> var_4, val<unsigned long long int> var_5, val<unsigned int> var_6, val<short> var_7, val<unsigned long long int> var_8, val<int> zero, val<unsigned char*> var_11, val<short*> var_12, val<int*> var_13, val<unsigned short*> var_14, val<long long int*> var_15) {
    *var_11 = ((/* implicit */val<unsigned char>) var_7);
    *var_12 = ((/* implicit */val<short>) var_0);
    *var_13 = ((/* implicit */val<int>) min(((-(var_6))), (((/* implicit */val<unsigned int>) ((val<int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)32260))) : (var_5)))))));
    *var_14 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) var_4)) << (((/* implicit */val<int>) var_4))));
    *var_15 = ((/* implicit */val<long long int>) min((((((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_4)), ((val<unsigned short>)4094)))) & (((val<int>) var_0)))), (((/* implicit */val<int>) ((min((((/* implicit */val<unsigned long long int>) (val<unsigned short>)65535)), (var_5))) < (var_8))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2111;
unsigned char var_2 = (unsigned char)136;
bool var_4 = (bool)0;
unsigned long long int var_5 = 17294683030801255421ULL;
unsigned int var_6 = 2901139824U;
short var_7 = (short)-3548;
unsigned long long int var_8 = 16656425505805930970ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)146;
short var_12 = (short)18369;
int var_13 = -851845745;
unsigned short var_14 = (unsigned short)34947;
long long int var_15 = -7250505979165773697LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)36;
    value_mismatch |= var_12 != (short)2111;
    value_mismatch |= var_13 != 32260;
    value_mismatch |= var_14 != (unsigned short)0;
    value_mismatch |= var_15 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_6, var_7, var_8, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
