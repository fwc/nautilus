/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3485
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3485
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
void test(val<short> var_1, val<short> var_2, val<unsigned int> var_3, val<short> var_4, val<short> var_6, val<unsigned long long int> var_8, val<unsigned short> var_10, val<bool> var_11, val<bool> var_12, val<bool> var_13, val<unsigned int> var_14, val<unsigned long long int> var_16, val<unsigned long long int> var_17, val<int> zero, val<signed char*> var_19, val<short*> var_20, val<unsigned int*> var_21, val<unsigned char*> var_22, val<signed char*> var_23) {
    *var_19 = ((/* implicit */val<signed char>) var_11);
    *var_20 = ((/* implicit */val<short>) min((*var_20), (((/* implicit */val<short>) (+(max((((((/* implicit */val<bool>) (val<signed char>)127)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_13)))), (((/* implicit */val<int>) var_13)))))))));
    if (((/* implicit */val<bool>) (val<unsigned short>)57506))
    {
        *var_21 = ((/* implicit */val<unsigned int>) min((*var_21), (min((((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)(-127 - 1)))) : (2573992852U))), (((/* implicit */val<unsigned int>) min((((((/* implicit */val<int>) var_1)) / (((/* implicit */val<int>) var_1)))), (((/* implicit */val<int>) max((((/* implicit */val<signed char>) var_12)), ((val<signed char>)127)))))))))));
        *var_22 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) max((((/* implicit */val<int>) ((((/* implicit */val<int>) var_6)) == (((/* implicit */val<int>) (val<signed char>)-123))))), (((((/* implicit */val<bool>) (val<signed char>)-125)) ? (((/* implicit */val<int>) (val<signed char>)-110)) : (((/* implicit */val<int>) (val<signed char>)-127))))))) ? (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) 0LL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) : (0LL))) >> (((var_3) - (1786624230U)))))) : (((((((/* implicit */val<bool>) (val<signed char>)-101)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)65523))) : (var_17))) << (((((((/* implicit */val<bool>) var_17)) ? (var_16) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))))) - (7149320483772610108ULL)))))));
        *var_23 = ((/* implicit */val<signed char>) max((*var_23), (((/* implicit */val<signed char>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)13)) ? (((/* implicit */val<int>) (val<unsigned short>)65507)) : (((/* implicit */val<int>) (val<unsigned short>)17))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))) : (((((/* implicit */val<bool>) var_8)) ? (var_8) : (((/* implicit */val<unsigned long long int>) var_14)))))) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4587;
short var_2 = (short)31693;
unsigned int var_3 = 1786624293U;
short var_4 = (short)-4487;
short var_6 = (short)-21009;
unsigned long long int var_8 = 16323158660598166370ULL;
unsigned short var_10 = (unsigned short)20445;
bool var_11 = (bool)0;
bool var_12 = (bool)1;
bool var_13 = (bool)0;
unsigned int var_14 = 10667452U;
unsigned long long int var_16 = 7149320483772610167ULL;
unsigned long long int var_17 = 1698088493214876493ULL;
int zero = 0;
signed char var_19 = (signed char)-74;
short var_20 = (short)20787;
unsigned int var_21 = 3474869040U;
unsigned char var_22 = (unsigned char)185;
signed char var_23 = (signed char)54;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)0;
    value_mismatch |= var_20 != (short)0;
    value_mismatch |= var_21 != 1U;
    value_mismatch |= var_22 != (unsigned char)0;
    value_mismatch |= var_23 != (signed char)54;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_6, var_8, var_10, var_11, var_12, var_13, var_14, var_16, var_17, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
