/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7826
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7826
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
void test(val<bool> var_4, val<signed char> var_6, val<unsigned short> var_8, val<signed char> var_9, val<short> var_11, val<unsigned short> var_12, val<long long int> var_13, val<short> var_14, val<int> zero, val<short*> var_15, val<unsigned short*> var_16, val<short*> var_17, val<unsigned char*> var_18) {
    *var_15 ^= ((/* implicit */val<short>) min((((/* implicit */val<long long int>) ((val<unsigned short>) (-(-132872389))))), (max((((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_8)) / (((/* implicit */val<int>) var_12))))), (-8629675775585001040LL)))));
    *var_16 = ((/* implicit */val<unsigned short>) var_9);
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_11)) ? (max((((/* implicit */val<unsigned long long int>) (~(var_13)))), (((var_4) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)11669))) : (148598243166359603ULL))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6)))));
    *var_18 &= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_14)) || (((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<bool>)0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_4 = (bool)0;
signed char var_6 = (signed char)-125;
unsigned short var_8 = (unsigned short)37953;
signed char var_9 = (signed char)9;
short var_11 = (short)-13759;
unsigned short var_12 = (unsigned short)22579;
long long int var_13 = 3245868213154799201LL;
short var_14 = (short)-21354;
int zero = 0;
short var_15 = (short)-29609;
unsigned short var_16 = (unsigned short)28358;
short var_17 = (short)25807;
unsigned char var_18 = (unsigned char)3;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)-29610;
    value_mismatch |= var_16 != (unsigned short)9;
    value_mismatch |= var_17 != (short)8606;
    value_mismatch |= var_18 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_8, var_9, var_11, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
