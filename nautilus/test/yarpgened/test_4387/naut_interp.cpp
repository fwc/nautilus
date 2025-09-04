/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4387
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4387
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
void test(val<short> var_1, val<unsigned char> var_2, val<int> var_6, val<short> var_10, val<short> var_11, val<int> zero, val<bool*> var_14, val<short*> var_15) {
    *var_14 = ((/* implicit */val<bool>) (-(min((((((/* implicit */val<bool>) (val<unsigned char>)109)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_10)))), (((((/* implicit */val<int>) var_2)) + (var_6)))))));
    *var_15 = var_11;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20763;
unsigned char var_2 = (unsigned char)187;
int var_6 = 719658980;
short var_10 = (short)-26563;
short var_11 = (short)9303;
int zero = 0;
bool var_14 = (bool)1;
short var_15 = (short)-25806;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (short)9303;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_6, var_10, var_11, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
