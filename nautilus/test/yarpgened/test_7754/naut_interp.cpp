/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7754
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7754
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
void test(val<bool> var_0, val<unsigned int> var_1, val<unsigned int> var_4, val<signed char> var_6, val<long long int> var_9, val<short> var_10, val<unsigned long long int> var_11, val<long long int> var_15, val<long long int> var_18, val<int> zero, val<signed char*> var_20, val<signed char*> var_21, val<short*> var_22, val<short*> var_23) {
    *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) : (((((/* implicit */val<bool>) var_18)) ? (12645389306902461142ULL) : (((/* implicit */val<unsigned long long int>) var_1))))))) || (((/* implicit */val<bool>) (val<unsigned short>)40876))));
    *var_21 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((val<signed char>) (~(var_15))))) ? (((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_0))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))) : (min((var_11), (((/* implicit */val<unsigned long long int>) var_4)))))) : (((/* implicit */val<unsigned long long int>) var_18))));
    *var_22 = ((/* implicit */val<short>) ((var_4) != (var_4)));
    *var_23 = ((/* implicit */val<short>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned int var_1 = 964597446U;
unsigned int var_4 = 112206532U;
signed char var_6 = (signed char)-112;
long long int var_9 = 2131849761160245254LL;
short var_10 = (short)12568;
unsigned long long int var_11 = 10574597247810332619ULL;
long long int var_15 = -1360339469295724463LL;
long long int var_18 = 5822094328836699556LL;
int zero = 0;
signed char var_20 = (signed char)-16;
signed char var_21 = (signed char)-14;
short var_22 = (short)10569;
short var_23 = (short)31090;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)1;
    value_mismatch |= var_21 != (signed char)24;
    value_mismatch |= var_22 != (short)0;
    value_mismatch |= var_23 != (short)12294;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_6, var_9, var_10, var_11, var_15, var_18, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
