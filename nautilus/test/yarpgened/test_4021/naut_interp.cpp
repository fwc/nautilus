/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4021
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4021
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
void test(val<long long int> var_4, val<signed char> var_7, val<int> zero, val<int*> var_20, val<signed char*> var_21, val<short*> var_22) {
    *var_20 = ((/* implicit */val<int>) ((val<signed char>) var_7));
    *var_21 &= ((/* implicit */val<signed char>) (+(1940054792U)));
    *var_22 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) ((val<short>) (val<unsigned char>)127)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7145036817768687169LL;
signed char var_7 = (signed char)-35;
int zero = 0;
int var_20 = 1255519253;
signed char var_21 = (signed char)-10;
short var_22 = (short)22842;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -35;
    value_mismatch |= var_21 != (signed char)0;
    value_mismatch |= var_22 != (short)-35;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
