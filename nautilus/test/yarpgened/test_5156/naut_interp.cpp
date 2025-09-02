/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5156
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5156
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
void test(val<unsigned char> var_1, val<unsigned long long int> var_3, val<int> var_4, val<unsigned char> var_10, val<int> zero, val<unsigned int*> var_11, val<bool*> var_12, val<unsigned int*> var_13, val<long long int*> var_14, val<unsigned int*> var_15) {
    *var_11 = ((/* implicit */val<unsigned int>) min((*var_11), (((/* implicit */val<unsigned int>) ((val<short>) (+(((/* implicit */val<int>) (val<short>)-28449))))))));
    if ((val<bool>)1)
    {
        *var_12 = ((/* implicit */val<bool>) ((((((/* implicit */val<bool>) max((((/* implicit */val<unsigned short>) (val<bool>)1)), ((val<unsigned short>)11)))) ? (((/* implicit */val<int>) (val<short>)8)) : (var_4))) - (((/* implicit */val<int>) (val<unsigned char>)56))));
        *var_13 = ((/* implicit */val<unsigned int>) var_10);
    }
    else
    {
        *var_14 = ((/* implicit */val<long long int>) var_1);
        *var_15 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((val<unsigned short>) var_4))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned short>) ((2070412574U) > (((/* implicit */val<unsigned int>) 1117003802))))))) : (((((3956211653U) != (1110434437U))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 1807387222U)) ? (1076453930U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)30)))))) : (var_3)))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)176;
unsigned long long int var_3 = 15634594830198900861ULL;
int var_4 = -615374940;
unsigned char var_10 = (unsigned char)66;
int zero = 0;
unsigned int var_11 = 1541140848U;
bool var_12 = (bool)1;
unsigned int var_13 = 3953402353U;
long long int var_14 = 2779982433098460256LL;
unsigned int var_15 = 1737930099U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1541140848U;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 66U;
    value_mismatch |= var_14 != 2779982433098460256LL;
    value_mismatch |= var_15 != 1737930099U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
