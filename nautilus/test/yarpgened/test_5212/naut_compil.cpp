/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5212
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5212
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
void test(val<unsigned long long int> var_1, val<signed char> var_2, val<int> var_4, val<unsigned long long int> var_8, val<int> zero, val<unsigned char*> var_14, val<long long int*> var_15) {
    *var_14 |= ((/* implicit */val<unsigned char>) var_2);
    *var_15 = ((/* implicit */val<long long int>) ((((val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<signed char>) (!(((/* implicit */val<bool>) (val<signed char>)106))))))) : (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<unsigned long long int>) (~(var_4)))) : (var_1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2991352318999821866ULL;
signed char var_2 = (signed char)26;
int var_4 = 1857774881;
unsigned long long int var_8 = 9289138120760619708ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)101;
long long int var_15 = -5070579722995957113LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)127;
    value_mismatch |= var_15 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_8, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
