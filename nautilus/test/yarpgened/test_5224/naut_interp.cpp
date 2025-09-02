/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5224
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5224
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
void test(val<long long int> var_1, val<unsigned char> var_3, val<int> zero, val<long long int*> var_12, val<bool*> var_13, val<short*> var_14) {
    *var_12 &= ((/* implicit */val<long long int>) var_3);
    *var_13 = ((/* implicit */val<bool>) (val<unsigned char>)11);
    *var_14 = ((/* implicit */val<short>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2020162693371784495LL;
unsigned char var_3 = (unsigned char)94;
int zero = 0;
long long int var_12 = -481264824475944829LL;
bool var_13 = (bool)0;
short var_14 = (short)-20407;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 2LL;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (short)4817;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
