/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7180
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7180
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
void test(val<unsigned long long int> var_6, val<int> zero, val<unsigned short*> var_20, val<unsigned int*> var_21) {
    *var_20 = ((/* implicit */val<unsigned short>) (val<signed char>)-96);
    *var_21 = ((/* implicit */val<unsigned int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 2917994451469632665ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)6194;
unsigned int var_21 = 705143683U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)65440;
    value_mismatch |= var_21 != 1349026969U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, zero, &var_20, &var_21);
  checksum();
}
