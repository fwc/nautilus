/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7151
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7151
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
void test(val<unsigned short> var_4, val<unsigned int> var_6, val<short> var_7, val<int> var_11, val<unsigned char> var_12, val<unsigned int> var_14, val<bool> var_15, val<unsigned long long int> var_16, val<int> zero, val<unsigned int*> var_19, val<int*> var_20, val<unsigned short*> var_21, val<long long int*> var_22, val<signed char*> var_23, val<signed char*> var_24, val<long long int*> var_25) {
    *var_19 -= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (+(((-3357939892051689236LL) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)26)))))))) ? (var_11) : (((((/* implicit */val<int>) (val<unsigned char>)38)) ^ (((/* implicit */val<int>) ((val<signed char>) (val<unsigned char>)0)))))));
    *var_20 = ((/* implicit */val<int>) (~(min((((((/* implicit */val<bool>) (val<short>)22456)) ? (((/* implicit */val<unsigned int>) 525580322)) : (var_6))), (((/* implicit */val<unsigned int>) ((var_11) & (((/* implicit */val<int>) var_7)))))))));
    if (((((/* implicit */val<bool>) var_16)) || (((/* implicit */val<bool>) var_14))))
    {
        if (((/* implicit */val<bool>) var_4))
        {
            *var_21 = ((/* implicit */val<unsigned short>) var_11);
            *var_22 = ((/* implicit */val<long long int>) (+((~((~(((/* implicit */val<int>) var_12))))))));
        }

        *var_23 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_4)) << (((var_15) ? (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<bool>)1)) == (((/* implicit */val<int>) (val<unsigned char>)255))))) : (var_11)))));
    }

    *var_24 = ((/* implicit */val<signed char>) var_15);
    *var_25 = ((/* implicit */val<long long int>) var_14);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)54968;
unsigned int var_6 = 179718785U;
short var_7 = (short)-24992;
int var_11 = -1103523585;
unsigned char var_12 = (unsigned char)244;
unsigned int var_14 = 1564956938U;
bool var_15 = (bool)1;
unsigned long long int var_16 = 8719963098825387702ULL;
int zero = 0;
unsigned int var_19 = 1634434559U;
int var_20 = -144615261;
unsigned short var_21 = (unsigned short)23519;
long long int var_22 = 8621531501037288351LL;
signed char var_23 = (signed char)107;
signed char var_24 = (signed char)103;
long long int var_25 = 2355450868479464096LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 2737958144U;
    value_mismatch |= var_20 != -525580323;
    value_mismatch |= var_21 != (unsigned short)37119;
    value_mismatch |= var_22 != 244LL;
    value_mismatch |= var_23 != (signed char)-72;
    value_mismatch |= var_24 != (signed char)1;
    value_mismatch |= var_25 != 1564956938LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_7, var_11, var_12, var_14, var_15, var_16, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
}
