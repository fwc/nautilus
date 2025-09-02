/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 903
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=903
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
void test(val<int> var_2, val<short> var_7, val<unsigned short> var_8, val<long long int> var_11, val<int> zero, val<unsigned int*> var_12, val<unsigned char*> var_13, val<long long int*> var_14) {
    *var_12 = ((/* implicit */val<unsigned int>) var_11);
    *var_13 = ((/* implicit */val<unsigned char>) (val<unsigned short>)0);
    *var_14 = ((/* implicit */val<long long int>) max((*var_14), (((/* implicit */val<long long int>) (~(((val<unsigned long long int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_8)) : (var_2)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 516018190;
short var_7 = (short)-2713;
unsigned short var_8 = (unsigned short)48226;
long long int var_11 = -5111650005654944496LL;
int zero = 0;
unsigned int var_12 = 1937006212U;
unsigned char var_13 = (unsigned char)146;
long long int var_14 = 3129088215608930306LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 214975760U;
    value_mismatch |= var_13 != (unsigned char)0;
    value_mismatch |= var_14 != 3129088215608930306LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_8, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
