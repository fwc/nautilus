/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 680
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=680
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
void test(val<short> var_2, val<long long int> var_8, val<unsigned long long int> var_9, val<int> zero, val<bool*> var_15, val<unsigned short*> var_16, val<unsigned short*> var_17) {
    *var_15 = ((/* implicit */val<bool>) (-(var_8)));
    *var_16 = ((/* implicit */val<unsigned short>) (~(var_9)));
    *var_17 = ((/* implicit */val<unsigned short>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3298;
long long int var_8 = -2205269923101966315LL;
unsigned long long int var_9 = 3679410910967560860ULL;
int zero = 0;
bool var_15 = (bool)1;
unsigned short var_16 = (unsigned short)38382;
unsigned short var_17 = (unsigned short)50565;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (unsigned short)1379;
    value_mismatch |= var_17 != (unsigned short)3298;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_9, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
