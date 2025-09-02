/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 560
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=560
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
void test(val<short> var_1, val<bool> var_3, val<unsigned int> var_7, val<int> zero, val<signed char*> var_10, val<signed char*> var_11, val<bool*> var_12) {
    *var_10 = ((/* implicit */val<signed char>) min((*var_10), (((/* implicit */val<signed char>) min((((((/* implicit */val<bool>) -1119543247)) ? (var_7) : (min((0U), (((/* implicit */val<unsigned int>) (val<bool>)1)))))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<bool>)1)) * (((/* implicit */val<int>) var_3))))))))));
    *var_11 = ((/* implicit */val<signed char>) var_3);
    *var_12 += ((/* implicit */val<bool>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2055;
bool var_3 = (bool)0;
unsigned int var_7 = 1479510491U;
int zero = 0;
signed char var_10 = (signed char)-12;
signed char var_11 = (signed char)105;
bool var_12 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)-12;
    value_mismatch |= var_11 != (signed char)0;
    value_mismatch |= var_12 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_7, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
