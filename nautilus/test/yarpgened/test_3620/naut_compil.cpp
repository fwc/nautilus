/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3620
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3620
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
void test(val<unsigned long long int> var_3, val<unsigned char> var_7, val<unsigned long long int> var_8, val<signed char> var_9, val<unsigned char> var_12, val<int> zero, val<unsigned long long int*> var_14, val<short*> var_15, val<unsigned long long int*> var_16, val<short*> var_17, val<unsigned int*> var_18, val<bool*> var_19) {
    if (((/* implicit */val<bool>) var_3))
    {
        if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((((/* implicit */val<bool>) var_9)) ? ((+(((/* implicit */val<int>) (val<short>)(-32767 - 1))))) : (((/* implicit */val<int>) var_9)))) : (((/* implicit */val<int>) var_7)))))
        {
            *var_14 = ((/* implicit */val<unsigned long long int>) (val<unsigned short>)65524);
            *var_15 = ((/* implicit */val<short>) min((*var_15), (((/* implicit */val<short>) var_12))));
        }

        *var_16 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)-64)) ? (4294967291U) : (4294967295U))))))), (4294967278U)));
        *var_17 |= ((/* implicit */val<short>) -2555810578564037196LL);
    }

    *var_18 ^= ((/* implicit */val<unsigned int>) (+(max((((/* implicit */val<unsigned long long int>) min((18U), (((/* implicit */val<unsigned int>) var_7))))), (((((/* implicit */val<bool>) var_3)) ? (var_8) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_12)))))))));
    *var_19 = ((/* implicit */val<bool>) (~(235755809U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17635914290628826979ULL;
unsigned char var_7 = (unsigned char)20;
unsigned long long int var_8 = 2379155266007420266ULL;
signed char var_9 = (signed char)-67;
unsigned char var_12 = (unsigned char)4;
int zero = 0;
unsigned long long int var_14 = 16122143930630261529ULL;
short var_15 = (short)-11298;
unsigned long long int var_16 = 17264830517781379074ULL;
short var_17 = (short)-5384;
unsigned int var_18 = 2890843111U;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 65524ULL;
    value_mismatch |= var_15 != (short)-11298;
    value_mismatch |= var_16 != 4294967278ULL;
    value_mismatch |= var_17 != (short)-4100;
    value_mismatch |= var_18 != 1133612685U;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_8, var_9, var_12, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
