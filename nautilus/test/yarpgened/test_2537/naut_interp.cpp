/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2537
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2537
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
void test(val<signed char> var_0, val<unsigned char> var_1, val<unsigned char> var_2, val<int> var_3, val<unsigned short> var_4, val<signed char> var_8, val<unsigned long long int> var_10, val<short> var_13, val<unsigned long long int> var_14, val<short> var_15, val<int> zero, val<signed char*> var_18, val<unsigned short*> var_19, val<unsigned int*> var_20, val<unsigned long long int*> var_21, val<unsigned short*> var_22) {
    *var_18 = ((/* implicit */val<signed char>) ((10377991573697582205ULL) / (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13)))));
    if (((/* implicit */val<bool>) (~(((((/* implicit */val<bool>) var_0)) ? (max((((/* implicit */val<int>) var_4)), (var_3))) : (((/* implicit */val<int>) var_8)))))))
    {
        *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_13)) ? (var_14) : (var_14)));
        if (((/* implicit */val<bool>) var_10))
        {
            *var_20 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_1)) * (((/* implicit */val<int>) var_1))));
            *var_21 = ((/* implicit */val<unsigned long long int>) (~((+(((/* implicit */val<int>) var_15))))));
            *var_22 = ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) (val<bool>)1)), (var_2))))));
        }

    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
unsigned char var_1 = (unsigned char)73;
unsigned char var_2 = (unsigned char)109;
int var_3 = -807162959;
unsigned short var_4 = (unsigned short)63933;
signed char var_8 = (signed char)33;
unsigned long long int var_10 = 10218892920733139545ULL;
short var_13 = (short)-24297;
unsigned long long int var_14 = 6381904783466941100ULL;
short var_15 = (short)-23794;
int zero = 0;
signed char var_18 = (signed char)-26;
unsigned short var_19 = (unsigned short)13171;
unsigned int var_20 = 1105824852U;
unsigned long long int var_21 = 10711872485524260087ULL;
unsigned short var_22 = (unsigned short)61825;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)0;
    value_mismatch |= var_19 != (unsigned short)51884;
    value_mismatch |= var_20 != 5329U;
    value_mismatch |= var_21 != 23793ULL;
    value_mismatch |= var_22 != (unsigned short)65535;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_8, var_10, var_13, var_14, var_15, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
