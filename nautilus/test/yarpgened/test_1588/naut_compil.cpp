/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1588
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1588
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
void test(val<short> var_3, val<long long int> var_17, val<int> zero, val<signed char*> var_19, val<signed char*> var_20) {
    *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_3)) <= (((/* implicit */val<int>) ((val<short>) min((((/* implicit */val<long long int>) (val<signed char>)101)), (-710659112245796030LL)))))));
    *var_20 += ((/* implicit */val<signed char>) max(((-(var_17))), (710659112245796035LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11304;
long long int var_17 = 4166396958544039575LL;
int zero = 0;
signed char var_19 = (signed char)-2;
signed char var_20 = (signed char)34;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)1;
    value_mismatch |= var_20 != (signed char)-27;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_17, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
