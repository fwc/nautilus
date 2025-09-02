/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3671
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3671
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
void test(val<unsigned int> var_2, val<int> var_3, val<long long int> var_4, val<short> var_9, val<unsigned int> var_11, val<int> zero, val<bool*> var_16, val<bool*> var_17) {
    *var_16 &= ((/* implicit */val<bool>) (((~(max((var_2), (((/* implicit */val<unsigned int>) var_3)))))) << (((((((val<bool>) -9223372036854775802LL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) : ((~(var_4))))) + (25105LL)))));
    *var_17 = ((/* implicit */val<bool>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1334250982U;
int var_3 = -2131985630;
long long int var_4 = 3375667254225722011LL;
short var_9 = (short)-25087;
unsigned int var_11 = 2302603528U;
int zero = 0;
bool var_16 = (bool)1;
bool var_17 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_9, var_11, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
