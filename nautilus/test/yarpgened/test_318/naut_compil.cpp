/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 318
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=318
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
void test(val<short> var_0, val<signed char> var_4, val<signed char> var_8, val<short> var_9, val<unsigned long long int> var_11, val<int> zero, val<unsigned int*> var_12, val<short*> var_13, val<signed char*> var_14) {
    *var_12 = ((/* implicit */val<unsigned int>) ((val<signed char>) 2492838092357490447LL));
    *var_13 = ((/* implicit */val<short>) max((*var_13), (((/* implicit */val<short>) -5497319866119499371LL))));
    *var_14 = ((/* implicit */val<signed char>) max((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (var_11) : (var_11)))) ? (((/* implicit */val<int>) var_4)) : (((((/* implicit */val<int>) var_9)) & (((/* implicit */val<int>) (val<unsigned short>)62822)))))), (((/* implicit */val<int>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7635;
signed char var_4 = (signed char)-36;
signed char var_8 = (signed char)-42;
short var_9 = (short)-14957;
unsigned long long int var_11 = 17639737057351488940ULL;
int zero = 0;
unsigned int var_12 = 1726641664U;
short var_13 = (short)17255;
signed char var_14 = (signed char)-87;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 15U;
    value_mismatch |= var_13 != (short)17255;
    value_mismatch |= var_14 != (signed char)-45;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_8, var_9, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
}
