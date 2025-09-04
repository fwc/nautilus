/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8214
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8214
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
void test(val<bool> var_0, val<long long int> var_2, val<unsigned long long int> var_3, val<unsigned char> var_4, val<int> var_5, val<signed char> var_7, val<unsigned long long int> var_8, val<unsigned long long int> var_11, val<bool> var_14, val<unsigned long long int> var_16, val<long long int> var_18, val<int> zero, val<unsigned char*> var_19, val<unsigned char*> var_20, val<int*> var_21, val<unsigned short*> var_22, val<short*> var_23, val<long long int*> var_24, val<unsigned short*> var_25, val<signed char*> var_26) {
    if (min(((val<bool>)1), ((val<bool>)1)))
    {
        *var_19 = ((/* implicit */val<unsigned char>) ((var_18) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0)))));
        *var_20 -= ((/* implicit */val<unsigned char>) min((((/* implicit */val<int>) var_14)), ((+(((/* implicit */val<int>) ((((/* implicit */val<bool>) var_11)) && (((/* implicit */val<bool>) var_3)))))))));
        *var_21 = (-(((/* implicit */val<int>) (val<bool>)1)));
        *var_22 += ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) (val<bool>)1))));
    }

    *var_23 = ((/* implicit */val<short>) max((((/* implicit */val<unsigned short>) (val<bool>)1)), ((val<unsigned short>)12682)));
    *var_24 = min((((/* implicit */val<long long int>) ((val<signed char>) ((var_0) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (var_16))))), (((((/* implicit */val<bool>) var_4)) ? (var_2) : (((/* implicit */val<long long int>) max((((/* implicit */val<int>) var_7)), (var_5)))))));
    *var_25 += ((/* implicit */val<unsigned short>) (((!(((/* implicit */val<bool>) var_5)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (min((((/* implicit */val<unsigned long long int>) min((var_7), (((/* implicit */val<signed char>) var_0))))), ((+(var_8)))))));
    *var_26 = ((/* implicit */val<signed char>) (-(((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) (!((val<bool>)1)))) : (((/* implicit */val<int>) max((((/* implicit */val<signed char>) (val<bool>)1)), ((val<signed char>)-64))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
long long int var_2 = 6049875400443751332LL;
unsigned long long int var_3 = 11644244483839117033ULL;
unsigned char var_4 = (unsigned char)234;
int var_5 = 1785172574;
signed char var_7 = (signed char)104;
unsigned long long int var_8 = 7869563133219794955ULL;
unsigned long long int var_11 = 14690332398749024334ULL;
bool var_14 = (bool)1;
unsigned long long int var_16 = 4140099104666796051ULL;
long long int var_18 = 4692939628090966767LL;
int zero = 0;
unsigned char var_19 = (unsigned char)216;
unsigned char var_20 = (unsigned char)122;
int var_21 = -96689615;
unsigned short var_22 = (unsigned short)49694;
short var_23 = (short)11509;
long long int var_24 = -4349922466935151542LL;
unsigned short var_25 = (unsigned short)6276;
signed char var_26 = (signed char)3;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)0;
    value_mismatch |= var_20 != (unsigned char)121;
    value_mismatch |= var_21 != -1;
    value_mismatch |= var_22 != (unsigned short)49693;
    value_mismatch |= var_23 != (short)12682;
    value_mismatch |= var_24 != 19LL;
    value_mismatch |= var_25 != (unsigned short)6276;
    value_mismatch |= var_26 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_7, var_8, var_11, var_14, var_16, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26);
  checksum();
  assert(!value_mismatch);
}
