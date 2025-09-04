/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3789
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3789
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
void test(val<int> var_9, val<int> zero, val<unsigned short*> var_10, val<short*> var_11) {
    *var_10 += ((/* implicit */val<unsigned short>) (val<bool>)1);
    *var_11 = ((/* implicit */val<short>) (+((~(((val<unsigned long long int>) var_9))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 1242687248;
int zero = 0;
unsigned short var_10 = (unsigned short)29523;
short var_11 = (short)-8637;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)29524;
    value_mismatch |= var_11 != (short)6383;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
