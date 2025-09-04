/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4164
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4164
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
void test(val<unsigned int> var_0, val<unsigned short> var_1, val<unsigned char> var_3, val<unsigned short> var_4, val<unsigned short> var_5, val<signed char> var_6, val<signed char> var_7, val<int> var_9, val<unsigned short> var_14, val<unsigned short> var_16, val<int> zero, val<unsigned short*> var_17, val<bool*> var_18, val<signed char*> var_19, val<unsigned short*> var_20, val<bool*> var_21, val<unsigned int*> var_22, val<unsigned char*> var_23, val<bool*> var_24) {
    *var_17 = ((/* implicit */val<unsigned short>) (((!(((/* implicit */val<bool>) var_1)))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)43126)) ? (((/* implicit */val<int>) (val<unsigned short>)43135)) : (((/* implicit */val<int>) var_7))))) ? (((/* implicit */val<int>) min(((val<unsigned short>)10095), (var_16)))) : ((~(((/* implicit */val<int>) (val<unsigned short>)10095))))))) : (var_0)));
    if (((/* implicit */val<bool>) var_3))
    {
        *var_18 = ((/* implicit */val<bool>) var_9);
        *var_19 &= ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned int>) max((((((/* implicit */val<bool>) (val<unsigned short>)22410)) ? (((/* implicit */val<int>) (val<unsigned short>)55440)) : (((/* implicit */val<int>) var_16)))), (((/* implicit */val<int>) (val<unsigned short>)10116))))), (max((((/* implicit */val<unsigned int>) (val<unsigned short>)22400)), (min((((/* implicit */val<unsigned int>) var_4)), (var_0)))))));
        if (((/* implicit */val<bool>) min(((val<unsigned short>)10123), ((val<unsigned short>)55416))))
        {
            *var_20 &= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)43159)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))))) ? (((/* implicit */val<int>) var_5)) : (max(((~(((/* implicit */val<int>) (val<unsigned short>)55416)))), (((/* implicit */val<int>) ((val<unsigned short>) var_6)))))));
            *var_21 = ((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_3))));
            *var_22 &= ((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) var_14)), ((+((+(((/* implicit */val<int>) (val<signed char>)-114))))))));
        }

    }

    *var_23 &= ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) (val<unsigned short>)10095))));
    *var_24 = ((/* implicit */val<bool>) (val<unsigned short>)43151);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1350829755U;
unsigned short var_1 = (unsigned short)10043;
unsigned char var_3 = (unsigned char)149;
unsigned short var_4 = (unsigned short)25005;
unsigned short var_5 = (unsigned short)9554;
signed char var_6 = (signed char)10;
signed char var_7 = (signed char)-94;
int var_9 = 1894739829;
unsigned short var_14 = (unsigned short)60892;
unsigned short var_16 = (unsigned short)52004;
int zero = 0;
unsigned short var_17 = (unsigned short)58492;
bool var_18 = (bool)1;
signed char var_19 = (signed char)-59;
unsigned short var_20 = (unsigned short)18039;
bool var_21 = (bool)1;
unsigned int var_22 = 421953324U;
unsigned char var_23 = (unsigned char)172;
bool var_24 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)1723;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (signed char)(-127 - 1);
    value_mismatch |= var_20 != (unsigned short)1106;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != 421953292U;
    value_mismatch |= var_23 != (unsigned char)0;
    value_mismatch |= var_24 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_9, var_14, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
