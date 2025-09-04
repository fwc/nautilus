/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9844
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9844
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
void test(val<short> var_0, val<int> var_2, val<signed char> var_4, val<unsigned long long int> var_6, val<unsigned int> var_7, val<signed char> var_8, val<unsigned int> var_9, val<int> zero, val<long long int*> var_18, val<short*> var_19, val<signed char*> var_20, val<unsigned int*> var_21, val<short*> var_22) {
    *var_18 = ((/* implicit */val<long long int>) max((*var_18), (((/* implicit */val<long long int>) min((var_8), (((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) -413523572054535346LL))))))))));
    *var_19 = ((/* implicit */val<short>) -1169099918);
    if (((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_0)), (((val<unsigned long long int>) (!(((/* implicit */val<bool>) var_7))))))))
    {
        if (((/* implicit */val<bool>) var_2))
        {
            *var_20 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_4))));
            *var_21 &= var_9;
        }

        *var_22 *= ((/* implicit */val<short>) (((-(((val<unsigned int>) var_2)))) << (((var_6) - (4500821994536066023ULL)))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6235;
int var_2 = 616103962;
signed char var_4 = (signed char)29;
unsigned long long int var_6 = 4500821994536066030ULL;
unsigned int var_7 = 1190568527U;
signed char var_8 = (signed char)99;
unsigned int var_9 = 3576676509U;
int zero = 0;
long long int var_18 = -1616529282865165903LL;
short var_19 = (short)-4159;
signed char var_20 = (signed char)-16;
unsigned int var_21 = 3488835264U;
short var_22 = (short)2669;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 0LL;
    value_mismatch |= var_19 != (short)-3214;
    value_mismatch |= var_20 != (signed char)-16;
    value_mismatch |= var_21 != 3488835264U;
    value_mismatch |= var_22 != (short)2669;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_6, var_7, var_8, var_9, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
