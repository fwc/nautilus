/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8933
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8933
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
void test(val<signed char> var_3, val<unsigned short> var_4, val<unsigned long long int> var_7, val<short> var_13, val<signed char> var_14, val<int> zero, val<int*> var_15, val<short*> var_16) {
    *var_15 += ((/* implicit */val<int>) ((var_7) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13)))));
    *var_16 = ((/* implicit */val<short>) ((((var_7) <= (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))) : (var_7))))) ? (((/* implicit */val<int>) var_3)) : (min((((/* implicit */val<int>) var_4)), (((((/* implicit */val<int>) var_13)) ^ (((/* implicit */val<int>) var_14))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-69;
unsigned short var_4 = (unsigned short)39871;
unsigned long long int var_7 = 12195940297114383008ULL;
short var_13 = (short)1039;
signed char var_14 = (signed char)19;
int zero = 0;
int var_15 = 1548094001;
short var_16 = (short)-4150;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1548094002;
    value_mismatch |= var_16 != (short)1052;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_7, var_13, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
