/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2382
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2382
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
void test(val<short> var_0, val<signed char> var_5, val<unsigned int> var_6, val<unsigned long long int> var_8, val<unsigned char> var_9, val<signed char> var_10, val<long long int> var_12, val<bool> var_13, val<int> var_14, val<int> zero, val<short*> var_17, val<unsigned long long int*> var_18, val<unsigned char*> var_19, val<short*> var_20, val<unsigned int*> var_21) {
    *var_17 += ((/* implicit */val<short>) min((((/* implicit */val<unsigned char>) (val<signed char>)-29)), (var_9)));
    *var_18 = ((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<bool>) (~(4236598415U)))) ? (max((((/* implicit */val<unsigned int>) (val<unsigned char>)248)), (var_6))) : (((/* implicit */val<unsigned int>) ((val<int>) var_13))))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (~(5523766216915095369ULL)))) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<signed char>)127)))))));
    *var_19 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) min((var_12), (((/* implicit */val<long long int>) (val<bool>)1))))) ? (((((/* implicit */val<bool>) var_10)) ? (var_8) : (var_8))) : (((/* implicit */val<unsigned long long int>) var_14)))) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned char>) var_8))))));
    *var_20 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) var_13))));
    *var_21 -= ((/* implicit */val<unsigned int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29828;
signed char var_5 = (signed char)-23;
unsigned int var_6 = 11599640U;
unsigned long long int var_8 = 9007448587546474092ULL;
unsigned char var_9 = (unsigned char)30;
signed char var_10 = (signed char)-81;
long long int var_12 = -6830320142760770005LL;
bool var_13 = (bool)1;
int var_14 = 1557328077;
int zero = 0;
short var_17 = (short)-24126;
unsigned long long int var_18 = 14793203343513667010ULL;
unsigned char var_19 = (unsigned char)99;
short var_20 = (short)17814;
unsigned int var_21 = 519028735U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)-24096;
    value_mismatch |= var_18 != 29828ULL;
    value_mismatch |= var_19 != (unsigned char)1;
    value_mismatch |= var_20 != (short)-2;
    value_mismatch |= var_21 != 519028758U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_6, var_8, var_9, var_10, var_12, var_13, var_14, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
