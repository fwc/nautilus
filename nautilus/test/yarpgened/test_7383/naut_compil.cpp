/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7383
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7383
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
void test(val<short> var_2, val<short> var_10, val<long long int> var_12, val<int> zero, val<signed char*> var_13, val<long long int*> var_14, val<unsigned short*> var_15) {
    *var_13 = ((/* implicit */val<signed char>) var_12);
    *var_14 = ((/* implicit */val<long long int>) var_2);
    *var_15 ^= ((/* implicit */val<unsigned short>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32121;
short var_10 = (short)2870;
long long int var_12 = 8707971033463023759LL;
int zero = 0;
signed char var_13 = (signed char)-118;
long long int var_14 = -8021512559899929165LL;
unsigned short var_15 = (unsigned short)56684;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)-113;
    value_mismatch |= var_14 != -32121LL;
    value_mismatch |= var_15 != (unsigned short)54874;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_10, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
