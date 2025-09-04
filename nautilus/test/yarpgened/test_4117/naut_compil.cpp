/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4117
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4117
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
void test(val<bool> var_3, val<unsigned int> var_6, val<unsigned short> var_7, val<unsigned int> var_9, val<signed char> var_14, val<bool> var_15, val<bool> var_16, val<int> zero, val<signed char*> var_18, val<int*> var_19, val<unsigned long long int*> var_20, val<signed char*> var_21) {
    *var_18 += ((/* implicit */val<signed char>) (((((+(((/* implicit */val<int>) var_14)))) == (((/* implicit */val<int>) var_16)))) ? (((/* implicit */val<int>) ((val<unsigned short>) (!(var_15))))) : (((/* implicit */val<int>) (val<bool>)1))));
    if (((/* implicit */val<bool>) ((((((/* implicit */val<bool>) (~(var_6)))) || (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_7)) & (((/* implicit */val<int>) (val<bool>)1))))))) ? (2147483647U) : ((+(3306067519U))))))
    {
        *var_19 = ((/* implicit */val<int>) var_9);
        *var_20 = ((/* implicit */val<unsigned long long int>) (((+(((2147483647) - (((/* implicit */val<int>) (val<unsigned short>)65522)))))) + ((-(((/* implicit */val<int>) var_3))))));
        *var_21 = ((/* implicit */val<signed char>) (-(((/* implicit */val<int>) var_15))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)0;
unsigned int var_6 = 2437249825U;
unsigned short var_7 = (unsigned short)62306;
unsigned int var_9 = 4232842952U;
signed char var_14 = (signed char)32;
bool var_15 = (bool)0;
bool var_16 = (bool)1;
int zero = 0;
signed char var_18 = (signed char)-117;
int var_19 = -933887501;
unsigned long long int var_20 = 9670490814762575324ULL;
signed char var_21 = (signed char)106;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)-116;
    value_mismatch |= var_19 != -62124344;
    value_mismatch |= var_20 != 2147418125ULL;
    value_mismatch |= var_21 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_7, var_9, var_14, var_15, var_16, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
