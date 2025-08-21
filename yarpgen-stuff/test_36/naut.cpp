/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 36
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=36
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
void test(val<int> var_5, val<bool> var_11, val<long long int> var_13, val<int> zero, val<long long int*> var_14, val<unsigned char*> var_15) {
    *var_14 = ((/* implicit */val<long long int>) ((var_5) ^ (((/* implicit */val<int>) ((val<bool>) var_13)))));
    *var_15 = ((/* implicit */val<unsigned char>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1367151153;
bool var_11 = (bool)1;
long long int var_13 = -6534006271817343211LL;
int zero = 0;
long long int var_14 = -7165862009269693579LL;
unsigned char var_15 = (unsigned char)176;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1367151152LL;
    value_mismatch |= var_15 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_11, var_13, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
