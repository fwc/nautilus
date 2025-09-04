/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6374
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6374
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
void test(val<short> var_0, val<int> zero, val<short*> var_18, val<long long int*> var_19, val<signed char*> var_20) {
    *var_18 = ((/* implicit */val<short>) -9072292175027452414LL);
    *var_19 = ((/* implicit */val<long long int>) var_0);
    *var_20 = ((/* implicit */val<signed char>) ((((val<long long int>) (~(((/* implicit */val<int>) (val<unsigned short>)22994))))) ^ (((/* implicit */val<long long int>) 1228803391))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20488;
int zero = 0;
short var_18 = (short)32733;
long long int var_19 = 5421458257877165745LL;
signed char var_20 = (signed char)14;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)-14846;
    value_mismatch |= var_19 != -20488LL;
    value_mismatch |= var_20 != (signed char)18;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
