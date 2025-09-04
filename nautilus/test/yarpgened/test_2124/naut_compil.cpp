/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2124
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2124
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
void test(val<signed char> var_4, val<unsigned long long int> var_7, val<signed char> var_8, val<int> var_9, val<short> var_11, val<unsigned int> var_12, val<bool> var_16, val<int> zero, val<signed char*> var_19, val<bool*> var_20) {
    *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((((/* implicit */val<bool>) 21)) ? (var_12) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11))))) - (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_9)) ? (var_9) : (var_9))))))) ? (min((((/* implicit */val<unsigned long long int>) -1324958051)), (var_7))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((((/* implicit */val<int>) var_8)) + (2147483647))) << (((/* implicit */val<int>) var_16))))) && (((/* implicit */val<bool>) ((var_7) << (((((/* implicit */val<int>) (val<short>)15622)) - (15566))))))))))));
    *var_20 = ((/* implicit */val<bool>) max((*var_20), (((/* implicit */val<bool>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)127;
unsigned long long int var_7 = 16504379631502603318ULL;
signed char var_8 = (signed char)-14;
int var_9 = 225952351;
short var_11 = (short)-5417;
unsigned int var_12 = 3677313066U;
bool var_16 = (bool)1;
int zero = 0;
signed char var_19 = (signed char)-46;
bool var_20 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)54;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_8, var_9, var_11, var_12, var_16, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
