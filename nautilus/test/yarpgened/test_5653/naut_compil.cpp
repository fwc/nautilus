/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5653
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5653
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
void test(val<short> var_0, val<unsigned short> var_4, val<int> zero, val<unsigned int*> var_15, val<int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned int>) var_0);
    *var_16 -= ((/* implicit */val<int>) (!((!(((/* implicit */val<bool>) ((((/* implicit */val<int>) var_4)) | (((/* implicit */val<int>) var_4)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24686;
unsigned short var_4 = (unsigned short)3566;
int zero = 0;
unsigned int var_15 = 984547690U;
int var_16 = -996286546;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 24686U;
    value_mismatch |= var_16 != -996286547;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
