/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9595
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9595
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
void test(val<unsigned short> var_0, val<int> var_1, val<bool> var_2, val<short> var_4, val<unsigned long long int> var_6, val<bool> var_7, val<bool> var_8, val<unsigned long long int> var_9, val<short> var_10, val<bool> var_11, val<signed char> var_12, val<int> zero, val<bool*> var_13, val<long long int*> var_14) {
    *var_13 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((((/* implicit */val<bool>) (+(var_6)))) ? (((((/* implicit */val<bool>) 350356002)) ? (((/* implicit */val<int>) (val<unsigned char>)0)) : (((/* implicit */val<int>) var_8)))) : (((/* implicit */val<int>) max((((/* implicit */val<short>) var_12)), (var_10)))))) : (((((/* implicit */val<bool>) ((939524096) << (((((/* implicit */val<int>) var_0)) - (48248)))))) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) max((var_2), (var_11))))))));
    *var_14 |= ((/* implicit */val<long long int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((var_7) ? (742778402) : (((/* implicit */val<int>) var_4)))))))) << (((((((/* implicit */val<bool>) (val<short>)7370)) ? (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<long long int>) -742778398)) : (-9041291880150928579LL))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) -742778403)) || (((/* implicit */val<bool>) (val<short>)-5648)))))))) + (742778411LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48249;
int var_1 = -878670738;
bool var_2 = (bool)1;
short var_4 = (short)17148;
unsigned long long int var_6 = 5142297939015858810ULL;
bool var_7 = (bool)0;
bool var_8 = (bool)0;
unsigned long long int var_9 = 480971791586272514ULL;
short var_10 = (short)21451;
bool var_11 = (bool)0;
signed char var_12 = (signed char)119;
int zero = 0;
bool var_13 = (bool)0;
long long int var_14 = -576945502604188838LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)0;
    value_mismatch |= var_14 != -576945502604188838LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_7, var_8, var_9, var_10, var_11, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
