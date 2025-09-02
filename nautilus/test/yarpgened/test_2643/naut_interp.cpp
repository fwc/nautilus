/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2643
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2643
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
void test(val<unsigned long long int> var_0, val<short> var_1, val<short> var_3, val<short> var_5, val<unsigned short> var_7, val<unsigned short> var_8, val<unsigned short> var_9, val<unsigned short> var_10, val<int> zero, val<long long int*> var_11, val<unsigned char*> var_12, val<short*> var_13, val<int*> var_14, val<unsigned long long int*> var_15, val<bool*> var_16, val<unsigned long long int*> var_17, val<unsigned long long int*> var_18, val<short*> var_19) {
    if (((/* implicit */val<bool>) ((((((/* implicit */val<int>) (val<unsigned short>)65516)) | (((/* implicit */val<int>) var_10)))) << (((((((/* implicit */val<int>) var_3)) & (((/* implicit */val<int>) var_8)))) - (16522))))))
    {
        *var_11 = ((/* implicit */val<long long int>) var_5);
        *var_12 = ((/* implicit */val<unsigned char>) ((val<unsigned short>) var_3));
        *var_13 ^= ((/* implicit */val<short>) ((max((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (val<unsigned char>)31))))), (max((((/* implicit */val<unsigned long long int>) var_7)), (var_0))))) != (var_0)));
    }
    else
    {
        *var_14 = ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 2ULL)) ? (139981158) : (((/* implicit */val<int>) (val<short>)-26589))))) & (((((/* implicit */val<bool>) 6263479690275198398LL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-81))) : (-4LL)))));
        *var_15 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((((/* implicit */val<int>) (val<short>)63)) > (((/* implicit */val<int>) (val<short>)32767)))) ? (((/* implicit */val<unsigned long long int>) -5208518702314365322LL)) : (max((var_0), (((/* implicit */val<unsigned long long int>) 2147483639))))))) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<unsigned char>)182))))))))));
    }

    *var_16 ^= ((-2084404455) < (((/* implicit */val<int>) (val<unsigned char>)86)));
    *var_17 = ((/* implicit */val<unsigned long long int>) var_3);
    *var_18 = ((/* implicit */val<unsigned long long int>) max((*var_18), (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (((+(-1206017994573079153LL))) != (-3451684857477836957LL)))))))));
    *var_19 = ((/* implicit */val<short>) max((((val<long long int>) var_9)), (((/* implicit */val<long long int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4749742044311771317ULL;
short var_1 = (short)-30907;
short var_3 = (short)18415;
short var_5 = (short)31915;
unsigned short var_7 = (unsigned short)47172;
unsigned short var_8 = (unsigned short)63646;
unsigned short var_9 = (unsigned short)52106;
unsigned short var_10 = (unsigned short)19325;
int zero = 0;
long long int var_11 = -6455206307155225834LL;
unsigned char var_12 = (unsigned char)45;
short var_13 = (short)-1853;
int var_14 = -611283859;
unsigned long long int var_15 = 5303699991033802196ULL;
bool var_16 = (bool)1;
unsigned long long int var_17 = 2851473509600738761ULL;
unsigned long long int var_18 = 4120947540476017810ULL;
short var_19 = (short)1459;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 31915LL;
    value_mismatch |= var_12 != (unsigned char)239;
    value_mismatch |= var_13 != (short)-1853;
    value_mismatch |= var_14 != -611283859;
    value_mismatch |= var_15 != 5303699991033802196ULL;
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != 18415ULL;
    value_mismatch |= var_18 != 18446744073709551614ULL;
    value_mismatch |= var_19 != (short)-13430;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
