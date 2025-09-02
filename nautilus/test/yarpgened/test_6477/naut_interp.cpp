/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6477
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6477
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
void test(val<unsigned int> var_2, val<int> var_3, val<unsigned char> var_6, val<bool> var_8, val<int> var_9, val<short> var_10, val<int> zero, val<signed char*> var_12, val<short*> var_13) {
    *var_12 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) -5382601889896582905LL))) ? ((~(2680850733U))) : (((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) var_8)), (-12503262))))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (var_9) : (((/* implicit */val<int>) var_10))))) ? (((((/* implicit */val<int>) var_6)) >> (((var_2) - (1226146474U))))) : (var_3))) : (var_9)));
    *var_13 += ((/* implicit */val<short>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1226146491U;
int var_3 = 152460785;
unsigned char var_6 = (unsigned char)122;
bool var_8 = (bool)0;
int var_9 = 193344921;
short var_10 = (short)-24431;
int zero = 0;
signed char var_12 = (signed char)-37;
short var_13 = (short)26087;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)0;
    value_mismatch |= var_13 != (short)-15400;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_6, var_8, var_9, var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
