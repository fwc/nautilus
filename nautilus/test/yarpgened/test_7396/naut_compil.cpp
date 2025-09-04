/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7396
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7396
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
void test(val<short> var_8, val<int> var_9, val<int> var_14, val<int> zero, val<int*> var_19, val<int*> var_20) {
    *var_19 = ((((val<int>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) (val<short>)-25242)) : (-346349982)))) / (min((min((21), (-346349982))), (min((var_9), (var_14))))));
    *var_20 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) -346349982))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)13832;
int var_9 = -1809815558;
int var_14 = 403998253;
int zero = 0;
int var_19 = 52509659;
int var_20 = 889597062;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 0;
    value_mismatch |= var_20 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, var_14, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
