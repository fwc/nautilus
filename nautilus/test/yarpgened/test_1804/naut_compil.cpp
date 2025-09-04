/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1804
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1804
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
void test(val<long long int> var_9, val<unsigned short> var_10, val<int> zero, val<unsigned char*> var_14, val<unsigned short*> var_15) {
    *var_14 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) (~(((/* implicit */val<int>) max((var_10), (var_10)))))))));
    *var_15 = ((/* implicit */val<unsigned short>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -1872974856547310256LL;
unsigned short var_10 = (unsigned short)17859;
int zero = 0;
unsigned char var_14 = (unsigned char)215;
unsigned short var_15 = (unsigned short)55873;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)0;
    value_mismatch |= var_15 != (unsigned short)25936;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_10, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
