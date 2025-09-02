/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8186
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8186
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
void test(val<long long int> var_0, val<long long int> var_2, val<short> var_4, val<short> var_5, val<signed char> var_12, val<bool> var_13, val<long long int> var_14, val<unsigned int> var_17, val<int> zero, val<long long int*> var_19, val<signed char*> var_20, val<int*> var_21, val<unsigned short*> var_22) {
    *var_19 = ((((((/* implicit */val<int>) var_4)) <= (((/* implicit */val<int>) ((((/* implicit */val<int>) var_5)) > (((/* implicit */val<int>) var_4))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))) : (((((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) var_12)), (var_17)))) - (var_2))));
    *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))) : (max((((/* implicit */val<long long int>) var_4)), (min((((/* implicit */val<long long int>) var_13)), (var_0)))))));
    *var_21 = ((/* implicit */val<int>) ((var_17) >> (((((/* implicit */val<int>) (val<unsigned short>)65535)) - (65509)))));
    *var_22 = ((/* implicit */val<unsigned short>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5346834878752213653LL;
long long int var_2 = 3603361563651958873LL;
short var_4 = (short)30088;
short var_5 = (short)-10036;
signed char var_12 = (signed char)9;
bool var_13 = (bool)0;
long long int var_14 = -4177476535045845351LL;
unsigned int var_17 = 1758653547U;
int zero = 0;
long long int var_19 = 5236406554463904417LL;
signed char var_20 = (signed char)-6;
int var_21 = -1752771370;
unsigned short var_22 = (unsigned short)63835;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -3603361561893305326LL;
    value_mismatch |= var_20 != (signed char)0;
    value_mismatch |= var_21 != 26;
    value_mismatch |= var_22 != (unsigned short)9;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_12, var_13, var_14, var_17, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
