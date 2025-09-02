/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1490
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1490
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
void test(val<unsigned int> var_8, val<bool> var_16, val<int> zero, val<long long int*> var_17, val<unsigned short*> var_18, val<int*> var_19) {
    *var_17 = ((/* implicit */val<long long int>) ((var_16) ? (4080177021U) : (0U)));
    *var_18 = ((/* implicit */val<unsigned short>) var_8);
    *var_19 = ((/* implicit */val<int>) var_16);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 524830231U;
bool var_16 = (bool)1;
int zero = 0;
long long int var_17 = -7542363703034650137LL;
unsigned short var_18 = (unsigned short)2310;
int var_19 = 1730474598;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 4080177021LL;
    value_mismatch |= var_18 != (unsigned short)17943;
    value_mismatch |= var_19 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
