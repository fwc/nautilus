/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7684
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7684
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
void test(val<int> var_1, val<bool> var_5, val<int> var_7, val<bool> var_9, val<int> zero, val<long long int*> var_10, val<bool*> var_11, val<bool*> var_12, val<int*> var_13) {
    *var_10 = ((((((/* implicit */val<bool>) max((((/* implicit */val<int>) var_5)), (var_7)))) ? (max((9223372036854775807LL), (((/* implicit */val<long long int>) (val<bool>)1)))) : (((/* implicit */val<long long int>) ((490157773) / (222525695)))))) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))));
    *var_11 = ((/* implicit */val<bool>) var_1);
    *var_12 = ((/* implicit */val<bool>) (~(((/* implicit */val<int>) (!((val<bool>)1))))));
    *var_13 *= ((/* implicit */val<int>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1384458372;
bool var_5 = (bool)0;
int var_7 = 1769809835;
bool var_9 = (bool)1;
int zero = 0;
long long int var_10 = 8458629015359180792LL;
bool var_11 = (bool)1;
bool var_12 = (bool)1;
int var_13 = 938159038;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1LL;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 938159038;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_7, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
