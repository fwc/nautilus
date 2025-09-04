/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2856
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2856
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
void test(val<short> var_0, val<unsigned int> var_2, val<unsigned int> var_9, val<int> zero, val<short*> var_18, val<signed char*> var_19) {
    *var_18 = ((/* implicit */val<short>) max(((-(((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<signed char>)99)))))), (((/* implicit */val<int>) (val<unsigned char>)107))));
    *var_19 = ((/* implicit */val<signed char>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4941;
unsigned int var_2 = 3245145882U;
unsigned int var_9 = 1132400086U;
int zero = 0;
short var_18 = (short)15931;
signed char var_19 = (signed char)109;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)107;
    value_mismatch |= var_19 != (signed char)-42;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_9, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
