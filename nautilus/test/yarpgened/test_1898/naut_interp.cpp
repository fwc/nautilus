/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1898
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1898
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
void test(val<unsigned short> var_0, val<short> var_1, val<long long int> var_3, val<short> var_4, val<int> var_5, val<unsigned short> var_6, val<int> var_7, val<short> var_8, val<int> zero, val<int*> var_10, val<unsigned short*> var_11, val<int*> var_12, val<int*> var_13, val<int*> var_14, val<bool*> var_15) {
    *var_10 = ((/* implicit */val<int>) (val<unsigned short>)33347);
    *var_11 = ((/* implicit */val<unsigned short>) var_4);
    if (((/* implicit */val<bool>) min((((((((/* implicit */val<bool>) var_0)) || (((/* implicit */val<bool>) var_6)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_8)) <= (((/* implicit */val<int>) (val<bool>)1)))))) : (((((/* implicit */val<long long int>) 2147483646)) & (5412441063604276105LL))))), (((/* implicit */val<long long int>) (~((+(var_5)))))))))
    {
        *var_12 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3))));
        *var_13 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (6823576750465267343LL) : (((/* implicit */val<long long int>) -1204189131))))) ? (((/* implicit */val<int>) (val<unsigned short>)49176)) : (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) > (-5472851247762112699LL)))))))));
        *var_14 = ((/* implicit */val<int>) var_6);
        *var_15 &= ((/* implicit */val<bool>) ((((/* implicit */val<int>) var_0)) + (var_7)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7619;
short var_1 = (short)8989;
long long int var_3 = 889356959930781277LL;
short var_4 = (short)6269;
int var_5 = -2115728703;
unsigned short var_6 = (unsigned short)49195;
int var_7 = 854203307;
short var_8 = (short)-13521;
int zero = 0;
int var_10 = 637030681;
unsigned short var_11 = (unsigned short)54840;
int var_12 = -1075608364;
int var_13 = -2043706235;
int var_14 = -1696982624;
bool var_15 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 33347;
    value_mismatch |= var_11 != (unsigned short)6269;
    value_mismatch |= var_12 != 0;
    value_mismatch |= var_13 != 0;
    value_mismatch |= var_14 != 49195;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_8, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
