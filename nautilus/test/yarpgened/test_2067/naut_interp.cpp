/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2067
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2067
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
void test(val<short> var_12, val<int> zero, val<unsigned int*> var_14, val<unsigned short*> var_15) {
    *var_14 += ((/* implicit */val<unsigned int>) var_12);
    *var_15 ^= ((/* implicit */val<unsigned short>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)-28299;
int zero = 0;
unsigned int var_14 = 4067387358U;
unsigned short var_15 = (unsigned short)45781;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 4067359059U;
    value_mismatch |= var_15 != (unsigned short)9120;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, zero, &var_14, &var_15);
  checksum();
}
