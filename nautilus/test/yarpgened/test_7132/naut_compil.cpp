/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7132
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7132
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
void test(val<signed char> var_2, val<signed char> var_3, val<unsigned short> var_6, val<unsigned short> var_17, val<signed char> var_19, val<int> zero, val<unsigned short*> var_20, val<unsigned short*> var_21) {
    *var_20 = ((/* implicit */val<unsigned short>) (((!(((((/* implicit */val<int>) (val<signed char>)31)) != (((/* implicit */val<int>) (val<unsigned short>)5)))))) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<unsigned short>)45703))))) ? (((/* implicit */val<int>) var_17)) : (((/* implicit */val<int>) min(((val<unsigned short>)4), (((/* implicit */val<unsigned short>) var_3))))))))));
    *var_21 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) var_6)) <= (((/* implicit */val<int>) (val<signed char>)3))))) * ((+(((((/* implicit */val<int>) var_19)) + (((/* implicit */val<int>) var_2))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-92;
signed char var_3 = (signed char)-87;
unsigned short var_6 = (unsigned short)7525;
unsigned short var_17 = (unsigned short)29656;
signed char var_19 = (signed char)60;
int zero = 0;
unsigned short var_20 = (unsigned short)22485;
unsigned short var_21 = (unsigned short)20451;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)1;
    value_mismatch |= var_21 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_6, var_17, var_19, zero, &var_20, &var_21);
  checksum();
}
