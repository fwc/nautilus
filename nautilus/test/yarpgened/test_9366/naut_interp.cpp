/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9366
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9366
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
void test(val<long long int> var_1, val<bool> var_8, val<int> zero, val<short*> var_19, val<int*> var_20, val<unsigned char*> var_21) {
    *var_19 += ((/* implicit */val<short>) var_1);
    *var_20 = ((/* implicit */val<int>) var_8);
    *var_21 = ((/* implicit */val<unsigned char>) (val<short>)-900);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2510642434960354422LL;
bool var_8 = (bool)0;
int zero = 0;
short var_19 = (short)-17836;
int var_20 = -1000103445;
unsigned char var_21 = (unsigned char)2;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)9930;
    value_mismatch |= var_20 != 0;
    value_mismatch |= var_21 != (unsigned char)124;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
