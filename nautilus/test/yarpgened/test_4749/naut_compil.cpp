/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4749
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4749
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
void test(val<unsigned int> var_4, val<short> var_5, val<long long int> var_9, val<signed char> var_10, val<short> var_14, val<unsigned char> var_16, val<int> zero, val<short*> var_19, val<long long int*> var_20, val<bool*> var_21) {
    *var_19 += ((/* implicit */val<short>) (+(min((((/* implicit */val<long long int>) var_4)), (min((335964546853473871LL), (((/* implicit */val<long long int>) (val<bool>)0))))))));
    *var_20 &= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))) : (var_9))))) : (((/* implicit */val<int>) var_16))));
    *var_21 = ((/* implicit */val<bool>) max((*var_21), (((/* implicit */val<bool>) ((val<long long int>) var_14)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 691275908U;
short var_5 = (short)23451;
long long int var_9 = -3856634921925315221LL;
signed char var_10 = (signed char)-21;
short var_14 = (short)-17619;
unsigned char var_16 = (unsigned char)43;
int zero = 0;
short var_19 = (short)14175;
long long int var_20 = 7546660895447555580LL;
bool var_21 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)14175;
    value_mismatch |= var_20 != 0LL;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_9, var_10, var_14, var_16, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
