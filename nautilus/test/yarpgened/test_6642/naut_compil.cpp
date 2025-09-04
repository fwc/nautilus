/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6642
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6642
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
void test(val<unsigned short> var_9, val<long long int> var_13, val<int> zero, val<unsigned long long int*> var_17, val<long long int*> var_18) {
    *var_17 += ((/* implicit */val<unsigned long long int>) var_9);
    *var_18 = var_13;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)16288;
long long int var_13 = 8325508555680712989LL;
int zero = 0;
unsigned long long int var_17 = 1293166283108214416ULL;
long long int var_18 = -2539017875044120704LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 1293166283108230704ULL;
    value_mismatch |= var_18 != 8325508555680712989LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_13, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
