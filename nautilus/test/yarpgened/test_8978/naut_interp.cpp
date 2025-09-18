/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8978
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8978
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
void test(val<long long int> var_0, val<unsigned long long int> var_2, val<unsigned long long int> var_3, val<unsigned int> var_4, val<unsigned char> var_5, val<long long int> var_7, val<long long int> var_8, val<long long int> var_9, val<signed char> var_10, val<unsigned int> var_11, val<int> var_12, val<unsigned char> var_13, val<int> zero, val<signed char*> var_14, val<unsigned int*> var_15, val<short*> var_16, val<short*> var_17, val<short*> var_18, val<unsigned long long int*> var_19, val<unsigned char*> var_20, val<long long int*> var_21, val<int*> var_22, val<long long int*> var_23) {
    if (((/* implicit */val<bool>) var_10))
    {
        *var_14 *= ((/* implicit */val<signed char>) (-(var_0)));
        *var_15 = (-(3180873690U));
        *var_16 = ((/* implicit */val<short>) max((*var_16), (((/* implicit */val<short>) ((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_13)), (var_8)))) ? (max((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_5)) >> (((var_4) - (2140399151U)))))), ((-(3180873701U))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7)))))) >= ((~(var_9))))))))))));
    }
    else
    {
        *var_17 = ((/* implicit */val<short>) min((((/* implicit */val<unsigned long long int>) var_13)), (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) * (min((10869036902628289565ULL), (((/* implicit */val<unsigned long long int>) 2147483647))))))));
        *var_18 = ((/* implicit */val<short>) var_2);
    }

    if (((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) var_3))))), (var_4))))
    {
        *var_19 = var_3;
        *var_20 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) var_13))));
        *var_21 = ((/* implicit */val<long long int>) ((val<unsigned long long int>) (~(((/* implicit */val<int>) var_10)))));
        *var_22 = ((/* implicit */val<int>) var_11);
    }

    *var_23 = ((/* implicit */val<long long int>) min((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_11)))))) * (((10869036902628289565ULL) << (((var_12) + (726751654))))))), (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned int>) (val<unsigned char>)96)), (var_4))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3319355715177379542LL;
unsigned long long int var_2 = 515196773452538932ULL;
unsigned long long int var_3 = 2924206936613463200ULL;
unsigned int var_4 = 2140399152U;
unsigned char var_5 = (unsigned char)179;
long long int var_7 = -8464522248717656699LL;
long long int var_8 = -3237667107195911234LL;
long long int var_9 = -393820282776866819LL;
signed char var_10 = (signed char)-83;
unsigned int var_11 = 1410544667U;
int var_12 = -726751609;
unsigned char var_13 = (unsigned char)146;
int zero = 0;
signed char var_14 = (signed char)-7;
unsigned int var_15 = 908511338U;
short var_16 = (short)14414;
short var_17 = (short)20622;
short var_18 = (short)24836;
unsigned long long int var_19 = 3865071083175972951ULL;
unsigned char var_20 = (unsigned char)9;
long long int var_21 = -6013028593650401252LL;
int var_22 = 49653339;
long long int var_23 = 8820971033072024454LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)38;
    value_mismatch |= var_15 != 1114093606U;
    value_mismatch |= var_16 != (short)14414;
    value_mismatch |= var_17 != (short)20622;
    value_mismatch |= var_18 != (short)24836;
    value_mismatch |= var_19 != 3865071083175972951ULL;
    value_mismatch |= var_20 != (unsigned char)9;
    value_mismatch |= var_21 != -6013028593650401252LL;
    value_mismatch |= var_22 != 49653339;
    value_mismatch |= var_23 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_7, var_8, var_9, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
