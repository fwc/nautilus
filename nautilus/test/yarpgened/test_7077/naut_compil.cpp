/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7077
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7077
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
void test(val<bool> var_1, val<int> var_7, val<short> var_13, val<short> var_16, val<int> zero, val<unsigned long long int*> var_18, val<bool*> var_19) {
    *var_18 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_16)) ? (min(((+(((/* implicit */val<int>) (val<bool>)1)))), (((/* implicit */val<int>) var_13)))) : (max((var_7), (((/* implicit */val<int>) var_1))))));
    *var_19 = ((/* implicit */val<bool>) (val<signed char>)0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
int var_7 = -1688676150;
short var_13 = (short)19787;
short var_16 = (short)6363;
int zero = 0;
unsigned long long int var_18 = 6289346310912347889ULL;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1ULL;
    value_mismatch |= var_19 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, var_13, var_16, zero, &var_18, &var_19);
  checksum();
}
