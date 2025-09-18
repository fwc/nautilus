/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9752
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9752
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
void test(val<signed char> var_0, val<unsigned short> var_6, val<unsigned long long int> var_10, val<int> var_11, val<int> zero, val<signed char*> var_14, val<signed char*> var_15, val<short*> var_16) {
    *var_14 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) (+(((var_10) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))))))))));
    *var_15 ^= ((/* implicit */val<signed char>) (~(var_11)));
    *var_16 = ((/* implicit */val<short>) (+(((2604027156U) | (max((((/* implicit */val<unsigned int>) var_0)), (2604027156U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
unsigned short var_6 = (unsigned short)59886;
unsigned long long int var_10 = 11768561761416194624ULL;
int var_11 = 749261648;
int zero = 0;
signed char var_14 = (signed char)-52;
signed char var_15 = (signed char)83;
short var_16 = (short)-26485;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)0;
    value_mismatch |= var_15 != (signed char)-4;
    value_mismatch |= var_16 != (short)19732;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_10, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
}
