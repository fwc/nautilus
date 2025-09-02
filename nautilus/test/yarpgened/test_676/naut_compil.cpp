/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 676
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=676
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
void test(val<unsigned int> var_6, val<short> var_9, val<int> zero, val<unsigned long long int*> var_17, val<unsigned short*> var_18) {
    *var_17 = ((/* implicit */val<unsigned long long int>) var_9);
    *var_18 -= ((/* implicit */val<unsigned short>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3989841701U;
short var_9 = (short)24546;
int zero = 0;
unsigned long long int var_17 = 1090594227442700900ULL;
unsigned short var_18 = (unsigned short)46128;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 24546ULL;
    value_mismatch |= var_18 != (unsigned short)36107;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
