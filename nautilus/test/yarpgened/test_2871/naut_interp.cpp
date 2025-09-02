/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2871
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2871
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
void test(val<long long int> var_2, val<signed char> var_4, val<int> var_10, val<int> zero, val<int*> var_12, val<short*> var_13, val<bool*> var_14, val<unsigned short*> var_15) {
    *var_12 = min((((/* implicit */val<int>) ((val<signed char>) ((val<long long int>) var_4)))), (((var_10) ^ (((/* implicit */val<int>) (val<signed char>)104)))));
    *var_13 = ((/* implicit */val<short>) var_10);
    *var_14 *= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) 3994908168288432199LL))) ? (((/* implicit */val<int>) (val<signed char>)-126)) : (((/* implicit */val<int>) (val<short>)18958))))) ? (7064093798919082432LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-126)))));
    *var_15 *= ((/* implicit */val<unsigned short>) min((((/* implicit */val<long long int>) var_4)), (max((var_2), (var_2)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1060359167085089560LL;
signed char var_4 = (signed char)42;
int var_10 = 253273306;
int zero = 0;
int var_12 = -538424788;
short var_13 = (short)-31394;
bool var_14 = (bool)1;
unsigned short var_15 = (unsigned short)17901;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 42;
    value_mismatch |= var_13 != (short)-23334;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (unsigned short)30946;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
