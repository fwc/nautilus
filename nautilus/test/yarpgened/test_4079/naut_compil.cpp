/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4079
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4079
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
void test(val<long long int> var_1, val<unsigned long long int> var_3, val<int> var_7, val<short> var_8, val<int> zero, val<signed char*> var_14, val<bool*> var_15, val<int*> var_16) {
    *var_14 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<short>) var_1)))) * (min((((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_8))))), (var_3)))));
    *var_15 = (!(((/* implicit */val<bool>) 1257104455)));
    *var_16 = var_7;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3209806994037442455LL;
unsigned long long int var_3 = 7006540192674591145ULL;
int var_7 = 1470001396;
short var_8 = (short)-26108;
int zero = 0;
signed char var_14 = (signed char)51;
bool var_15 = (bool)0;
int var_16 = 324651385;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)13;
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != 1470001396;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_7, var_8, zero, &var_14, &var_15, &var_16);
  checksum();
}
