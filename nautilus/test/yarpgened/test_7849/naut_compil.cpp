/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7849
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7849
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
void test(val<bool> var_2, val<unsigned long long int> var_3, val<bool> var_8, val<unsigned long long int> var_19, val<int> zero, val<unsigned long long int*> var_20, val<unsigned long long int*> var_21) {
    *var_20 ^= ((max((max((var_3), (((/* implicit */val<unsigned long long int>) var_8)))), (var_19))) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((var_3), (((/* implicit */val<unsigned long long int>) var_2))))))))));
    *var_21 ^= ((/* implicit */val<unsigned long long int>) ((val<int>) ((val<int>) 4)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
unsigned long long int var_3 = 9682991257025460600ULL;
bool var_8 = (bool)0;
unsigned long long int var_19 = 10303350899315637608ULL;
int zero = 0;
unsigned long long int var_20 = 1172012888724329464ULL;
unsigned long long int var_21 = 16533431667213692185ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 11438870988507262608ULL;
    value_mismatch |= var_21 != 16533431667213692189ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_8, var_19, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
