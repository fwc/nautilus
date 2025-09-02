/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7801
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7801
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
void test(val<bool> var_0, val<unsigned char> var_3, val<short> var_4, val<int> zero, val<bool*> var_16, val<unsigned char*> var_17, val<unsigned int*> var_18, val<bool*> var_19) {
    *var_16 &= var_0;
    *var_17 = ((/* implicit */val<unsigned char>) ((max((((((/* implicit */val<bool>) (val<signed char>)110)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)123))) : (0LL))), (((/* implicit */val<long long int>) (val<bool>)1)))) % (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-115)))));
    *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 4294967295U)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_3))));
    *var_19 = ((/* implicit */val<bool>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned char var_3 = (unsigned char)176;
short var_4 = (short)703;
int zero = 0;
bool var_16 = (bool)1;
unsigned char var_17 = (unsigned char)39;
unsigned int var_18 = 3901553391U;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != (unsigned char)8;
    value_mismatch |= var_18 != 703U;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
