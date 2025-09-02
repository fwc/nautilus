/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 488
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=488
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
void test(val<unsigned short> var_1, val<unsigned int> var_3, val<unsigned int> var_4, val<unsigned char> var_5, val<unsigned int> var_9, val<int> zero, val<unsigned int*> var_10, val<unsigned int*> var_11, val<unsigned long long int*> var_12, val<unsigned short*> var_13, val<unsigned short*> var_14, val<unsigned int*> var_15) {
    *var_10 = var_3;
    *var_11 = ((/* implicit */val<unsigned int>) (~(9279653963413406143ULL)));
    if (((/* implicit */val<bool>) ((val<unsigned int>) ((((/* implicit */val<bool>) 9279653963413406143ULL)) ? (9279653963413406152ULL) : (9279653963413406152ULL)))))
    {
        *var_12 = ((val<unsigned long long int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9))))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_5)))))));
        *var_13 = var_1;
    }

    *var_14 = ((/* implicit */val<unsigned short>) ((val<unsigned int>) 10904034559981347374ULL));
    *var_15 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<unsigned long long int>) var_4)), (9167090110296145437ULL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)65347;
unsigned int var_3 = 2195063588U;
unsigned int var_4 = 4231890625U;
unsigned char var_5 = (unsigned char)241;
unsigned int var_9 = 1384880748U;
int zero = 0;
unsigned int var_10 = 1557188459U;
unsigned int var_11 = 2718723971U;
unsigned long long int var_12 = 3941167168086099506ULL;
unsigned short var_13 = (unsigned short)20930;
unsigned short var_14 = (unsigned short)6339;
unsigned int var_15 = 2523792501U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 2195063588U;
    value_mismatch |= var_11 != 3492986432U;
    value_mismatch |= var_12 != 0ULL;
    value_mismatch |= var_13 != (unsigned short)65347;
    value_mismatch |= var_14 != (unsigned short)25134;
    value_mismatch |= var_15 != 3492986397U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
