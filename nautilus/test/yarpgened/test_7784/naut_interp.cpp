/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7784
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7784
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
void test(val<bool> var_0, val<short> var_1, val<short> var_2, val<unsigned short> var_4, val<int> var_5, val<short> var_7, val<long long int> var_9, val<signed char> var_10, val<int> zero, val<short*> var_12, val<int*> var_13, val<int*> var_14, val<bool*> var_15) {
    *var_12 &= ((/* implicit */val<short>) var_0);
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) 4ULL)) ? ((-(((((/* implicit */val<bool>) 8343607738704510381LL)) ? (-8343607738704510382LL) : (((/* implicit */val<long long int>) 1195804527U)))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) 10226438916595208263ULL)))))))))
    {
        *var_13 = ((/* implicit */val<int>) (((!(((/* implicit */val<bool>) ((var_9) - (((/* implicit */val<long long int>) var_5))))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<int>) min((var_4), (((/* implicit */val<unsigned short>) var_1))))) - (((((/* implicit */val<bool>) 6480358160838179927ULL)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_7))))))) : (((((/* implicit */val<long long int>) 1195804527U)) + (8343607738704510361LL)))));
        *var_14 &= ((/* implicit */val<int>) (+(((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned char>)254)) / (((/* implicit */val<int>) (val<signed char>)124))))) | (((val<unsigned int>) var_2))))));
        *var_15 &= ((/* implicit */val<bool>) var_10);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
short var_1 = (short)32222;
short var_2 = (short)11834;
unsigned short var_4 = (unsigned short)48906;
int var_5 = -286141725;
short var_7 = (short)6823;
long long int var_9 = -7826615154088804373LL;
signed char var_10 = (signed char)60;
int zero = 0;
short var_12 = (short)10764;
int var_13 = -843188943;
int var_14 = -182199576;
bool var_15 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)0;
    value_mismatch |= var_13 != 2046117128;
    value_mismatch |= var_14 != 2600;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_7, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
