/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7347
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7347
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
void test(val<signed char> var_2, val<unsigned short> var_9, val<long long int> var_10, val<signed char> var_11, val<int> zero, val<long long int*> var_15, val<signed char*> var_16, val<bool*> var_17, val<bool*> var_18) {
    *var_15 -= ((/* implicit */val<long long int>) (+((~(((/* implicit */val<int>) (val<bool>)0))))));
    *var_16 = ((/* implicit */val<signed char>) var_9);
    *var_17 = ((/* implicit */val<bool>) (val<signed char>)27);
    *var_18 = ((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) - ((~(((((/* implicit */val<bool>) 3873037856U)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))) : (var_10)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)71;
unsigned short var_9 = (unsigned short)21751;
long long int var_10 = -2671316746981375305LL;
signed char var_11 = (signed char)19;
int zero = 0;
long long int var_15 = 5097319743228030749LL;
signed char var_16 = (signed char)95;
bool var_17 = (bool)0;
bool var_18 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 5097319743228030750LL;
    value_mismatch |= var_16 != (signed char)-9;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_9, var_10, var_11, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
