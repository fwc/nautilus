/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3630
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3630
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
void test(val<short> var_0, val<long long int> var_1, val<unsigned short> var_2, val<unsigned char> var_3, val<int> var_4, val<bool> var_6, val<signed char> var_7, val<signed char> var_8, val<short> var_9, val<short> var_10, val<int> zero, val<signed char*> var_11, val<long long int*> var_12, val<long long int*> var_13, val<bool*> var_14) {
    *var_11 ^= ((/* implicit */val<signed char>) ((((/* implicit */val<int>) ((val<bool>) var_7))) + (max((min((-571781201), (((/* implicit */val<int>) var_9)))), (max((var_4), (((/* implicit */val<int>) var_0))))))));
    *var_12 |= ((((val<long long int>) var_10)) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<signed char>) (~(((/* implicit */val<int>) var_3))))))));
    *var_13 = ((/* implicit */val<long long int>) min((((/* implicit */val<int>) max((min(((val<unsigned char>)179), (((/* implicit */val<unsigned char>) var_6)))), (((/* implicit */val<unsigned char>) var_7))))), (((((((/* implicit */val<int>) (val<signed char>)73)) / (((/* implicit */val<int>) (val<signed char>)70)))) * (((/* implicit */val<int>) var_2))))));
    *var_14 = (!(((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) var_8)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)187))) : ((+(var_1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31498;
long long int var_1 = -585220797960327130LL;
unsigned short var_2 = (unsigned short)59979;
unsigned char var_3 = (unsigned char)227;
int var_4 = 183583274;
bool var_6 = (bool)0;
signed char var_7 = (signed char)-47;
signed char var_8 = (signed char)-69;
short var_9 = (short)-18125;
short var_10 = (short)18325;
int zero = 0;
signed char var_11 = (signed char)124;
long long int var_12 = 4468756838961883064LL;
long long int var_13 = 5003844371143143154LL;
bool var_14 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)87;
    value_mismatch |= var_12 != 4468756838961899513LL;
    value_mismatch |= var_13 != 209LL;
    value_mismatch |= var_14 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
