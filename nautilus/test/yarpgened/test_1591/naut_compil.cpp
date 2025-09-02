/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1591
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1591
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
void test(val<int> var_1, val<signed char> var_2, val<int> var_3, val<int> var_5, val<int> zero, val<unsigned short*> var_10, val<long long int*> var_11, val<long long int*> var_12) {
    *var_10 = ((/* implicit */val<unsigned short>) var_2);
    *var_11 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((var_1) < (var_3)))) < ((~(var_5)))));
    *var_12 = ((/* implicit */val<long long int>) (~(((/* implicit */val<int>) ((val<unsigned char>) min((((/* implicit */val<int>) (val<short>)-1)), (var_1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -305197442;
signed char var_2 = (signed char)47;
int var_3 = -2070384286;
int var_5 = -1146857014;
int zero = 0;
unsigned short var_10 = (unsigned short)10601;
long long int var_11 = 5345123922839564558LL;
long long int var_12 = -6436621385922215522LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)47;
    value_mismatch |= var_11 != 1LL;
    value_mismatch |= var_12 != -127LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
