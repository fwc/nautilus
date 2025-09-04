/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4431
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4431
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
void test(val<bool> var_0, val<int> var_6, val<unsigned long long int> var_11, val<signed char> var_14, val<int> zero, val<signed char*> var_18, val<signed char*> var_19) {
    *var_18 = ((/* implicit */val<signed char>) ((var_6) < ((+(((/* implicit */val<int>) var_14))))));
    *var_19 = ((/* implicit */val<signed char>) (+(max(((-(((/* implicit */val<int>) var_0)))), (((val<int>) var_11))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
int var_6 = 861682599;
unsigned long long int var_11 = 9632962553103783978ULL;
signed char var_14 = (signed char)111;
int zero = 0;
signed char var_18 = (signed char)-102;
signed char var_19 = (signed char)-24;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)0;
    value_mismatch |= var_19 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_11, var_14, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
