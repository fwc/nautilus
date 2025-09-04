/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8912
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8912
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
void test(val<unsigned char> var_0, val<bool> var_2, val<bool> var_3, val<unsigned long long int> var_4, val<unsigned short> var_5, val<unsigned int> var_6, val<bool> var_7, val<int> var_8, val<unsigned short> var_9, val<unsigned int> var_11, val<unsigned short> var_12, val<short> var_14, val<unsigned long long int> var_15, val<unsigned short> var_16, val<short> var_17, val<int> zero, val<unsigned long long int*> var_18, val<short*> var_19, val<unsigned int*> var_20, val<signed char*> var_21, val<unsigned long long int*> var_22, val<unsigned long long int*> var_23) {
    *var_18 = ((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) (val<bool>)1)), (((((/* implicit */val<bool>) (~(var_15)))) ? (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_17)) : (((/* implicit */val<int>) (val<unsigned char>)255)))) : ((+(((/* implicit */val<int>) (val<unsigned char>)244))))))));
    *var_19 += ((/* implicit */val<short>) ((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<unsigned long long int>) var_11)) : (var_15))), (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_14))) : (var_15)))))) ? (var_8) : (((((/* implicit */val<bool>) var_15)) ? (((((/* implicit */val<bool>) (val<unsigned char>)244)) ? (((/* implicit */val<int>) (val<unsigned char>)79)) : (((/* implicit */val<int>) (val<unsigned char>)215)))) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)254))) > (var_15))))))));
    *var_20 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((max((var_6), (((/* implicit */val<unsigned int>) var_17)))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_14)) && (((/* implicit */val<bool>) (val<unsigned char>)244)))))))) ? (1242683110) : (((/* implicit */val<int>) var_3))));
    *var_21 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)47317)) ? (var_11) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) (val<signed char>)44)), (var_0)))))))) ? (min((((1110010845U) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))))), (((/* implicit */val<unsigned int>) ((val<int>) var_9))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_6)) && (((/* implicit */val<bool>) ((var_2) ? (((/* implicit */val<int>) (val<short>)-31468)) : (((/* implicit */val<int>) var_12)))))))))));
    if (((((/* implicit */val<int>) var_14)) >= (((/* implicit */val<int>) var_16))))
    {
        *var_22 = ((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<bool>) min((var_4), (var_4)))) ? (min((255), (((/* implicit */val<int>) var_12)))) : (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) (val<unsigned char>)13)) : (((/* implicit */val<int>) var_17)))))), (((/* implicit */val<int>) var_0))));
        *var_23 = ((/* implicit */val<unsigned long long int>) min((var_5), ((val<unsigned short>)48965)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
bool var_2 = (bool)0;
bool var_3 = (bool)1;
unsigned long long int var_4 = 3952292303146730897ULL;
unsigned short var_5 = (unsigned short)5832;
unsigned int var_6 = 2863477166U;
bool var_7 = (bool)0;
int var_8 = 468597900;
unsigned short var_9 = (unsigned short)23378;
unsigned int var_11 = 4293347821U;
unsigned short var_12 = (unsigned short)2941;
short var_14 = (short)9339;
unsigned long long int var_15 = 11622803963306711116ULL;
unsigned short var_16 = (unsigned short)38896;
short var_17 = (short)30891;
int zero = 0;
unsigned long long int var_18 = 14118658712124699637ULL;
short var_19 = (short)-11185;
unsigned int var_20 = 2344117474U;
signed char var_21 = (signed char)99;
unsigned long long int var_22 = 4704054380677910480ULL;
unsigned long long int var_23 = 10098975552308855719ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1ULL;
    value_mismatch |= var_19 != (short)4315;
    value_mismatch |= var_20 != 1242683110U;
    value_mismatch |= var_21 != (signed char)82;
    value_mismatch |= var_22 != 4704054380677910480ULL;
    value_mismatch |= var_23 != 10098975552308855719ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_11, var_12, var_14, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
