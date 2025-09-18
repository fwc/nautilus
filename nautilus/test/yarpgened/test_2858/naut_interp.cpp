/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2858
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2858
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
void test(val<short> var_0, val<int> var_1, val<int> var_2, val<bool> var_3, val<unsigned short> var_4, val<unsigned long long int> var_6, val<unsigned short> var_7, val<unsigned long long int> var_8, val<unsigned long long int> var_9, val<int> zero, val<unsigned short*> var_10, val<signed char*> var_11, val<signed char*> var_12, val<unsigned long long int*> var_13, val<unsigned long long int*> var_14, val<unsigned char*> var_15, val<unsigned long long int*> var_16, val<signed char*> var_17, val<unsigned char*> var_18) {
    *var_10 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))) : (min((6495841744736625559LL), (((/* implicit */val<long long int>) var_3)))))) % (((((/* implicit */val<bool>) (val<signed char>)12)) ? ((-(8602638716396923834LL))) : (((((/* implicit */val<bool>) (val<unsigned char>)99)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)141))) : (8602638716396923847LL)))))));
    if (((/* implicit */val<bool>) (+(((((((/* implicit */val<int>) (val<short>)24620)) != (var_1))) ? (((((/* implicit */val<int>) var_0)) & (((/* implicit */val<int>) (val<short>)19170)))) : (((/* implicit */val<int>) ((val<unsigned char>) var_8))))))))
    {
        *var_11 -= ((/* implicit */val<signed char>) min((((((/* implicit */val<bool>) (-(var_1)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))) : (((((/* implicit */val<bool>) var_0)) ? (var_8) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))))))), (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (val<signed char>)-33)))))));
        if (((/* implicit */val<bool>) var_9))
        {
            *var_12 = ((/* implicit */val<signed char>) var_7);
            *var_13 = ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)26))) : (var_9));
            *var_14 = ((/* implicit */val<unsigned long long int>) max((*var_14), (((/* implicit */val<unsigned long long int>) var_4))));
        }
        else
        {
            *var_15 -= ((/* implicit */val<unsigned char>) var_2);
            *var_16 += ((/* implicit */val<unsigned long long int>) var_2);
            *var_17 = ((/* implicit */val<signed char>) (~(var_2)));
            *var_18 = ((/* implicit */val<unsigned char>) (val<unsigned short>)8888);
        }

    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13844;
int var_1 = -675990484;
int var_2 = -760165620;
bool var_3 = (bool)1;
unsigned short var_4 = (unsigned short)42202;
unsigned long long int var_6 = 12941086194217377862ULL;
unsigned short var_7 = (unsigned short)10803;
unsigned long long int var_8 = 10408043090763313889ULL;
unsigned long long int var_9 = 10001940212491178211ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)38588;
signed char var_11 = (signed char)68;
signed char var_12 = (signed char)-3;
unsigned long long int var_13 = 10806473407469863193ULL;
unsigned long long int var_14 = 9269347177703709624ULL;
unsigned char var_15 = (unsigned char)83;
unsigned long long int var_16 = 17111606791391238198ULL;
signed char var_17 = (signed char)26;
unsigned char var_18 = (unsigned char)81;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)10803;
    value_mismatch |= var_11 != (signed char)17;
    value_mismatch |= var_12 != (signed char)51;
    value_mismatch |= var_13 != 26ULL;
    value_mismatch |= var_14 != 9269347177703709624ULL;
    value_mismatch |= var_15 != (unsigned char)83;
    value_mismatch |= var_16 != 17111606791391238198ULL;
    value_mismatch |= var_17 != (signed char)26;
    value_mismatch |= var_18 != (unsigned char)81;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
