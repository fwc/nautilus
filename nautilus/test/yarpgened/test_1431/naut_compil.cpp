/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1431
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1431
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
void test(val<int> zero, val<unsigned int*> var_13, val<unsigned short*> var_14) {
    *var_13 = ((/* implicit */val<unsigned int>) 8695207881382511899LL);
    *var_14 = (val<unsigned short>)21046;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned int var_13 = 4275512178U;
unsigned short var_14 = (unsigned short)47452;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 3120252187U;
    value_mismatch |= var_14 != (unsigned short)21046;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_13, &var_14);
  checksum();
}
