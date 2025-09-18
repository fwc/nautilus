/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3319
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3319
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
void test(val<unsigned short> var_0, val<signed char> var_3, val<short> var_4, val<unsigned long long int> var_5, val<unsigned int> var_7, val<long long int> var_9, val<int> zero, val<short*> var_10, val<unsigned short*> var_11, val<signed char*> var_12, val<signed char*> var_13) {
    *var_10 = ((/* implicit */val<short>) (val<signed char>)-1);
    *var_11 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<long long int>) (~(((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned char>)0)) && ((val<bool>)0))))))), (((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<bool>)1))))) - (var_9)))));
    *var_12 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))) != (var_7)))), (max((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_4))))), (var_5)))));
    *var_13 = ((/* implicit */val<signed char>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59637;
signed char var_3 = (signed char)55;
short var_4 = (short)-10255;
unsigned long long int var_5 = 7489085910481423674ULL;
unsigned int var_7 = 525948796U;
long long int var_9 = -5488929611220842198LL;
int zero = 0;
short var_10 = (short)-20140;
unsigned short var_11 = (unsigned short)37628;
signed char var_12 = (signed char)27;
signed char var_13 = (signed char)49;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-1;
    value_mismatch |= var_11 != (unsigned short)63245;
    value_mismatch |= var_12 != (signed char)1;
    value_mismatch |= var_13 != (signed char)-15;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_7, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
}
