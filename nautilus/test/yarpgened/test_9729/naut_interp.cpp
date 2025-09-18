/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9729
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9729
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
void test(val<short> var_0, val<bool> var_2, val<short> var_6, val<int> var_7, val<int> zero, val<unsigned int*> var_14, val<int*> var_15, val<bool*> var_16) {
    *var_14 = ((/* implicit */val<unsigned int>) (val<short>)-4484);
    *var_15 = ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_2)) : (var_7));
    *var_16 = ((/* implicit */val<bool>) ((val<unsigned long long int>) ((val<signed char>) var_0)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3237;
bool var_2 = (bool)1;
short var_6 = (short)14980;
int var_7 = -654058660;
int zero = 0;
unsigned int var_14 = 3367876871U;
int var_15 = -454530224;
bool var_16 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 4294962812U;
    value_mismatch |= var_15 != 1;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_7, zero, &var_14, &var_15, &var_16);
  checksum();
}
