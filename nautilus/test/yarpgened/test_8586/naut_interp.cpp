/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8586
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8586
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
void test(val<bool> var_1, val<int> var_3, val<int> var_5, val<int> var_7, val<int> zero, val<int*> var_13, val<int*> var_14) {
    *var_13 *= ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((val<short>) 71744694U)))));
    *var_14 = ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_1))))) ? (((/* implicit */val<int>) ((max((14305387602479508529ULL), (14305387602479508536ULL))) < (((/* implicit */val<unsigned long long int>) min((var_3), (var_5))))))) : (var_7));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
int var_3 = -197406277;
int var_5 = -467491044;
int var_7 = -713193165;
int zero = 0;
int var_13 = -778191587;
int var_14 = -1768080889;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 0;
    value_mismatch |= var_14 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_7, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
