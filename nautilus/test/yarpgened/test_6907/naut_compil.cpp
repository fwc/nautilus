/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6907
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6907
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
void test(val<long long int> var_2, val<unsigned int> var_3, val<unsigned long long int> var_6, val<int> var_8, val<bool> var_10, val<unsigned long long int> var_11, val<int> zero, val<unsigned int*> var_13, val<unsigned int*> var_14, val<short*> var_15, val<long long int*> var_16, val<long long int*> var_17, val<long long int*> var_18) {
    *var_13 = ((/* implicit */val<unsigned int>) (~(max((((/* implicit */val<int>) ((val<signed char>) var_11))), (var_8)))));
    if (((/* implicit */val<bool>) (-(var_8))))
    {
        *var_14 = ((/* implicit */val<unsigned int>) ((val<unsigned long long int>) (val<unsigned char>)236));
        *var_15 = ((/* implicit */val<short>) (-(max((((/* implicit */val<unsigned long long int>) var_2)), (((((/* implicit */val<bool>) var_6)) ? (var_11) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10)))))))));
        *var_16 = ((val<long long int>) (+(var_3)));
        *var_17 = ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned long long int>) ((val<unsigned int>) ((val<unsigned int>) var_10)))), (max((((/* implicit */val<unsigned long long int>) 2147483647)), (3833026903921110367ULL)))));
    }

    *var_18 += ((/* implicit */val<long long int>) (~(3833026903921110363ULL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1868672708122278781LL;
unsigned int var_3 = 3616133125U;
unsigned long long int var_6 = 1149058584527498460ULL;
int var_8 = 916373499;
bool var_10 = (bool)0;
unsigned long long int var_11 = 5523769246268465294ULL;
int zero = 0;
unsigned int var_13 = 2146010990U;
unsigned int var_14 = 1326350480U;
short var_15 = (short)-1059;
long long int var_16 = -1358845755714935539LL;
long long int var_17 = 7535745282977268027LL;
long long int var_18 = -3981291190699023523LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 3378593796U;
    value_mismatch |= var_14 != 236U;
    value_mismatch |= var_15 != (short)-8334;
    value_mismatch |= var_16 != 3616133125LL;
    value_mismatch |= var_17 != 3833026903921110367LL;
    value_mismatch |= var_18 != -7814318094620133887LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_6, var_8, var_10, var_11, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
