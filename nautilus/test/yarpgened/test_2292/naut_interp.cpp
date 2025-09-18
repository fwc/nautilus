/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2292
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2292
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
void test(val<bool> var_5, val<int> var_8, val<int> zero, val<unsigned int*> var_10, val<int*> var_11, val<signed char*> var_12) {
    *var_10 = 1867738710U;
    *var_11 ^= var_8;
    *var_12 += ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) 361305810)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_5 = (bool)1;
int var_8 = -1660788501;
int zero = 0;
unsigned int var_10 = 2366727599U;
int var_11 = -1991486586;
signed char var_12 = (signed char)107;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1867738710U;
    value_mismatch |= var_11 != 340669293;
    value_mismatch |= var_12 != (signed char)108;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
}
