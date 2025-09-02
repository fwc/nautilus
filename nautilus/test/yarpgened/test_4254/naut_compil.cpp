/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4254
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4254
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
void test(val<unsigned int> var_2, val<unsigned int> var_4, val<short> var_5, val<unsigned int> var_7, val<bool> var_8, val<signed char> var_9, val<int> zero, val<unsigned int*> var_10, val<signed char*> var_11) {
    *var_10 -= (+(((val<unsigned int>) var_2)));
    *var_11 = ((/* implicit */val<signed char>) max((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((var_7) >= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))))))) >= (var_4))), (((((/* implicit */val<int>) max(((val<short>)-9420), (((/* implicit */val<short>) (val<unsigned char>)201))))) > (((/* implicit */val<int>) max((var_5), (((/* implicit */val<short>) var_9)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1612092687U;
unsigned int var_4 = 2960943116U;
short var_5 = (short)14358;
unsigned int var_7 = 3283443170U;
bool var_8 = (bool)0;
signed char var_9 = (signed char)-30;
int zero = 0;
unsigned int var_10 = 565327985U;
signed char var_11 = (signed char)5;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 3248202594U;
    value_mismatch |= var_11 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_7, var_8, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
