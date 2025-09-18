/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7021
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7021
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
void test(val<long long int> var_3, val<short> var_7, val<int> zero, val<unsigned int*> var_10, val<unsigned long long int*> var_11, val<int*> var_12) {
    *var_10 = ((/* implicit */val<unsigned int>) (val<signed char>)38);
    *var_11 = ((/* implicit */val<unsigned long long int>) var_7);
    *var_12 = ((/* implicit */val<int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7846052947533402527LL;
short var_7 = (short)-13003;
int zero = 0;
unsigned int var_10 = 4052592282U;
unsigned long long int var_11 = 4867712866258653714ULL;
int var_12 = -426795574;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 38U;
    value_mismatch |= var_11 != 18446744073709538613ULL;
    value_mismatch |= var_12 != -358444641;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, zero, &var_10, &var_11, &var_12);
  checksum();
}
