/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2786
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2786
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
void test(val<bool> var_0, val<signed char> var_1, val<unsigned long long int> var_3, val<bool> var_4, val<unsigned short> var_5, val<unsigned short> var_6, val<unsigned short> var_8, val<bool> var_9, val<unsigned long long int> var_10, val<unsigned short> var_12, val<bool> var_13, val<int> zero, val<signed char*> var_14, val<bool*> var_15, val<unsigned long long int*> var_16, val<long long int*> var_17, val<bool*> var_18, val<unsigned short*> var_19, val<int*> var_20) {
    *var_14 = ((/* implicit */val<signed char>) max((*var_14), (((/* implicit */val<signed char>) ((val<unsigned long long int>) ((((/* implicit */val<bool>) ((var_13) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_0))))) ? ((((val<bool>)1) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_5)))) : (((/* implicit */val<int>) ((var_0) && (((/* implicit */val<bool>) (val<unsigned short>)1024)))))))))));
    *var_15 = ((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_6))));
    *var_16 = ((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) (val<short>)1808)))), (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<short>)29871)) >= (((/* implicit */val<int>) (val<bool>)1)))))))) ? (((/* implicit */val<unsigned long long int>) ((val<long long int>) (+(((/* implicit */val<int>) (val<unsigned char>)132)))))) : (var_10));
    *var_17 = ((/* implicit */val<long long int>) max((*var_17), (((/* implicit */val<long long int>) min(((-(((/* implicit */val<int>) (val<signed char>)-76)))), (((((((/* implicit */val<int>) (val<unsigned char>)113)) == (((/* implicit */val<int>) (val<bool>)1)))) ? (((/* implicit */val<int>) (val<signed char>)64)) : ((+(((/* implicit */val<int>) (val<short>)-19977)))))))))));
    if ((val<bool>)1)
    {
        *var_18 = ((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) var_12)), (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) (val<bool>)1))))))) * (min((((/* implicit */val<unsigned long long int>) (val<unsigned char>)143)), (min((((/* implicit */val<unsigned long long int>) (val<signed char>)61)), (var_3)))))));
        *var_19 = ((/* implicit */val<unsigned short>) ((val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 6016395428765392710LL)) ? (((/* implicit */val<int>) (val<unsigned short>)33640)) : (((/* implicit */val<int>) var_6))))) ? ((+(((/* implicit */val<int>) var_9)))) : (((/* implicit */val<int>) var_1)))));
        *var_20 = ((/* implicit */val<int>) var_9);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
signed char var_1 = (signed char)71;
unsigned long long int var_3 = 10152140594626161672ULL;
bool var_4 = (bool)1;
unsigned short var_5 = (unsigned short)57290;
unsigned short var_6 = (unsigned short)36183;
unsigned short var_8 = (unsigned short)6058;
bool var_9 = (bool)1;
unsigned long long int var_10 = 9085788403786634196ULL;
unsigned short var_12 = (unsigned short)35163;
bool var_13 = (bool)0;
int zero = 0;
signed char var_14 = (signed char)127;
bool var_15 = (bool)0;
unsigned long long int var_16 = 4599367999450870118ULL;
long long int var_17 = 902144675549039585LL;
bool var_18 = (bool)1;
unsigned short var_19 = (unsigned short)4629;
int var_20 = 268907108;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)127;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 132ULL;
    value_mismatch |= var_17 != 902144675549039585LL;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (unsigned short)1;
    value_mismatch |= var_20 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_8, var_9, var_10, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
