/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7967
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7967
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
void test(val<unsigned long long int> var_5, val<signed char> var_7, val<unsigned int> var_9, val<short> var_10, val<signed char> var_14, val<bool> var_17, val<int> zero, val<int*> var_18, val<unsigned long long int*> var_19, val<bool*> var_20) {
    *var_18 = ((((/* implicit */val<int>) (val<unsigned short>)65535)) ^ (((/* implicit */val<int>) (val<short>)10236)));
    if (((/* implicit */val<bool>) var_14))
    {
        *var_19 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<long long int>) var_9))) ? (max((((/* implicit */val<unsigned long long int>) var_17)), (var_5))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<signed char>)28)) ? (((/* implicit */val<int>) (val<short>)-5482)) : (((/* implicit */val<int>) (val<short>)19401)))))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_10)))))))) : ((+(((/* implicit */val<int>) ((val<short>) var_9)))))));
        *var_20 = ((/* implicit */val<bool>) (+((~((-(((/* implicit */val<int>) var_7))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10037180989970804443ULL;
signed char var_7 = (signed char)48;
unsigned int var_9 = 1492360121U;
short var_10 = (short)-15345;
signed char var_14 = (signed char)115;
bool var_17 = (bool)0;
int zero = 0;
int var_18 = -85642448;
unsigned long long int var_19 = 4961095483478729463ULL;
bool var_20 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 55299;
    value_mismatch |= var_19 != 0ULL;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, var_9, var_10, var_14, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
}
