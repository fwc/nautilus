/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9429
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9429
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
void test(val<long long int> var_0, val<unsigned short> var_1, val<unsigned long long int> var_2, val<unsigned short> var_3, val<long long int> var_4, val<short> var_5, val<unsigned short> var_7, val<unsigned char> var_8, val<int> zero, val<unsigned char*> var_10, val<unsigned long long int*> var_11, val<signed char*> var_12, val<bool*> var_13, val<signed char*> var_14, val<signed char*> var_15, val<bool*> var_16, val<short*> var_17) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)72)) ? (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_1))))) : (((((/* implicit */val<bool>) (val<unsigned char>)17)) ? (2ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)140)))))))) ? (((((/* implicit */val<bool>) ((6415243730284724047LL) << (((((((/* implicit */val<int>) var_5)) + (6314))) - (32)))))) ? (((/* implicit */val<int>) var_7)) : ((~(((/* implicit */val<int>) (val<unsigned char>)127)))))) : (((val<int>) ((((/* implicit */val<int>) (val<unsigned char>)150)) * (((/* implicit */val<int>) (val<bool>)0))))))))
    {
        *var_10 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) min((var_8), ((val<unsigned char>)102)))) ? (((6271562809658515016LL) / (-6271562809658515005LL))) : (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_1))))))) * (((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)31230))) : (4294967295U)))) * (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))) / (-7964380776202169621LL)))))));
        *var_11 = ((/* implicit */val<unsigned long long int>) (val<unsigned short>)34306);
        *var_12 = ((/* implicit */val<signed char>) min((*var_12), (((/* implicit */val<signed char>) var_2))));
    }

    *var_13 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) min(((val<unsigned char>)199), (((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) (val<short>)-32113)) > (((/* implicit */val<int>) var_3)))))))) ? (((((/* implicit */val<bool>) var_2)) ? (((((/* implicit */val<bool>) var_0)) ? (var_4) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned short>)34305)) || ((val<bool>)1))))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)116)))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_3))))) ? (((/* implicit */val<long long int>) 2263678053U)) : (((val<long long int>) ((val<unsigned int>) (val<signed char>)-1))))))
    {
        *var_14 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 2462110954U)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)31230))) : (1073741823ULL)))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) (val<unsigned char>)105)) : (((/* implicit */val<int>) (val<unsigned char>)114))))) : (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) + (var_0)))))) ? (max((((/* implicit */val<unsigned long long int>) var_4)), (10880579807253199283ULL))) : (((/* implicit */val<unsigned long long int>) var_4))));
        *var_15 = (val<signed char>)60;
        *var_16 = ((/* implicit */val<bool>) ((val<long long int>) ((((/* implicit */val<int>) ((val<bool>) var_1))) >= (((/* implicit */val<int>) ((9223372036854775807LL) >= (((/* implicit */val<long long int>) (-2147483647 - 1)))))))));
        *var_17 = ((/* implicit */val<short>) ((16501734905759805654ULL) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8)))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3764434635574966502LL;
unsigned short var_1 = (unsigned short)21356;
unsigned long long int var_2 = 124601694531654916ULL;
unsigned short var_3 = (unsigned short)6112;
long long int var_4 = 7711999970512505214LL;
short var_5 = (short)-6281;
unsigned short var_7 = (unsigned short)23209;
unsigned char var_8 = (unsigned char)244;
int zero = 0;
unsigned char var_10 = (unsigned char)140;
unsigned long long int var_11 = 14407147019184569610ULL;
signed char var_12 = (signed char)-4;
bool var_13 = (bool)1;
signed char var_14 = (signed char)76;
signed char var_15 = (signed char)-111;
bool var_16 = (bool)1;
short var_17 = (short)18500;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)0;
    value_mismatch |= var_11 != 34306ULL;
    value_mismatch |= var_12 != (signed char)-4;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (signed char)-77;
    value_mismatch |= var_15 != (signed char)60;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
