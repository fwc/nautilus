/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8816
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8816
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
void test(val<unsigned short> var_3, val<unsigned short> var_11, val<int> zero, val<unsigned short*> var_16, val<unsigned short*> var_17) {
    *var_16 = var_3;
    *var_17 = ((/* implicit */val<unsigned short>) max((*var_17), (var_11)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1424;
unsigned short var_11 = (unsigned short)47535;
int zero = 0;
unsigned short var_16 = (unsigned short)12306;
unsigned short var_17 = (unsigned short)24725;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)1424;
    value_mismatch |= var_17 != (unsigned short)47535;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_11, zero, &var_16, &var_17);
  checksum();
}
