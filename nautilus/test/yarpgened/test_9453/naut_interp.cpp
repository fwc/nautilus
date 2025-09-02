/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9453
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9453
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
void test(val<short> var_0, val<signed char> var_4, val<unsigned long long int> var_5, val<int> var_6, val<bool> var_9, val<signed char> var_10, val<unsigned int> var_11, val<unsigned int> var_12, val<int> var_15, val<int> zero, val<unsigned int*> var_18, val<bool*> var_19, val<unsigned short*> var_20, val<unsigned int*> var_21, val<signed char*> var_22) {
    if (((/* implicit */val<bool>) var_12))
    {
        *var_18 = ((/* implicit */val<unsigned int>) ((val<unsigned long long int>) var_0));
        *var_19 *= ((/* implicit */val<bool>) ((var_9) ? (((/* implicit */val<int>) (((-(3785936079746974657LL))) < (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) -738024036)) || (((/* implicit */val<bool>) 738024015))))))))) : (max((var_6), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 3086192427U)))))))));
        *var_20 = ((/* implicit */val<unsigned short>) min((var_11), (((/* implicit */val<unsigned int>) var_4))));
    }

    if (((/* implicit */val<bool>) var_5))
    {
        *var_21 += ((/* implicit */val<unsigned int>) (~(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -1302454075)) ? (((/* implicit */val<int>) (val<unsigned short>)14296)) : (var_15)))) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_10))))));
        *var_22 = ((/* implicit */val<signed char>) var_11);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14823;
signed char var_4 = (signed char)-74;
unsigned long long int var_5 = 16137641679332973360ULL;
int var_6 = 1018454059;
bool var_9 = (bool)1;
signed char var_10 = (signed char)4;
unsigned int var_11 = 4163562095U;
unsigned int var_12 = 1103347393U;
int var_15 = -1028524200;
int zero = 0;
unsigned int var_18 = 522864642U;
bool var_19 = (bool)0;
unsigned short var_20 = (unsigned short)33213;
unsigned int var_21 = 1918835774U;
signed char var_22 = (signed char)-89;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 4294952473U;
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != (unsigned short)60015;
    value_mismatch |= var_21 != 1918835769U;
    value_mismatch |= var_22 != (signed char)111;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_6, var_9, var_10, var_11, var_12, var_15, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
