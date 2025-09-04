/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5900
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5900
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
void test(val<unsigned int> var_1, val<unsigned short> var_2, val<unsigned long long int> var_8, val<long long int> var_11, val<signed char> var_17, val<int> zero, val<signed char*> var_19, val<int*> var_20, val<unsigned long long int*> var_21, val<short*> var_22) {
    *var_19 |= var_17;
    *var_20 = ((/* implicit */val<int>) var_1);
    *var_21 = var_8;
    *var_22 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)53940))))) : (((/* implicit */val<int>) var_2))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 731147947U;
unsigned short var_2 = (unsigned short)6449;
unsigned long long int var_8 = 12997468481461230714ULL;
long long int var_11 = -5912625898976339747LL;
signed char var_17 = (signed char)45;
int zero = 0;
signed char var_19 = (signed char)107;
int var_20 = 479180718;
unsigned long long int var_21 = 17132334154496416588ULL;
short var_22 = (short)3464;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)111;
    value_mismatch |= var_20 != 731147947;
    value_mismatch |= var_21 != 12997468481461230714ULL;
    value_mismatch |= var_22 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_8, var_11, var_17, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
