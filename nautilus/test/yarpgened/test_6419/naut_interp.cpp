/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6419
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6419
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
void test(val<bool> var_7, val<unsigned short> var_11, val<int> zero, val<int*> var_12, val<unsigned char*> var_13, val<unsigned long long int*> var_14) {
    *var_12 = ((/* implicit */val<int>) (val<signed char>)-67);
    *var_13 = ((/* implicit */val<unsigned char>) (((!(((/* implicit */val<bool>) var_11)))) ? (((((/* implicit */val<int>) var_11)) & (((((/* implicit */val<bool>) (val<signed char>)-67)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<signed char>)85)))))) : (((/* implicit */val<int>) var_7))));
    *var_14 = 5ULL;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_7 = (bool)0;
unsigned short var_11 = (unsigned short)59303;
int zero = 0;
int var_12 = -659307834;
unsigned char var_13 = (unsigned char)242;
unsigned long long int var_14 = 4322788105410288061ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -67;
    value_mismatch |= var_13 != (unsigned char)0;
    value_mismatch |= var_14 != 5ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
