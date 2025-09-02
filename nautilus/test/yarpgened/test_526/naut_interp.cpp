/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 526
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=526
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
void test(val<bool> var_1, val<short> var_3, val<int> var_5, val<unsigned char> var_10, val<int> var_14, val<int> zero, val<signed char*> var_17, val<bool*> var_18) {
    *var_17 = ((/* implicit */val<signed char>) min((min((((/* implicit */val<int>) var_3)), (((((/* implicit */val<int>) var_3)) % (var_14))))), (((/* implicit */val<int>) ((val<unsigned short>) max((((/* implicit */val<long long int>) (val<short>)(-32767 - 1))), (3678103188514780043LL)))))));
    *var_18 = ((/* implicit */val<bool>) (~(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) (val<short>)0)) : (((/* implicit */val<int>) var_3))))) ? (max((var_5), (var_5))) : (((/* implicit */val<int>) var_1))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
short var_3 = (short)-7380;
int var_5 = -582299162;
unsigned char var_10 = (unsigned char)152;
int var_14 = 631253274;
int zero = 0;
signed char var_17 = (signed char)87;
bool var_18 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)44;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_10, var_14, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
