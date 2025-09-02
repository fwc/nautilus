/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9990
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9990
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
void test(val<long long int> var_0, val<unsigned int> var_1, val<unsigned int> var_2, val<int> var_4, val<long long int> var_6, val<unsigned int> var_7, val<unsigned short> var_10, val<long long int> var_12, val<unsigned int> var_13, val<int> zero, val<unsigned short*> var_14, val<short*> var_15, val<signed char*> var_16, val<bool*> var_17, val<unsigned short*> var_18, val<int*> var_19, val<unsigned long long int*> var_20) {
    *var_14 &= ((/* implicit */val<unsigned short>) max((((/* implicit */val<unsigned int>) (val<unsigned char>)124)), (var_7)));
    *var_15 ^= ((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) (~(max((var_13), (((/* implicit */val<unsigned int>) -1813351986))))))) != (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)132))) : (var_13)))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_2)) ? (var_1) : (var_13)))) : (((((/* implicit */val<bool>) (val<signed char>)124)) ? (((/* implicit */val<unsigned long long int>) -1813351964)) : (4088ULL)))))));
    *var_16 = ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))) == (var_6))))));
    *var_17 = ((((((/* implicit */val<bool>) (val<signed char>)-118)) ? (((/* implicit */val<int>) (val<unsigned char>)124)) : (-1813351970))) > (var_4));
    if (((/* implicit */val<bool>) var_10))
    {
        *var_18 = ((/* implicit */val<unsigned short>) var_12);
        *var_19 = min((((/* implicit */val<int>) (val<unsigned char>)131)), (((((((/* implicit */val<bool>) (val<signed char>)(-127 - 1))) ? (-276931225) : (((/* implicit */val<int>) (val<bool>)1)))) * (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 616410240))))))));
        *var_20 = ((/* implicit */val<unsigned long long int>) var_13);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5151360393105592463LL;
unsigned int var_1 = 3199226100U;
unsigned int var_2 = 2252453518U;
int var_4 = -626570203;
long long int var_6 = 3173109627816337294LL;
unsigned int var_7 = 3802519072U;
unsigned short var_10 = (unsigned short)44405;
long long int var_12 = -2867173038605247451LL;
unsigned int var_13 = 360507405U;
int zero = 0;
unsigned short var_14 = (unsigned short)54196;
short var_15 = (short)3052;
signed char var_16 = (signed char)66;
bool var_17 = (bool)1;
unsigned short var_18 = (unsigned short)18556;
int var_19 = -797089482;
unsigned long long int var_20 = 9970365950231818628ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)53792;
    value_mismatch |= var_15 != (short)3053;
    value_mismatch |= var_16 != (signed char)-1;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (unsigned short)23589;
    value_mismatch |= var_19 != 0;
    value_mismatch |= var_20 != 360507405ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_7, var_10, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
