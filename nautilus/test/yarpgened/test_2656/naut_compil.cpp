/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2656
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2656
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
void test(val<unsigned int> var_3, val<unsigned int> var_7, val<int> var_11, val<int> zero, val<signed char*> var_13, val<unsigned char*> var_14, val<unsigned char*> var_15) {
    *var_13 = ((/* implicit */val<signed char>) var_3);
    *var_14 = ((/* implicit */val<unsigned char>) var_7);
    *var_15 = ((/* implicit */val<unsigned char>) max(((-((~(var_7))))), (((/* implicit */val<unsigned int>) var_11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3234943750U;
unsigned int var_7 = 3297210932U;
int var_11 = 1161640033;
int zero = 0;
signed char var_13 = (signed char)-60;
unsigned char var_14 = (unsigned char)31;
unsigned char var_15 = (unsigned char)78;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)6;
    value_mismatch |= var_14 != (unsigned char)52;
    value_mismatch |= var_15 != (unsigned char)53;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_11, zero, &var_13, &var_14, &var_15);
  checksum();
}
