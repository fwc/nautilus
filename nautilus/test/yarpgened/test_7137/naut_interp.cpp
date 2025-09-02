/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7137
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7137
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
void test(val<long long int> var_2, val<int> var_6, val<int> zero, val<int*> var_13, val<int*> var_14) {
    *var_13 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) -418902864)) ? (var_2) : (((/* implicit */val<long long int>) var_6))));
    *var_14 += ((((/* implicit */val<bool>) 350820763)) ? (350820763) : (-264887854));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8211000032264359937LL;
int var_6 = 1843482808;
int zero = 0;
int var_13 = -1122999823;
int var_14 = 1711053470;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1915318271;
    value_mismatch |= var_14 != 2061874233;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
