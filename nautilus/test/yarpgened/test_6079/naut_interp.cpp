/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6079
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6079
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
void test(val<int> var_0, val<short> var_1, val<int> var_2, val<long long int> var_3, val<unsigned short> var_4, val<short> var_5, val<long long int> var_6, val<unsigned char> var_7, val<bool> var_8, val<signed char> var_9, val<short> var_10, val<signed char> var_11, val<int> zero, val<int*> var_13, val<long long int*> var_14, val<bool*> var_15) {
    *var_13 += ((((/* implicit */val<bool>) var_2)) ? (max((var_0), (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<signed char>)-15)) <= (((/* implicit */val<int>) var_9))))))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (var_3) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))))))))));
    *var_14 = min(((+(((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) : (var_3))))), (((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_4)), (var_6)))) ? (max((var_6), (((/* implicit */val<long long int>) var_5)))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_7))))))));
    *var_15 = ((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<signed char>)32))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -799776409;
short var_1 = (short)28635;
int var_2 = -1492133987;
long long int var_3 = -7699822826796532708LL;
unsigned short var_4 = (unsigned short)23869;
short var_5 = (short)-14037;
long long int var_6 = -9049279540797801076LL;
unsigned char var_7 = (unsigned char)45;
bool var_8 = (bool)1;
signed char var_9 = (signed char)-14;
short var_10 = (short)486;
signed char var_11 = (signed char)-97;
int zero = 0;
int var_13 = 1768790363;
long long int var_14 = 4973074217820847190LL;
bool var_15 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1768790364;
    value_mismatch |= var_14 != -14037LL;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
