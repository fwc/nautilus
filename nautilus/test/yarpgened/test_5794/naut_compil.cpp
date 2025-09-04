/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5794
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5794
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
void test(val<unsigned long long int> var_2, val<unsigned char> var_14, val<signed char> var_15, val<int> zero, val<short*> var_17, val<unsigned long long int*> var_18) {
    *var_17 = ((/* implicit */val<short>) (-(((((/* implicit */val<bool>) ((val<unsigned long long int>) var_14))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((7469998552803708364ULL) >= (((/* implicit */val<unsigned long long int>) 3286355739U)))))) : (var_2)))));
    *var_18 = ((/* implicit */val<unsigned long long int>) max((*var_18), (((/* implicit */val<unsigned long long int>) var_15))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11654110196076443466ULL;
unsigned char var_14 = (unsigned char)119;
signed char var_15 = (signed char)-70;
int zero = 0;
short var_17 = (short)-26240;
unsigned long long int var_18 = 4259326180410780236ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)-1;
    value_mismatch |= var_18 != 18446744073709551546ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_14, var_15, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
