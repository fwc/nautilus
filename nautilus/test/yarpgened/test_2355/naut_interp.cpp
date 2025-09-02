/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2355
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2355
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
void test(val<unsigned int> var_0, val<unsigned short> var_1, val<int> var_4, val<int> var_8, val<unsigned short> var_9, val<signed char> var_11, val<short> var_12, val<unsigned char> var_16, val<int> zero, val<short*> var_18, val<int*> var_19, val<bool*> var_20, val<int*> var_21) {
    *var_18 = ((/* implicit */val<short>) var_11);
    *var_19 = ((val<int>) ((((/* implicit */val<int>) (val<unsigned short>)21905)) <= (((/* implicit */val<int>) (val<short>)27))));
    *var_20 = ((/* implicit */val<bool>) min((*var_20), (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)47725)) ? (((/* implicit */val<int>) (val<unsigned char>)225)) : (((/* implicit */val<int>) (val<unsigned short>)2445)))))));
    *var_21 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_12))))) ? (((((/* implicit */val<bool>) 6713657327565003204ULL)) ? (max((var_0), (((/* implicit */val<unsigned int>) var_4)))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_1)) ^ (((/* implicit */val<int>) var_16))))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned short>) ((((/* implicit */val<int>) var_9)) >> (((var_8) + (656846851))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 886493288U;
unsigned short var_1 = (unsigned short)7915;
int var_4 = 798568827;
int var_8 = -656846837;
unsigned short var_9 = (unsigned short)59124;
signed char var_11 = (signed char)-50;
short var_12 = (short)19268;
unsigned char var_16 = (unsigned char)33;
int zero = 0;
short var_18 = (short)8630;
int var_19 = -357086928;
bool var_20 = (bool)0;
int var_21 = -1706646518;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)-50;
    value_mismatch |= var_19 != 0;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != 886493288;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_8, var_9, var_11, var_12, var_16, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
