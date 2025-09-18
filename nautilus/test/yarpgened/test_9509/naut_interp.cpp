/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9509
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9509
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
void test(val<unsigned short> var_3, val<bool> var_4, val<long long int> var_7, val<unsigned int> var_8, val<unsigned long long int> var_10, val<int> var_11, val<unsigned long long int> var_15, val<bool> var_16, val<int> var_17, val<signed char> var_18, val<int> zero, val<unsigned int*> var_19, val<unsigned long long int*> var_20, val<unsigned long long int*> var_21, val<unsigned char*> var_22, val<signed char*> var_23, val<unsigned char*> var_24, val<unsigned short*> var_25, val<unsigned short*> var_26) {
    *var_19 = ((/* implicit */val<unsigned int>) max((((((((/* implicit */val<int>) var_4)) >= (((/* implicit */val<int>) var_18)))) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) ((val<bool>) var_8))))), (((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) 1195263068909838142LL)) * (17478665977229856250ULL)))) ? (((/* implicit */val<int>) (val<bool>)1)) : ((-(((/* implicit */val<int>) (val<bool>)1))))))));
    *var_20 = ((/* implicit */val<unsigned long long int>) (!((val<bool>)1)));
    if (((/* implicit */val<bool>) var_15))
    {
        *var_21 = ((/* implicit */val<unsigned long long int>) ((val<unsigned char>) ((((/* implicit */val<bool>) (val<unsigned char>)85)) ? (3946407021U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)20533))))));
        *var_22 = ((/* implicit */val<unsigned char>) min((*var_22), (((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) 968078096479695355ULL)) ? (4930494907069733507ULL) : (((/* implicit */val<unsigned long long int>) 3470230121U)))))));
        *var_23 = ((/* implicit */val<signed char>) var_17);
        *var_24 = ((/* implicit */val<unsigned char>) var_10);
    }

    if (((/* implicit */val<bool>) var_11))
    {
        *var_25 |= ((/* implicit */val<unsigned short>) ((((((/* implicit */val<bool>) (+(3946407011U)))) && (((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_4))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_16))) : (max((((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_18))))), (var_10)))));
        *var_26 &= ((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) ((val<unsigned char>) var_7))), (var_3))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)23590;
bool var_4 = (bool)0;
long long int var_7 = -2465720195845847507LL;
unsigned int var_8 = 564820385U;
unsigned long long int var_10 = 10273220763183096963ULL;
int var_11 = -822361529;
unsigned long long int var_15 = 5551932105103926877ULL;
bool var_16 = (bool)0;
int var_17 = -911546934;
signed char var_18 = (signed char)-56;
int zero = 0;
unsigned int var_19 = 3878014244U;
unsigned long long int var_20 = 1728072415614798420ULL;
unsigned long long int var_21 = 16005060947565730845ULL;
unsigned char var_22 = (unsigned char)242;
signed char var_23 = (signed char)30;
unsigned char var_24 = (unsigned char)39;
unsigned short var_25 = (unsigned short)26995;
unsigned short var_26 = (unsigned short)53562;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1U;
    value_mismatch |= var_20 != 0ULL;
    value_mismatch |= var_21 != 109ULL;
    value_mismatch |= var_22 != (unsigned char)131;
    value_mismatch |= var_23 != (signed char)-54;
    value_mismatch |= var_24 != (unsigned char)131;
    value_mismatch |= var_25 != (unsigned short)28147;
    value_mismatch |= var_26 != (unsigned short)53522;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_7, var_8, var_10, var_11, var_15, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26);
  checksum();
}
