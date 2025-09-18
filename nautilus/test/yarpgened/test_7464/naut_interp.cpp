/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7464
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7464
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
void test(val<int> var_1, val<int> var_3, val<int> var_4, val<long long int> var_7, val<unsigned int> var_9, val<signed char> var_11, val<short> var_13, val<bool> var_15, val<int> zero, val<bool*> var_16, val<int*> var_17) {
    *var_16 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) var_3)) ^ (var_9)))) ? (((((/* implicit */val<bool>) var_13)) ? (var_1) : (((/* implicit */val<int>) var_13)))) : (var_4)))) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9)))))));
    *var_17 = ((/* implicit */val<int>) max((((/* implicit */val<long long int>) var_15)), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_15))) : (var_9)))) ? (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) : (var_7))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_15)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1006090121;
int var_3 = 1000307985;
int var_4 = -2100848228;
long long int var_7 = 868369100490544879LL;
unsigned int var_9 = 3110773677U;
signed char var_11 = (signed char)50;
short var_13 = (short)7628;
bool var_15 = (bool)0;
int zero = 0;
bool var_16 = (bool)0;
int var_17 = -1765006023;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_7, var_9, var_11, var_13, var_15, zero, &var_16, &var_17);
  checksum();
}
