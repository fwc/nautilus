/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7541
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7541
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
void test(val<signed char> var_0, val<unsigned short> var_8, val<unsigned long long int> var_9, val<unsigned short> var_11, val<int> zero, val<unsigned char*> var_15, val<int*> var_16, val<signed char*> var_17) {
    *var_15 = ((/* implicit */val<unsigned char>) (~(((731344597787988253LL) >> (((((/* implicit */val<int>) var_11)) - (49550)))))));
    *var_16 |= ((/* implicit */val<int>) min((min((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_0))))), (var_9))), (((/* implicit */val<unsigned long long int>) ((val<unsigned char>) -731344597787988253LL)))));
    *var_17 = ((/* implicit */val<signed char>) ((((((/* implicit */val<int>) (val<signed char>)-42)) ^ (((/* implicit */val<int>) var_0)))) & ((+(((/* implicit */val<int>) var_8))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
unsigned short var_8 = (unsigned short)7009;
unsigned long long int var_9 = 15581234895046581021ULL;
unsigned short var_11 = (unsigned short)49600;
int zero = 0;
unsigned char var_15 = (unsigned char)146;
int var_16 = 1678920231;
signed char var_17 = (signed char)23;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)118;
    value_mismatch |= var_16 != 1678920231;
    value_mismatch |= var_17 != (signed char)96;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, var_9, var_11, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
