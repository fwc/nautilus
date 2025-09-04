/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8867
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8867
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
void test(val<unsigned char> var_0, val<unsigned short> var_1, val<unsigned int> var_2, val<short> var_3, val<unsigned short> var_4, val<long long int> var_5, val<int> var_6, val<signed char> var_7, val<long long int> var_8, val<unsigned long long int> var_9, val<bool> var_10, val<int> zero, val<unsigned int*> var_11, val<bool*> var_12, val<short*> var_13, val<unsigned int*> var_14, val<bool*> var_15, val<unsigned long long int*> var_16, val<unsigned long long int*> var_17, val<unsigned char*> var_18, val<int*> var_19, val<short*> var_20, val<long long int*> var_21, val<unsigned char*> var_22, val<long long int*> var_23, val<unsigned long long int*> var_24, val<signed char*> var_25) {
    *var_11 -= ((/* implicit */val<unsigned int>) (((-(((/* implicit */val<int>) var_0)))) < ((~(((/* implicit */val<int>) (val<short>)-1))))));
    if (((((/* implicit */val<int>) var_1)) < (((val<int>) var_4))))
    {
        *var_12 = ((/* implicit */val<bool>) min((*var_12), (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<short>)-2732))))) : (((((/* implicit */val<bool>) var_2)) ? (min((((/* implicit */val<unsigned long long int>) (val<short>)126)), (144114088564228096ULL))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_10)) % (((/* implicit */val<int>) var_4))))))))))));
        *var_13 = ((/* implicit */val<short>) var_5);
    }
    else
    {
        *var_14 = ((/* implicit */val<unsigned int>) (+((+((~(((/* implicit */val<int>) var_4))))))));
        *var_15 = ((/* implicit */val<bool>) min(((~(-568224989700517234LL))), (var_5)));
        *var_16 = ((/* implicit */val<unsigned long long int>) min((2752248699356861795LL), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_10)) : ((+(((/* implicit */val<int>) var_0)))))))));
    }

    *var_17 = ((/* implicit */val<unsigned long long int>) (-(-9223372036854775804LL)));
    if (((/* implicit */val<bool>) min((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 14961438052440138128ULL)) ? (((/* implicit */val<int>) (val<short>)-147)) : (var_6)))) ? (((((/* implicit */val<bool>) 127LL)) ? (127LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))))), (((((/* implicit */val<bool>) min((var_9), (((/* implicit */val<unsigned long long int>) var_5))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) min((var_10), (var_10))))) : (var_5))))))
    {
        *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (~((((val<bool>)1) ? (((/* implicit */val<int>) (val<unsigned short>)25618)) : (((/* implicit */val<int>) var_10))))))) ? (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_3))))) : ((~(3485306021269413488ULL)))));
        *var_19 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_2)) ? (min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_6)) ? (var_2) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7)))))), (((var_10) ? (((/* implicit */val<long long int>) var_6)) : (1099511627648LL))))) : (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_4)))))));
        *var_20 = ((/* implicit */val<short>) (~(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_7)) : (var_6)))) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<short>)-2190))))));
        *var_21 = ((/* implicit */val<long long int>) var_10);
    }
    else
    {
        *var_22 = ((/* implicit */val<unsigned char>) (~(var_6)));
        *var_23 -= ((/* implicit */val<long long int>) 3485306021269413494ULL);
        *var_24 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<long long int>) var_9))) ? (var_2) : (((/* implicit */val<unsigned int>) var_6))));
        *var_25 = ((/* implicit */val<signed char>) (+((+(((/* implicit */val<int>) min(((val<unsigned short>)6144), ((val<unsigned short>)6144))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
unsigned short var_1 = (unsigned short)52511;
unsigned int var_2 = 1123091373U;
short var_3 = (short)23808;
unsigned short var_4 = (unsigned short)19067;
long long int var_5 = 9008746915745427834LL;
int var_6 = -563533532;
signed char var_7 = (signed char)38;
long long int var_8 = -8335729779723984207LL;
unsigned long long int var_9 = 15743830092666785307ULL;
bool var_10 = (bool)0;
int zero = 0;
unsigned int var_11 = 3460088895U;
bool var_12 = (bool)0;
short var_13 = (short)-26843;
unsigned int var_14 = 999133139U;
bool var_15 = (bool)0;
unsigned long long int var_16 = 5361792598661319592ULL;
unsigned long long int var_17 = 4127392032497764601ULL;
unsigned char var_18 = (unsigned char)224;
int var_19 = -1472282466;
short var_20 = (short)-24158;
long long int var_21 = -7987100064520344853LL;
unsigned char var_22 = (unsigned char)15;
long long int var_23 = 5467027112343446388LL;
unsigned long long int var_24 = 2058263031375675318ULL;
signed char var_25 = (signed char)-48;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 3460088894U;
    value_mismatch |= var_12 != (bool)0;
    value_mismatch |= var_13 != (short)-26843;
    value_mismatch |= var_14 != 4294948228U;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 0ULL;
    value_mismatch |= var_17 != 9223372036854775804ULL;
    value_mismatch |= var_18 != (unsigned char)224;
    value_mismatch |= var_19 != -1472282466;
    value_mismatch |= var_20 != (short)-24158;
    value_mismatch |= var_21 != -7987100064520344853LL;
    value_mismatch |= var_22 != (unsigned char)219;
    value_mismatch |= var_23 != 1981721091074032894LL;
    value_mismatch |= var_24 != 1123091373ULL;
    value_mismatch |= var_25 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
