/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8192
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8192
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
void test(val<long long int> var_2, val<unsigned int> var_11, val<unsigned int> var_13, val<signed char> var_14, val<unsigned int> var_16, val<unsigned short> var_17, val<int> zero, val<long long int*> var_20, val<signed char*> var_21, val<unsigned short*> var_22, val<short*> var_23) {
    if (((/* implicit */val<bool>) var_13))
    {
        *var_20 += ((/* implicit */val<long long int>) var_14);
        *var_21 -= ((/* implicit */val<signed char>) (val<unsigned char>)26);
    }

    *var_22 |= ((/* implicit */val<unsigned short>) min((min((((var_2) & (((/* implicit */val<long long int>) var_16)))), (((val<long long int>) var_17)))), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((val<short>) var_13))) >> (((var_11) - (2327651622U))))))));
    *var_23 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) (val<unsigned short>)60283))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2616960713021991185LL;
unsigned int var_11 = 2327651639U;
unsigned int var_13 = 3091551323U;
signed char var_14 = (signed char)95;
unsigned int var_16 = 1674733439U;
unsigned short var_17 = (unsigned short)13324;
int zero = 0;
long long int var_20 = -598081880515156848LL;
signed char var_21 = (signed char)-6;
unsigned short var_22 = (unsigned short)18772;
short var_23 = (short)26701;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -598081880515156753LL;
    value_mismatch |= var_21 != (signed char)-32;
    value_mismatch |= var_22 != (unsigned short)18772;
    value_mismatch |= var_23 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_11, var_13, var_14, var_16, var_17, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
