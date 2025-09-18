/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3924
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3924
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
void test(val<long long int> var_1, val<unsigned int> var_15, val<int> zero, val<short*> var_16, val<int*> var_17) {
    *var_16 = ((/* implicit */val<short>) var_15);
    *var_17 = ((/* implicit */val<int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7139747310239058574LL;
unsigned int var_15 = 3819543908U;
int zero = 0;
short var_16 = (short)-29788;
int var_17 = 1641583663;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)-25244;
    value_mismatch |= var_17 != -992376178;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_15, zero, &var_16, &var_17);
  checksum();
}
