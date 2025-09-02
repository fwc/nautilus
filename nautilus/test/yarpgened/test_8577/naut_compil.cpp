/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8577
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8577
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
void test(val<unsigned long long int> var_1, val<unsigned long long int> var_7, val<unsigned long long int> var_8, val<short> var_10, val<unsigned long long int> var_11, val<signed char> var_15, val<int> zero, val<signed char*> var_16, val<signed char*> var_17, val<bool*> var_18) {
    *var_16 = ((/* implicit */val<signed char>) max(((-(max((var_1), (((/* implicit */val<unsigned long long int>) var_10)))))), (((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<short>)-8712))))) ? (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_15))))) : (max((var_11), (((/* implicit */val<unsigned long long int>) (val<short>)-30491))))))));
    *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) (((((-(((/* implicit */val<int>) var_15)))) + (2147483647))) << (((var_7) - (13860694340170691664ULL)))))) < (var_8)));
    *var_18 -= ((/* implicit */val<bool>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5800721349890060915ULL;
unsigned long long int var_7 = 13860694340170691664ULL;
unsigned long long int var_8 = 14361111269627116831ULL;
short var_10 = (short)-2168;
unsigned long long int var_11 = 8604786738170517926ULL;
signed char var_15 = (signed char)20;
int zero = 0;
signed char var_16 = (signed char)-10;
signed char var_17 = (signed char)118;
bool var_18 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)-20;
    value_mismatch |= var_17 != (signed char)1;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, var_8, var_10, var_11, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
