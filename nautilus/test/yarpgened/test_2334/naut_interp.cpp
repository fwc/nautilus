/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2334
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2334
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
void test(val<unsigned int> var_1, val<bool> var_2, val<bool> var_15, val<int> zero, val<int*> var_18, val<unsigned int*> var_19) {
    *var_18 = ((/* implicit */val<int>) ((var_1) | (((/* implicit */val<unsigned int>) ((((var_2) ? (((/* implicit */val<int>) (val<signed char>)-121)) : (((/* implicit */val<int>) var_2)))) * (((/* implicit */val<int>) var_2)))))));
    *var_19 = ((/* implicit */val<unsigned int>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3377077919U;
bool var_2 = (bool)1;
bool var_15 = (bool)0;
int zero = 0;
int var_18 = -1071980926;
unsigned int var_19 = 3765956614U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -97;
    value_mismatch |= var_19 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_15, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
