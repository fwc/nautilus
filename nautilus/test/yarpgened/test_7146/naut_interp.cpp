/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7146
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7146
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
void test(val<short> var_2, val<unsigned long long int> var_3, val<unsigned char> var_6, val<unsigned short> var_7, val<bool> var_9, val<signed char> var_10, val<bool> var_14, val<int> zero, val<signed char*> var_15, val<signed char*> var_16, val<signed char*> var_17, val<unsigned char*> var_18) {
    *var_15 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<unsigned short>)49076))))) ? ((~(((/* implicit */val<int>) min((var_2), (var_2)))))) : (((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_14)), (var_7))))));
    *var_16 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)16446)) ? (((/* implicit */val<int>) (val<unsigned short>)49075)) : (((/* implicit */val<int>) (val<signed char>)-57))))))) * (max((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))) + (18446744073709551615ULL))), (var_3)))));
    *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_14)) & (((((/* implicit */val<bool>) var_3)) ? ((~(((/* implicit */val<int>) var_2)))) : (((/* implicit */val<int>) var_6))))));
    *var_18 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<int>) max((var_10), (((/* implicit */val<signed char>) var_9))))) << (((/* implicit */val<int>) var_14)))) - (((/* implicit */val<int>) ((val<signed char>) (val<unsigned short>)49058)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)230;
unsigned long long int var_3 = 15313783659787086644ULL;
unsigned char var_6 = (unsigned char)11;
unsigned short var_7 = (unsigned short)19332;
bool var_9 = (bool)1;
signed char var_10 = (signed char)108;
bool var_14 = (bool)1;
int zero = 0;
signed char var_15 = (signed char)-97;
signed char var_16 = (signed char)72;
signed char var_17 = (signed char)-15;
unsigned char var_18 = (unsigned char)32;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)25;
    value_mismatch |= var_16 != (signed char)52;
    value_mismatch |= var_17 != (signed char)1;
    value_mismatch |= var_18 != (unsigned char)54;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_6, var_7, var_9, var_10, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
