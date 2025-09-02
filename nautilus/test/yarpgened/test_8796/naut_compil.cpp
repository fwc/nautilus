/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8796
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8796
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
void test(val<int> var_3, val<signed char> var_9, val<long long int> var_13, val<long long int> var_14, val<int> zero, val<short*> var_17, val<unsigned char*> var_18) {
    *var_17 += ((/* implicit */val<short>) ((val<signed char>) max((((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_3))))), (((var_14) - (var_13))))));
    *var_18 = ((/* implicit */val<unsigned char>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1854330147;
signed char var_9 = (signed char)-90;
long long int var_13 = 8967242294269105686LL;
long long int var_14 = 5795803060656989124LL;
int zero = 0;
short var_17 = (short)23696;
unsigned char var_18 = (unsigned char)245;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)23696;
    value_mismatch |= var_18 != (unsigned char)166;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_9, var_13, var_14, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
