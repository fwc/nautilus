/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6478
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6478
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
void test(val<long long int> var_2, val<unsigned short> var_10, val<int> zero, val<unsigned long long int*> var_12, val<unsigned long long int*> var_13, val<unsigned short*> var_14, val<long long int*> var_15) {
    *var_12 |= ((/* implicit */val<unsigned long long int>) var_2);
    *var_13 |= ((/* implicit */val<unsigned long long int>) var_10);
    *var_14 = ((/* implicit */val<unsigned short>) (+(var_2)));
    *var_15 |= ((/* implicit */val<long long int>) ((val<unsigned short>) max((14294447521855418381ULL), (2147483647ULL))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2137143781113718394LL;
unsigned short var_10 = (unsigned short)64038;
int zero = 0;
unsigned long long int var_12 = 13290532824708569514ULL;
unsigned long long int var_13 = 3871318190225673221ULL;
unsigned short var_14 = (unsigned short)36279;
long long int var_15 = -4093824121596789846LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 13689251759124381690ULL;
    value_mismatch |= var_13 != 3871318190225686055ULL;
    value_mismatch |= var_14 != (unsigned short)59002;
    value_mismatch |= var_15 != -4093824121596757073LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
