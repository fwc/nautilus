/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8808
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8808
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
void test(val<signed char> var_0, val<signed char> var_7, val<signed char> var_8, val<unsigned char> var_9, val<long long int> var_11, val<int> zero, val<unsigned short*> var_18, val<long long int*> var_19, val<long long int*> var_20) {
    *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_7))))) ? (4095) : (((/* implicit */val<int>) var_0))));
    *var_19 ^= var_11;
    *var_20 = ((/* implicit */val<long long int>) (((!(((/* implicit */val<bool>) var_9)))) ? (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<int>) min(((val<short>)127), ((val<short>)-127)))) + (2147483647))) << (((((/* implicit */val<int>) var_8)) - (65)))))) : (((val<unsigned long long int>) ((val<unsigned char>) (val<unsigned short>)53335)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
signed char var_7 = (signed char)66;
signed char var_8 = (signed char)65;
unsigned char var_9 = (unsigned char)124;
long long int var_11 = -6307528353252201141LL;
int zero = 0;
unsigned short var_18 = (unsigned short)16606;
long long int var_19 = -7053809192457411782LL;
long long int var_20 = 1522616404945005756LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)4095;
    value_mismatch |= var_19 != 3921788136753090161LL;
    value_mismatch |= var_20 != 87LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_8, var_9, var_11, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
