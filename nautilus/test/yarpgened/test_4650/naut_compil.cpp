/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4650
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4650
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
void test(val<int> zero, val<unsigned short*> var_19, val<short*> var_20) {
    *var_19 = ((/* implicit */val<unsigned short>) (val<bool>)1);
    *var_20 = ((/* implicit */val<short>) (val<unsigned short>)24);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned short var_19 = (unsigned short)40279;
short var_20 = (short)14906;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)1;
    value_mismatch |= var_20 != (short)24;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_19, &var_20);
  checksum();
}
