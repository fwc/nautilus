/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1784
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1784
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
void test(val<unsigned int> var_0, val<signed char> var_1, val<unsigned int> var_2, val<unsigned int> var_3, val<int> var_5, val<int> var_6, val<unsigned int> var_7, val<signed char> var_8, val<unsigned char> var_9, val<bool> var_10, val<bool> var_11, val<unsigned short> var_12, val<long long int> var_13, val<int> zero, val<unsigned long long int*> var_14, val<unsigned long long int*> var_15, val<unsigned long long int*> var_16, val<unsigned int*> var_17, val<short*> var_18, val<bool*> var_19, val<long long int*> var_20, val<int*> var_21, val<unsigned int*> var_22) {
    *var_14 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<unsigned int>) ((((min((((/* implicit */val<int>) var_8)), (var_6))) + (2147483647))) >> (((/* implicit */val<int>) var_10))))) : (var_2)));
    if (((((/* implicit */val<int>) (!(((val<bool>) (val<short>)15259))))) != (((/* implicit */val<int>) var_10))))
    {
        *var_15 = ((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<bool>) ((2128488137) / (((/* implicit */val<int>) (val<unsigned char>)131))))) ? (((/* implicit */val<int>) var_11)) : (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_12)))))), (((/* implicit */val<int>) ((min((826476154753519129LL), (((/* implicit */val<long long int>) var_6)))) >= (((/* implicit */val<long long int>) var_3)))))));
        if (((/* implicit */val<bool>) ((val<unsigned short>) max((max((((/* implicit */val<int>) var_1)), (var_5))), (((/* implicit */val<int>) (val<unsigned char>)132))))))
        {
            *var_16 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_12)), (min((var_2), (((/* implicit */val<unsigned int>) var_8))))))) ? ((+(((((/* implicit */val<int>) var_9)) - (((/* implicit */val<int>) var_1)))))) : (((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12))) - (var_7)))))));
            *var_17 = ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) -1222525730)) ? (var_0) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))))), (min((((/* implicit */val<unsigned int>) (val<unsigned char>)94)), (var_0)))))) ? (((((var_7) << (((((/* implicit */val<int>) var_12)) - (38156))))) & (((/* implicit */val<unsigned int>) var_6)))) : ((~(4294967295U))));
            *var_18 = ((/* implicit */val<short>) var_9);
        }

    }
    else
    {
        *var_19 += ((/* implicit */val<bool>) var_3);
        *var_20 = ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned char>) ((val<signed char>) var_11))), (var_9)));
        *var_21 = ((/* implicit */val<int>) var_10);
    }

    *var_22 = ((((/* implicit */val<unsigned int>) 2128488137)) + (var_2));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2473762704U;
signed char var_1 = (signed char)-59;
unsigned int var_2 = 3029844574U;
unsigned int var_3 = 3620179890U;
int var_5 = 843771528;
int var_6 = -806104970;
unsigned int var_7 = 1315977410U;
signed char var_8 = (signed char)-45;
unsigned char var_9 = (unsigned char)229;
bool var_10 = (bool)0;
bool var_11 = (bool)1;
unsigned short var_12 = (unsigned short)38170;
long long int var_13 = 5456720241650104375LL;
int zero = 0;
unsigned long long int var_14 = 5551674074402204159ULL;
unsigned long long int var_15 = 8426337315725237737ULL;
unsigned long long int var_16 = 7239188772012606053ULL;
unsigned int var_17 = 2749863927U;
short var_18 = (short)-3203;
bool var_19 = (bool)1;
long long int var_20 = 3650010284927935133LL;
int var_21 = 901654129;
unsigned int var_22 = 2298190002U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1341378677ULL;
    value_mismatch |= var_15 != 8426337315725237737ULL;
    value_mismatch |= var_16 != 7239188772012606053ULL;
    value_mismatch |= var_17 != 2749863927U;
    value_mismatch |= var_18 != (short)-3203;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 229LL;
    value_mismatch |= var_21 != 0;
    value_mismatch |= var_22 != 863365415U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
