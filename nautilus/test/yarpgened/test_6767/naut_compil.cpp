/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6767
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6767
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
void test(val<short> var_0, val<unsigned int> var_2, val<unsigned long long int> var_3, val<unsigned short> var_4, val<short> var_5, val<bool> var_6, val<unsigned char> var_8, val<short> var_9, val<int> zero, val<unsigned long long int*> var_10, val<signed char*> var_11, val<long long int*> var_12, val<signed char*> var_13, val<bool*> var_14, val<unsigned short*> var_15, val<short*> var_16, val<unsigned short*> var_17, val<long long int*> var_18) {
    if (((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) ((-8393161800580054878LL) | (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)19027)))))) ? ((~(((/* implicit */val<int>) (val<unsigned char>)225)))) : (((/* implicit */val<int>) var_8)))))))
    {
        *var_10 |= ((/* implicit */val<unsigned long long int>) var_2);
        if (((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) (~((+(((/* implicit */val<int>) (val<unsigned short>)2482))))))), (((((/* implicit */val<bool>) 18446744073709551615ULL)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((var_0), (var_0))))) : (3596169057U))))))
        {
            *var_11 = ((/* implicit */val<signed char>) ((13708926688960553249ULL) | (((var_6) ? (((((/* implicit */val<bool>) (val<short>)18990)) ? (var_3) : (var_3))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<short>)-18614)) / (((/* implicit */val<int>) var_4)))))))));
            *var_12 = ((/* implicit */val<long long int>) var_9);
        }

        *var_13 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) var_2)) <= (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)19))) / (((((/* implicit */val<bool>) var_0)) ? (var_3) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4)))))))));
        *var_14 = ((/* implicit */val<bool>) max((((/* implicit */val<short>) var_6)), (var_5)));
    }

    if (((((/* implicit */val<int>) var_6)) != (((/* implicit */val<int>) var_6))))
    {
        *var_15 = ((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) var_4))));
        *var_16 = ((/* implicit */val<short>) (+(((/* implicit */val<int>) var_8))));
        *var_17 -= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) : (((var_6) ? (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_0))))) : (max((((/* implicit */val<unsigned long long int>) var_0)), (575547276860356131ULL)))))));
    }

    *var_18 = ((((/* implicit */val<bool>) 575547276860356122ULL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)19))) : (-4509873028053286981LL));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16482;
unsigned int var_2 = 1168250763U;
unsigned long long int var_3 = 14184685025341903215ULL;
unsigned short var_4 = (unsigned short)30445;
short var_5 = (short)-16225;
bool var_6 = (bool)1;
unsigned char var_8 = (unsigned char)50;
short var_9 = (short)-24426;
int zero = 0;
unsigned long long int var_10 = 17080539892151583327ULL;
signed char var_11 = (signed char)-82;
long long int var_12 = 5408913087561583412LL;
signed char var_13 = (signed char)-85;
bool var_14 = (bool)1;
unsigned short var_15 = (unsigned short)49669;
short var_16 = (short)4122;
unsigned short var_17 = (unsigned short)14931;
long long int var_18 = -5950209851295601474LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 17080539893294667743ULL;
    value_mismatch |= var_11 != (signed char)111;
    value_mismatch |= var_12 != -24426LL;
    value_mismatch |= var_13 != (signed char)0;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (unsigned short)49669;
    value_mismatch |= var_16 != (short)4122;
    value_mismatch |= var_17 != (unsigned short)14931;
    value_mismatch |= var_18 != 19LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
