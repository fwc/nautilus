/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7133
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7133
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
void test(val<short> var_1, val<int> var_2, val<long long int> var_4, val<unsigned short> var_7, val<bool> var_10, val<long long int> var_11, val<int> var_15, val<int> zero, val<long long int*> var_17, val<short*> var_18, val<long long int*> var_19, val<bool*> var_20) {
    *var_17 = ((/* implicit */val<long long int>) (val<signed char>)-101);
    *var_18 = ((/* implicit */val<short>) (((((!(((/* implicit */val<bool>) var_11)))) ? (((((/* implicit */val<bool>) var_4)) ? (var_15) : (((/* implicit */val<int>) var_10)))) : (var_2))) + (((/* implicit */val<int>) var_7))));
    *var_19 = ((/* implicit */val<long long int>) (val<bool>)0);
    *var_20 = ((/* implicit */val<bool>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1683;
int var_2 = 944558999;
long long int var_4 = 29657575171938825LL;
unsigned short var_7 = (unsigned short)56278;
bool var_10 = (bool)0;
long long int var_11 = 8392034738489319069LL;
int var_15 = 863570829;
int zero = 0;
long long int var_17 = 1324585258659779169LL;
short var_18 = (short)24019;
long long int var_19 = 2264446650778142907LL;
bool var_20 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -101LL;
    value_mismatch |= var_18 != (short)-20627;
    value_mismatch |= var_19 != 0LL;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_7, var_10, var_11, var_15, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
