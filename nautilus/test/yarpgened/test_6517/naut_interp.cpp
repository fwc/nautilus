/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6517
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6517
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
void test(val<short> var_0, val<short> var_4, val<unsigned int> var_5, val<signed char> var_7, val<unsigned int> var_8, val<unsigned char> var_10, val<int> var_13, val<int> zero, val<long long int*> var_18, val<signed char*> var_19) {
    *var_18 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((((var_8) + (var_5))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) -951873135)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (val<short>)-1)))))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (+(var_8)))))))) : (min((((/* implicit */val<unsigned int>) var_4)), (((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))) : (var_5)))))));
    *var_19 = ((/* implicit */val<signed char>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9003;
short var_4 = (short)-20827;
unsigned int var_5 = 3515178624U;
signed char var_7 = (signed char)-31;
unsigned int var_8 = 105222697U;
unsigned char var_10 = (unsigned char)93;
int var_13 = 1046084157;
int zero = 0;
long long int var_18 = -1911132737737361761LL;
signed char var_19 = (signed char)-95;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 0LL;
    value_mismatch |= var_19 != (signed char)43;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_7, var_8, var_10, var_13, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
