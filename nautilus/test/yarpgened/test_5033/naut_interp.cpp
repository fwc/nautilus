/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5033
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5033
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
void test(val<short> var_0, val<unsigned short> var_1, val<short> var_2, val<unsigned short> var_3, val<unsigned char> var_4, val<bool> var_5, val<unsigned long long int> var_6, val<int> var_7, val<unsigned short> var_8, val<bool> var_9, val<short> var_10, val<short> var_11, val<short> var_12, val<short> var_13, val<unsigned char> var_14, val<long long int> var_15, val<unsigned short> var_16, val<unsigned short> var_17, val<unsigned short> var_18, val<int> zero, val<unsigned long long int*> var_19, val<bool*> var_20, val<long long int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_14))))) ? ((((val<bool>)1) ? (((/* implicit */val<int>) var_17)) : (((/* implicit */val<int>) (val<unsigned short>)40848)))) : (((((/* implicit */val<bool>) (val<signed char>)91)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) (val<bool>)1))))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) (val<signed char>)-73)) : (((/* implicit */val<int>) (val<unsigned char>)237))))) ? (((((/* implicit */val<bool>) (val<short>)-17181)) ? (((/* implicit */val<int>) (val<short>)-28090)) : (((/* implicit */val<int>) var_18)))) : (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_0))))))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (0U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))) ? (((((/* implicit */val<bool>) (val<signed char>)-113)) ? (((/* implicit */val<long long int>) 0U)) : (12LL))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)29)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)0))) : (17U))))))));
    *var_20 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) : (18446744073709551615ULL)))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_10))))) : (((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<unsigned long long int>) var_7)) : (283726776524341248ULL)))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (var_15) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2)))))) ? (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) : (4058240721U))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_10)))))))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 4177920)) ? (var_15) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13)))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_13))))) : (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) : (var_6)))))));
    *var_21 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)2))) : (18163017297185210365ULL)))) ? (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) (val<unsigned short>)13083)) : (((/* implicit */val<int>) (val<unsigned short>)13083)))) : (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<unsigned short>)0))))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_12))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 4294967295U)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_4))))) : (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_12))) : (12754587506654710906ULL))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) var_4))))) ? (((((/* implicit */val<bool>) 18446744073709551615ULL)) ? (0U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-1))))) : (((/* implicit */val<unsigned int>) ((var_5) ? (((/* implicit */val<int>) var_18)) : (((/* implicit */val<int>) var_10))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1292;
unsigned short var_1 = (unsigned short)6079;
short var_2 = (short)18900;
unsigned short var_3 = (unsigned short)13248;
unsigned char var_4 = (unsigned char)200;
bool var_5 = (bool)1;
unsigned long long int var_6 = 1271540104575356725ULL;
int var_7 = 1653829213;
unsigned short var_8 = (unsigned short)29943;
bool var_9 = (bool)0;
short var_10 = (short)15331;
short var_11 = (short)9586;
short var_12 = (short)16750;
short var_13 = (short)9590;
unsigned char var_14 = (unsigned char)110;
long long int var_15 = 8132843467494215046LL;
unsigned short var_16 = (unsigned short)28000;
unsigned short var_17 = (unsigned short)41105;
unsigned short var_18 = (unsigned short)58169;
int zero = 0;
unsigned long long int var_19 = 15482656125229863217ULL;
bool var_20 = (bool)1;
long long int var_21 = 4502777789278386740LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 18446744073709523526ULL;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != 9590LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
