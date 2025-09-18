/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3377
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3377
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
void test(val<unsigned short> var_1, val<int> var_8, val<unsigned short> var_12, val<int> zero, val<int*> var_15, val<int*> var_16) {
    *var_15 = var_8;
    *var_16 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) max((var_8), (((/* implicit */val<int>) min((var_1), (var_12)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64123;
int var_8 = 923506351;
unsigned short var_12 = (unsigned short)25151;
int zero = 0;
int var_15 = 1667466426;
int var_16 = 127424745;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 923506351;
    value_mismatch |= var_16 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, var_12, zero, &var_15, &var_16);
  checksum();
}
