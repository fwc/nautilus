/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2744
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2744
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
void test(val<signed char> var_0, val<int> var_2, val<short> var_3, val<bool> var_4, val<long long int> var_8, val<int> var_10, val<int> zero, val<signed char*> var_11, val<unsigned long long int*> var_12, val<unsigned char*> var_13) {
    *var_11 = ((/* implicit */val<signed char>) var_2);
    *var_12 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) max((((/* implicit */val<signed char>) (val<bool>)0)), ((val<signed char>)-5)))) : (((/* implicit */val<int>) ((((/* implicit */val<int>) var_0)) != (((/* implicit */val<int>) max((var_3), (var_3)))))))));
    *var_13 = ((/* implicit */val<unsigned char>) max((*var_13), (((/* implicit */val<unsigned char>) min((((((/* implicit */val<bool>) (((val<bool>)1) ? (((/* implicit */val<int>) (val<signed char>)-1)) : (8)))) ? (max((((/* implicit */val<long long int>) var_4)), (var_8))) : (((/* implicit */val<long long int>) var_10)))), (((/* implicit */val<long long int>) (val<signed char>)14)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
int var_2 = -911691540;
short var_3 = (short)-2061;
bool var_4 = (bool)1;
long long int var_8 = 1725331526989312383LL;
int var_10 = -122618780;
int zero = 0;
signed char var_11 = (signed char)-60;
unsigned long long int var_12 = 18116442611440349417ULL;
unsigned char var_13 = (unsigned char)75;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)-20;
    value_mismatch |= var_12 != 0ULL;
    value_mismatch |= var_13 != (unsigned char)75;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_8, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
