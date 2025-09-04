/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4877
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4877
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
void test(val<long long int> var_0, val<unsigned short> var_2, val<unsigned short> var_3, val<long long int> var_4, val<unsigned int> var_5, val<long long int> var_8, val<short> var_9, val<long long int> var_10, val<unsigned short> var_11, val<unsigned char> var_13, val<int> var_15, val<int> zero, val<unsigned int*> var_18, val<unsigned long long int*> var_19, val<long long int*> var_20, val<signed char*> var_21) {
    *var_18 = ((/* implicit */val<unsigned int>) ((((max((((/* implicit */val<long long int>) var_11)), (var_10))) << (((((((/* implicit */val<long long int>) var_5)) % (var_0))) - (61377101LL))))) != (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-47)))));
    *var_19 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)-21863)) ? (((/* implicit */val<long long int>) var_15)) : (-7910220864697785442LL)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)241))))) : (((((/* implicit */val<bool>) min((var_3), (((/* implicit */val<unsigned short>) var_9))))) ? (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))) != (var_4)))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_8)))))))));
    *var_20 = ((/* implicit */val<long long int>) var_3);
    *var_21 = ((/* implicit */val<signed char>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6526709521264816397LL;
unsigned short var_2 = (unsigned short)29599;
unsigned short var_3 = (unsigned short)38131;
long long int var_4 = -1923871966773442317LL;
unsigned int var_5 = 61377102U;
long long int var_8 = -5954049641757118999LL;
short var_9 = (short)17549;
long long int var_10 = 4602808824032548157LL;
unsigned short var_11 = (unsigned short)33230;
unsigned char var_13 = (unsigned char)40;
int var_15 = 2059725548;
int zero = 0;
unsigned int var_18 = 4089681114U;
unsigned long long int var_19 = 9202437366924966711ULL;
long long int var_20 = -6158989576596545880LL;
signed char var_21 = (signed char)-113;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1U;
    value_mismatch |= var_19 != 0ULL;
    value_mismatch |= var_20 != 38131LL;
    value_mismatch |= var_21 != (signed char)-97;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_8, var_9, var_10, var_11, var_13, var_15, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
