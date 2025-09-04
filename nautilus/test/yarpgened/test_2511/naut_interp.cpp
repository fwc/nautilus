/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2511
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2511
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
void test(val<long long int> var_8, val<int> zero, val<short*> var_15, val<unsigned long long int*> var_16, val<unsigned long long int*> var_17, val<int*> var_18) {
    if (((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<signed char>)-1)))))
    {
        *var_15 |= ((/* implicit */val<short>) (!(((/* implicit */val<bool>) min((((/* implicit */val<short>) ((val<signed char>) (val<short>)9926))), (min(((val<short>)-14468), (((/* implicit */val<short>) (val<bool>)1)))))))));
        *var_16 = ((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (val<short>)9926))));
    }

    *var_17 = ((/* implicit */val<unsigned long long int>) (((!(((/* implicit */val<bool>) (val<short>)-9921)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)9926))) : (((1833997642U) << (((var_8) - (453132785084605550LL)))))));
    *var_18 = (+(((/* implicit */val<int>) (!(((/* implicit */val<bool>) 14140335731727495651ULL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 453132785084605576LL;
int zero = 0;
short var_15 = (short)30344;
unsigned long long int var_16 = 9805603082430742039ULL;
unsigned long long int var_17 = 14866068995006045695ULL;
int var_18 = 573052642;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)30344;
    value_mismatch |= var_16 != 9805603082430742039ULL;
    value_mismatch |= var_17 != 671088640ULL;
    value_mismatch |= var_18 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
