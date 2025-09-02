/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3846
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3846
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
void test(val<long long int> var_3, val<short> var_15, val<int> zero, val<long long int*> var_17, val<signed char*> var_18) {
    *var_17 = ((/* implicit */val<long long int>) max((14293237513605427852ULL), (((/* implicit */val<unsigned long long int>) (-9223372036854775807LL - 1LL)))));
    *var_18 -= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((val<short>) min((-4611781117204662818LL), (((/* implicit */val<long long int>) (val<signed char>)77)))))) ? (min((((((/* implicit */val<bool>) var_3)) ? (9223372036854775807LL) : (((/* implicit */val<long long int>) 2147483647)))), (((/* implicit */val<long long int>) (val<signed char>)-113)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_15)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7011049587690503846LL;
short var_15 = (short)17380;
int zero = 0;
long long int var_17 = 3245014217007456576LL;
signed char var_18 = (signed char)52;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -4153506560104123764LL;
    value_mismatch |= var_18 != (signed char)-91;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_15, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
