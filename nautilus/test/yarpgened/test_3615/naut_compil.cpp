/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3615
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3615
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
void test(val<short> var_0, val<signed char> var_1, val<unsigned char> var_3, val<short> var_4, val<short> var_5, val<bool> var_6, val<long long int> var_9, val<unsigned char> var_10, val<unsigned char> var_14, val<int> var_15, val<long long int> var_17, val<long long int> var_18, val<int> zero, val<unsigned int*> var_19, val<unsigned long long int*> var_20, val<int*> var_21, val<unsigned long long int*> var_22, val<unsigned long long int*> var_23) {
    *var_19 = ((/* implicit */val<unsigned int>) var_15);
    *var_20 &= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<signed char>) min((((/* implicit */val<long long int>) var_0)), (var_17))))) ? (((((/* implicit */val<bool>) min((var_18), (((/* implicit */val<long long int>) 2683097762U))))) ? (var_18) : (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<signed char>)6)) - (((/* implicit */val<int>) var_6))))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((var_9) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4)))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) 32)) >= (1006632960U))))) : (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned int>) 2147483631)) : (1006632960U))))))));
    *var_21 = ((((/* implicit */val<bool>) ((val<int>) ((((-1417302197429249353LL) + (9223372036854775807LL))) << (((((/* implicit */val<int>) var_3)) - (61))))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) ((val<signed char>) var_0))) || (((/* implicit */val<bool>) ((-1) * (((/* implicit */val<int>) (val<unsigned short>)62176)))))))) : (((((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) (val<signed char>)49)))) | (((/* implicit */val<int>) (val<unsigned short>)3360)))));
    *var_22 ^= ((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) (val<short>)32765)), (min((max((1987228938), (((/* implicit */val<int>) var_5)))), (((/* implicit */val<int>) ((var_15) == (((/* implicit */val<int>) var_10)))))))));
    *var_23 = ((/* implicit */val<unsigned long long int>) min((*var_23), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)32674)) ? (166654943U) : (2660700614U)))) ? (((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) (val<signed char>)69)), ((val<unsigned short>)16383)))) : (((/* implicit */val<int>) ((val<short>) 1006632952U)))))) : (max((max((var_18), (((/* implicit */val<long long int>) var_1)))), (((/* implicit */val<long long int>) var_3)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28080;
signed char var_1 = (signed char)-3;
unsigned char var_3 = (unsigned char)61;
short var_4 = (short)-8287;
short var_5 = (short)6402;
bool var_6 = (bool)1;
long long int var_9 = -8948232678237504466LL;
unsigned char var_10 = (unsigned char)2;
unsigned char var_14 = (unsigned char)176;
int var_15 = 774346959;
long long int var_17 = 680969933173517784LL;
long long int var_18 = -3088865087373296808LL;
int zero = 0;
unsigned int var_19 = 4059070913U;
unsigned long long int var_20 = 596453278134253351ULL;
int var_21 = -1697987700;
unsigned long long int var_22 = 3849985608585336647ULL;
unsigned long long int var_23 = 7009076486201168367ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 774346959U;
    value_mismatch |= var_20 != 568518512882432ULL;
    value_mismatch |= var_21 != 1;
    value_mismatch |= var_22 != 3849985608585336647ULL;
    value_mismatch |= var_23 != 69ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_9, var_10, var_14, var_15, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
