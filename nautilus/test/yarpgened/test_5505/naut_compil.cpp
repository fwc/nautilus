/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5505
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5505
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
void test(val<short> var_1, val<unsigned int> var_12, val<unsigned long long int> var_13, val<int> zero, val<unsigned int*> var_15, val<unsigned short*> var_16, val<signed char*> var_17) {
    *var_15 = var_12;
    *var_16 = ((/* implicit */val<unsigned short>) var_13);
    *var_17 = ((/* implicit */val<signed char>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30153;
unsigned int var_12 = 676542594U;
unsigned long long int var_13 = 353162106139183931ULL;
int zero = 0;
unsigned int var_15 = 3932643365U;
unsigned short var_16 = (unsigned short)9756;
signed char var_17 = (signed char)19;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 676542594U;
    value_mismatch |= var_16 != (unsigned short)2875;
    value_mismatch |= var_17 != (signed char)55;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_12, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
