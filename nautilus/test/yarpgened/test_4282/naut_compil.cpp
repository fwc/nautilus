/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4282
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4282
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
void test(val<unsigned int> var_8, val<unsigned long long int> var_11, val<int> zero, val<unsigned int*> var_13, val<bool*> var_14, val<unsigned int*> var_15) {
    *var_13 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned char>)254)) && (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -7004495409013926064LL)) ? (((/* implicit */val<int>) (val<signed char>)70)) : (((/* implicit */val<int>) (val<unsigned char>)14))))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)241)) ? (226673644074893133ULL) : (((/* implicit */val<unsigned long long int>) var_8)))))))));
    if (((/* implicit */val<bool>) var_11))
    {
        *var_14 = ((/* implicit */val<bool>) max((2210026972U), (((/* implicit */val<unsigned int>) (val<unsigned char>)14))));
        *var_15 = ((/* implicit */val<unsigned int>) (val<short>)30);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3506734749U;
unsigned long long int var_11 = 11024760816603198909ULL;
int zero = 0;
unsigned int var_13 = 1108742681U;
bool var_14 = (bool)1;
unsigned int var_15 = 282211000U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1U;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != 30U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_11, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
