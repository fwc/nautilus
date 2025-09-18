/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1042
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1042
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
void test(val<int> zero, val<unsigned char*> var_18, val<unsigned short*> var_19, val<unsigned char*> var_20, val<long long int*> var_21, val<signed char*> var_22) {
    if (((/* implicit */val<bool>) max((min(((~(1073725440))), ((~(((/* implicit */val<int>) (val<unsigned char>)216)))))), (min((((/* implicit */val<int>) (val<unsigned char>)199)), (((((/* implicit */val<bool>) -1667256205)) ? (((/* implicit */val<int>) (val<unsigned char>)40)) : (((/* implicit */val<int>) (val<unsigned char>)43)))))))))
    {
        *var_18 ^= ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned long long int>) -4142063209037324220LL)), (3760554640410072170ULL)));
        *var_19 = ((/* implicit */val<unsigned short>) (+(((/* implicit */val<int>) (!((val<bool>)1))))));
    }

    *var_20 += ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) min(((~(((/* implicit */val<int>) (val<unsigned char>)204)))), (1073725440))))));
    *var_21 = ((/* implicit */val<long long int>) min((((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)216))))), (((((/* implicit */val<bool>) (val<unsigned short>)32768)) ? (((/* implicit */val<int>) (val<unsigned short>)58153)) : (176745465)))))), (max((((/* implicit */val<unsigned long long int>) (val<unsigned short>)7395)), (15532546909687800398ULL)))));
    *var_22 = ((/* implicit */val<signed char>) (((!(((/* implicit */val<bool>) min(((val<unsigned short>)0), (((/* implicit */val<unsigned short>) (val<signed char>)91))))))) ? (((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) (val<signed char>)-1)), (722736700U)))) ? (max((((/* implicit */val<unsigned long long int>) (val<bool>)1)), (18446744073709551615ULL))) : (((/* implicit */val<unsigned long long int>) min((3074971151590384592LL), (((/* implicit */val<long long int>) -1073725441))))))) : (min((((((/* implicit */val<bool>) (val<short>)192)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)0))) : (7210878800263450600ULL))), ((~(18446744073709551615ULL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned char var_18 = (unsigned char)92;
unsigned short var_19 = (unsigned short)16700;
unsigned char var_20 = (unsigned char)49;
long long int var_21 = -1714608744877214598LL;
signed char var_22 = (signed char)113;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)24;
    value_mismatch |= var_19 != (unsigned short)0;
    value_mismatch |= var_20 != (unsigned char)49;
    value_mismatch |= var_21 != 0LL;
    value_mismatch |= var_22 != (signed char)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
