/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 655
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=655
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
void test(val<unsigned char> var_2, val<unsigned char> var_3, val<unsigned char> var_4, val<unsigned char> var_7, val<int> var_8, val<int> var_10, val<int> zero, val<unsigned char*> var_15, val<int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) var_8))));
    *var_16 = ((((/* implicit */val<bool>) (+((~(((/* implicit */val<int>) var_3))))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_7)) : (var_10)))) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_3)))) : ((+(-24))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)250;
unsigned char var_3 = (unsigned char)153;
unsigned char var_4 = (unsigned char)123;
unsigned char var_7 = (unsigned char)146;
int var_8 = -589410323;
int var_10 = 1076323003;
int zero = 0;
unsigned char var_15 = (unsigned char)101;
int var_16 = 93425834;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)0;
    value_mismatch |= var_16 != 123;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_7, var_8, var_10, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
