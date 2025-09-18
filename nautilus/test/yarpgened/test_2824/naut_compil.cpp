/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2824
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2824
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
void test(val<signed char> var_1, val<signed char> var_2, val<signed char> var_5, val<int> zero, val<unsigned char*> var_10, val<int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned char>) var_5);
    *var_11 = (~((~(((/* implicit */val<int>) max((var_1), (var_2)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-67;
signed char var_2 = (signed char)15;
signed char var_5 = (signed char)64;
int zero = 0;
unsigned char var_10 = (unsigned char)183;
int var_11 = -392950535;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)64;
    value_mismatch |= var_11 != 15;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, zero, &var_10, &var_11);
  checksum();
}
