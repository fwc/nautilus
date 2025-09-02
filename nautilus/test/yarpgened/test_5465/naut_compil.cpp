/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5465
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5465
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
void test(val<long long int> var_1, val<unsigned int> var_13, val<int> zero, val<short*> var_16, val<int*> var_17) {
    *var_16 = ((/* implicit */val<short>) (~(1460914491)));
    *var_17 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_1)) ? (17512385269441234679ULL) : (((/* implicit */val<unsigned long long int>) ((var_13) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2949976125363599297LL;
unsigned int var_13 = 1114581126U;
int zero = 0;
short var_16 = (short)-11187;
int var_17 = -477325180;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)14020;
    value_mismatch |= var_17 != 852756215;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_13, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
