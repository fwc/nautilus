/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9963
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9963
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
void test(val<unsigned char> var_0, val<short> var_1, val<long long int> var_2, val<unsigned long long int> var_3, val<signed char> var_5, val<int> var_6, val<signed char> var_8, val<int> var_9, val<unsigned short> var_10, val<unsigned short> var_11, val<unsigned long long int> var_12, val<long long int> var_14, val<unsigned char> var_16, val<signed char> var_17, val<int> zero, val<unsigned long long int*> var_18, val<short*> var_19, val<signed char*> var_20, val<short*> var_21, val<short*> var_22, val<bool*> var_23, val<int*> var_24, val<unsigned int*> var_25, val<unsigned short*> var_26, val<int*> var_27, val<unsigned short*> var_28, val<unsigned char*> var_29, val<unsigned short*> var_30) {
    if (((/* implicit */val<bool>) 18446744073709551611ULL))
    {
        *var_18 = ((/* implicit */val<unsigned long long int>) var_16);
        *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) max((((((/* implicit */val<int>) (val<signed char>)101)) | (((/* implicit */val<int>) var_16)))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_11)))))))) ? (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) (val<short>)-32752)) : (((/* implicit */val<int>) (val<unsigned char>)0)))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) (val<signed char>)-87)) : (((/* implicit */val<int>) var_11))))) ? (((((/* implicit */val<bool>) (val<signed char>)111)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_8)))) : (((/* implicit */val<int>) (val<unsigned short>)22965))))));
        if (((/* implicit */val<bool>) ((val<unsigned short>) ((((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) (val<short>)-32736)) : (((/* implicit */val<int>) (val<short>)32752)))) >= (((/* implicit */val<int>) var_1))))))
        {
            *var_20 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_17))));
            *var_21 = ((/* implicit */val<short>) var_9);
            *var_22 |= ((/* implicit */val<short>) min((((/* implicit */val<long long int>) var_9)), (max((((/* implicit */val<long long int>) var_17)), (var_14)))));
        }

        *var_23 = ((/* implicit */val<bool>) (-(min((((/* implicit */val<int>) var_5)), (max((((/* implicit */val<int>) var_8)), (var_6)))))));
    }
    else
    {
        *var_24 |= ((/* implicit */val<int>) ((val<long long int>) min((((/* implicit */val<int>) (val<short>)25911)), (1460925080))));
        *var_25 = ((/* implicit */val<unsigned int>) (~((((((val<bool>)1) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)19256))) : (15847759318816240770ULL))) + (((((/* implicit */val<bool>) (val<short>)24576)) ? (var_12) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5)))))))));
        *var_26 = ((/* implicit */val<unsigned short>) var_17);
    }

    *var_27 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((min((var_2), (((/* implicit */val<long long int>) var_8)))) < (((/* implicit */val<long long int>) min((((/* implicit */val<int>) var_17)), (-1460925081)))))))) & (18446744073709551615ULL)));
    *var_28 = ((/* implicit */val<unsigned short>) max((((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) (val<short>)24576)) : (((/* implicit */val<int>) var_8))))) % (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) - (7447007920787288315LL))))), (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_17)))))));
    *var_29 += ((/* implicit */val<unsigned char>) max((((((/* implicit */val<bool>) ((var_3) / (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5)))))) ? (((/* implicit */val<int>) var_8)) : (((((/* implicit */val<int>) var_16)) + (((/* implicit */val<int>) var_10)))))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_8)))))));
    *var_30 = ((/* implicit */val<unsigned short>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)142;
short var_1 = (short)24512;
long long int var_2 = 1140158996722527140LL;
unsigned long long int var_3 = 10692894984313329043ULL;
signed char var_5 = (signed char)-52;
int var_6 = 384982699;
signed char var_8 = (signed char)-76;
int var_9 = 1877651699;
unsigned short var_10 = (unsigned short)45516;
unsigned short var_11 = (unsigned short)12237;
unsigned long long int var_12 = 4176510706166412517ULL;
long long int var_14 = -3198996962407684070LL;
unsigned char var_16 = (unsigned char)82;
signed char var_17 = (signed char)34;
int zero = 0;
unsigned long long int var_18 = 13852203863181009420ULL;
short var_19 = (short)-29076;
signed char var_20 = (signed char)72;
short var_21 = (short)-1035;
short var_22 = (short)17932;
bool var_23 = (bool)1;
int var_24 = -379841081;
unsigned int var_25 = 1915962675U;
unsigned short var_26 = (unsigned short)11786;
int var_27 = 329689771;
unsigned short var_28 = (unsigned short)48468;
unsigned char var_29 = (unsigned char)205;
unsigned short var_30 = (unsigned short)59496;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 82ULL;
    value_mismatch |= var_19 != (short)-32752;
    value_mismatch |= var_20 != (signed char)72;
    value_mismatch |= var_21 != (short)-1035;
    value_mismatch |= var_22 != (short)17932;
    value_mismatch |= var_23 != (bool)1;
    value_mismatch |= var_24 != -379841081;
    value_mismatch |= var_25 != 1915962675U;
    value_mismatch |= var_26 != (unsigned short)11786;
    value_mismatch |= var_27 != 0;
    value_mismatch |= var_28 != (unsigned short)24576;
    value_mismatch |= var_29 != (unsigned char)235;
    value_mismatch |= var_30 != (unsigned short)65484;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_8, var_9, var_10, var_11, var_12, var_14, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28, &var_29, &var_30);
  checksum();
  assert(!value_mismatch);
}
