/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 998
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=998
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
void test(val<bool> var_0, val<unsigned short> var_1, val<bool> var_3, val<unsigned short> var_4, val<bool> var_5, val<unsigned char> var_6, val<unsigned long long int> var_7, val<signed char> var_8, val<unsigned int> var_9, val<signed char> var_10, val<unsigned char> var_11, val<int> zero, val<unsigned short*> var_12, val<short*> var_13, val<long long int*> var_14, val<long long int*> var_15, val<unsigned short*> var_16, val<signed char*> var_17) {
    if (((/* implicit */val<bool>) (+(((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_3))))) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))) != (var_9)))))))))
    {
        *var_12 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_10)) ^ (((/* implicit */val<int>) var_4))))) ? (((/* implicit */val<int>) ((val<signed char>) var_3))) : (((/* implicit */val<int>) var_5)))))));
        *var_13 = ((/* implicit */val<short>) 3725892715U);
    }

    *var_14 |= ((/* implicit */val<long long int>) ((val<unsigned short>) ((((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_8)), (var_4)))) << (((((((((/* implicit */val<int>) var_8)) + (2147483647))) << (((var_9) - (2468817257U))))) - (2147483593))))));
    *var_15 = ((/* implicit */val<long long int>) var_7);
    if (((/* implicit */val<bool>) var_11))
    {
        *var_16 = ((/* implicit */val<unsigned short>) max((*var_16), (((val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_6)) ^ (((/* implicit */val<int>) (val<short>)-31515))))) ? (((/* implicit */val<int>) ((((/* implicit */val<int>) var_0)) < (((/* implicit */val<int>) var_6))))) : (((/* implicit */val<int>) var_4)))))));
        *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_1)) * (((/* implicit */val<int>) var_5))))), (max((((/* implicit */val<unsigned long long int>) var_0)), (var_7)))))) ? ((+(((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_3)), (var_4)))))) : (((/* implicit */val<int>) var_8))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned short var_1 = (unsigned short)52332;
bool var_3 = (bool)0;
unsigned short var_4 = (unsigned short)55180;
bool var_5 = (bool)0;
unsigned char var_6 = (unsigned char)57;
unsigned long long int var_7 = 15505265264110491663ULL;
signed char var_8 = (signed char)-42;
unsigned int var_9 = 2468817257U;
signed char var_10 = (signed char)37;
unsigned char var_11 = (unsigned char)33;
int zero = 0;
unsigned short var_12 = (unsigned short)18150;
short var_13 = (short)-30327;
long long int var_14 = -7168699851672600575LL;
long long int var_15 = 2510225470145431177LL;
unsigned short var_16 = (unsigned short)35350;
signed char var_17 = (signed char)54;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)1;
    value_mismatch |= var_13 != (short)-25493;
    value_mismatch |= var_14 != -7168699851672600575LL;
    value_mismatch |= var_15 != -2941478809599059953LL;
    value_mismatch |= var_16 != (unsigned short)35350;
    value_mismatch |= var_17 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
