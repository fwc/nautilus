/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5194
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5194
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
void test(val<int> var_2, val<int> var_4, val<int> var_5, val<int> var_6, val<int> var_8, val<int> var_10, val<int> var_13, val<int> zero, val<int*> var_15, val<int*> var_16, val<int*> var_17) {
    *var_15 = ((/* implicit */val<int>) min((*var_15), (((val<int>) var_10))));
    *var_16 -= (+(((min((var_4), (var_2))) % (((var_6) + (2147483647))))));
    *var_17 = ((((/* implicit */val<bool>) 942176471)) ? (max((var_13), (var_5))) : (max((var_10), (min((var_13), (var_8))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1425051532;
int var_4 = -1366826745;
int var_5 = -952863269;
int var_6 = -891389800;
int var_8 = -1515649709;
int var_10 = 1938292160;
int var_13 = 468088747;
int zero = 0;
int var_15 = -1795304129;
int var_16 = 512457382;
int var_17 = 627837262;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != -1795304129;
    value_mismatch |= var_16 != 681415067;
    value_mismatch |= var_17 != 468088747;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_8, var_10, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
