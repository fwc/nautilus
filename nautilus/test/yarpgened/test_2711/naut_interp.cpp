/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2711
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2711
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
void test(val<int> var_2, val<unsigned int> var_14, val<int> zero, val<unsigned long long int*> var_15, val<signed char*> var_16) {
    *var_15 &= ((/* implicit */val<unsigned long long int>) (+(var_2)));
    *var_16 += ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) 2147483647)) ? (((/* implicit */val<int>) (val<unsigned char>)255)) : (((/* implicit */val<int>) ((var_14) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)6))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 713778461;
unsigned int var_14 = 512547727U;
int zero = 0;
unsigned long long int var_15 = 6676767367348994790ULL;
signed char var_16 = (signed char)-102;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 713113604ULL;
    value_mismatch |= var_16 != (signed char)-103;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
