/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4076
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4076
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
void test(val<signed char> var_6, val<unsigned char> var_11, val<int> zero, val<unsigned short*> var_12, val<signed char*> var_13, val<long long int*> var_14) {
    *var_12 = ((/* implicit */val<unsigned short>) var_11);
    *var_13 = ((/* implicit */val<signed char>) (((-(((0LL) | (((/* implicit */val<long long int>) -946072795)))))) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((var_11), (((/* implicit */val<unsigned char>) ((val<bool>) var_11)))))))));
    *var_14 = ((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-48;
unsigned char var_11 = (unsigned char)73;
int zero = 0;
unsigned short var_12 = (unsigned short)52720;
signed char var_13 = (signed char)56;
long long int var_14 = -4443349664452559585LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)73;
    value_mismatch |= var_13 != (signed char)73;
    value_mismatch |= var_14 != 47LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
}
