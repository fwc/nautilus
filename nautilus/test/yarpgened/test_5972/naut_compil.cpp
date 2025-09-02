/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5972
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5972
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
void test(val<long long int> var_0, val<signed char> var_1, val<short> var_2, val<bool> var_5, val<unsigned short> var_6, val<unsigned char> var_7, val<int> var_8, val<bool> var_9, val<unsigned int> var_10, val<unsigned char> var_12, val<short> var_13, val<int> var_14, val<signed char> var_15, val<short> var_16, val<int> var_17, val<unsigned int> var_18, val<unsigned int> var_19, val<int> zero, val<bool*> var_20, val<unsigned int*> var_21, val<bool*> var_22, val<int*> var_23, val<long long int*> var_24, val<signed char*> var_25) {
    *var_20 = ((((min((var_18), (((/* implicit */val<unsigned int>) var_12)))) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(var_5))))))) != (((/* implicit */val<unsigned int>) ((var_9) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_9))))));
    *var_21 = ((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_16))));
    if (((/* implicit */val<bool>) var_17))
    {
        *var_22 = ((/* implicit */val<bool>) min((*var_22), (((/* implicit */val<bool>) min((((((/* implicit */val<bool>) min((var_19), (((/* implicit */val<unsigned int>) var_13))))) ? (((/* implicit */val<int>) ((val<signed char>) var_15))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_18)) && (((/* implicit */val<bool>) var_2))))))), (((/* implicit */val<int>) var_13)))))));
        *var_23 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) min((var_0), (((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) var_8)), (var_19))))))) || (((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<signed char>)-64)))))));
        *var_24 = ((/* implicit */val<long long int>) min((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_13))) : (var_10)))) || (((((/* implicit */val<bool>) var_7)) && (((/* implicit */val<bool>) 1257162230U)))))), (((((/* implicit */val<int>) var_2)) <= (((((/* implicit */val<bool>) var_18)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_5))))))));
        *var_25 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_13)) ? (var_8) : (var_17))))))), (((((/* implicit */val<unsigned int>) max((var_14), (((/* implicit */val<int>) var_7))))) % (min((((/* implicit */val<unsigned int>) (val<signed char>)-65)), (var_18)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -332622753112503982LL;
signed char var_1 = (signed char)-26;
short var_2 = (short)1349;
bool var_5 = (bool)1;
unsigned short var_6 = (unsigned short)56213;
unsigned char var_7 = (unsigned char)84;
int var_8 = 1315325638;
bool var_9 = (bool)0;
unsigned int var_10 = 3778393605U;
unsigned char var_12 = (unsigned char)11;
short var_13 = (short)-18176;
int var_14 = 1128519253;
signed char var_15 = (signed char)93;
short var_16 = (short)-17971;
int var_17 = 174418142;
unsigned int var_18 = 4093594808U;
unsigned int var_19 = 2825292724U;
int zero = 0;
bool var_20 = (bool)0;
unsigned int var_21 = 2138786187U;
bool var_22 = (bool)1;
int var_23 = 1623655002;
long long int var_24 = -1061237888129830455LL;
signed char var_25 = (signed char)-39;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != 17970U;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != 1;
    value_mismatch |= var_24 != 0LL;
    value_mismatch |= var_25 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, var_6, var_7, var_8, var_9, var_10, var_12, var_13, var_14, var_15, var_16, var_17, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
