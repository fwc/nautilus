/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2961
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2961
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
void test(val<int> var_0, val<short> var_3, val<unsigned char> var_4, val<int> var_5, val<short> var_6, val<unsigned long long int> var_7, val<short> var_11, val<unsigned char> var_12, val<int> zero, val<unsigned short*> var_13, val<unsigned char*> var_14, val<unsigned char*> var_15, val<int*> var_16) {
    *var_13 = ((/* implicit */val<unsigned short>) ((val<bool>) ((((/* implicit */val<int>) (val<bool>)1)) > (-1050609392))));
    *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<long long int>) -388527872)) : ((-9223372036854775807LL - 1LL))))) ? (max((((/* implicit */val<int>) var_4)), (((((/* implicit */val<int>) var_12)) + (((/* implicit */val<int>) var_3)))))) : (((((/* implicit */val<int>) (val<unsigned short>)65535)) >> (((/* implicit */val<int>) (val<unsigned short>)4))))));
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) var_5)) ? (var_0) : (((/* implicit */val<int>) var_11)))) ^ (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_12)))))))) != (var_7)));
    *var_16 |= ((/* implicit */val<int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -555646576;
short var_3 = (short)22891;
unsigned char var_4 = (unsigned char)201;
int var_5 = 575797423;
short var_6 = (short)18226;
unsigned long long int var_7 = 16546490142957238496ULL;
short var_11 = (short)-12003;
unsigned char var_12 = (unsigned char)213;
int zero = 0;
unsigned short var_13 = (unsigned short)47309;
unsigned char var_14 = (unsigned char)1;
unsigned char var_15 = (unsigned char)251;
int var_16 = 870898993;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)1;
    value_mismatch |= var_14 != (unsigned char)64;
    value_mismatch |= var_15 != (unsigned char)1;
    value_mismatch |= var_16 != 872414705;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_6, var_7, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
