/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3719
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3719
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
void test(val<long long int> var_3, val<int> zero, val<int*> var_13, val<unsigned char*> var_14) {
    *var_13 = ((/* implicit */val<int>) var_3);
    *var_14 -= ((/* implicit */val<unsigned char>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -839836983589564387LL;
int zero = 0;
int var_13 = 113192135;
unsigned char var_14 = (unsigned char)114;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -1947693027;
    value_mismatch |= var_14 != (unsigned char)85;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_13, &var_14);
  checksum();
}
