/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2257
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2257
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
void test(val<signed char> var_1, val<signed char> var_7, val<unsigned short> var_8, val<signed char> var_9, val<signed char> var_13, val<signed char> var_14, val<unsigned int> var_15, val<int> zero, val<short*> var_19, val<int*> var_20, val<unsigned long long int*> var_21, val<bool*> var_22, val<bool*> var_23, val<unsigned char*> var_24, val<long long int*> var_25, val<short*> var_26, val<short*> var_27) {
    if (((/* implicit */val<bool>) ((val<signed char>) (val<unsigned short>)0)))
    {
        *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) 1125899369971712LL)) ? (min((min((((/* implicit */val<long long int>) (val<signed char>)-80)), (-8779032101647496222LL))), (((/* implicit */val<long long int>) var_8)))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -8779032101647496222LL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-73))) : (2251799809490944LL)))) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_14)))))));
        *var_20 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) min((8662281553449528723ULL), (((/* implicit */val<unsigned long long int>) 4294967295U))))) ? (-9223372036854775802LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9)))));
        *var_21 = ((/* implicit */val<unsigned long long int>) min((*var_21), (((/* implicit */val<unsigned long long int>) var_7))));
    }
    else
    {
        *var_22 = ((/* implicit */val<bool>) ((((/* implicit */val<int>) var_1)) & (((/* implicit */val<int>) (val<signed char>)-118))));
        *var_23 = ((/* implicit */val<bool>) min((((((/* implicit */val<long long int>) max((-2100346505), (((/* implicit */val<int>) (val<short>)-16953))))) / (min((((/* implicit */val<long long int>) var_7)), (-8989971495696361184LL))))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_15)) ? (min((((/* implicit */val<int>) (val<short>)-32739)), (114688))) : (((/* implicit */val<int>) min(((val<unsigned char>)179), (((/* implicit */val<unsigned char>) var_9))))))))));
        *var_24 = ((/* implicit */val<unsigned char>) (((val<bool>)0) ? (14111104273800915038ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-16)))));
        *var_25 = ((/* implicit */val<long long int>) ((val<int>) var_14));
    }

    *var_26 = ((/* implicit */val<short>) max((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_15))))), (((((/* implicit */val<bool>) min((4294967282U), (((/* implicit */val<unsigned int>) (val<signed char>)127))))) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) ((val<signed char>) 8779032101647496222LL)))))));
    *var_27 = ((/* implicit */val<short>) min((((((/* implicit */val<bool>) min((((/* implicit */val<int>) var_14)), (2147483584)))) ? (min((((/* implicit */val<long long int>) var_13)), (8115779212022036694LL))) : (((((-5622130829089204704LL) + (9223372036854775807LL))) << (((((/* implicit */val<int>) (val<unsigned char>)255)) - (255))))))), (((/* implicit */val<long long int>) ((min((-8004624844263923685LL), (-8115779212022036691LL))) <= (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)65535))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)106;
signed char var_7 = (signed char)-104;
unsigned short var_8 = (unsigned short)20285;
signed char var_9 = (signed char)-8;
signed char var_13 = (signed char)-106;
signed char var_14 = (signed char)-88;
unsigned int var_15 = 434142126U;
int zero = 0;
short var_19 = (short)-32527;
int var_20 = 2007628571;
unsigned long long int var_21 = 18237399452403997395ULL;
bool var_22 = (bool)1;
bool var_23 = (bool)1;
unsigned char var_24 = (unsigned char)89;
long long int var_25 = -7346300868426327399LL;
short var_26 = (short)-8483;
short var_27 = (short)7255;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)-32527;
    value_mismatch |= var_20 != 2007628571;
    value_mismatch |= var_21 != 18237399452403997395ULL;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != (bool)1;
    value_mismatch |= var_24 != (unsigned char)240;
    value_mismatch |= var_25 != -88LL;
    value_mismatch |= var_26 != (short)0;
    value_mismatch |= var_27 != (short)-106;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, var_8, var_9, var_13, var_14, var_15, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27);
  checksum();
}
