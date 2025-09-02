/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7329
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7329
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
void test(val<bool> var_1, val<unsigned long long int> var_4, val<unsigned int> var_6, val<unsigned char> var_7, val<int> var_8, val<short> var_9, val<short> var_11, val<int> zero, val<bool*> var_13, val<long long int*> var_14, val<signed char*> var_15) {
    *var_13 = ((/* implicit */val<bool>) max((((val<short>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_7))))), (((/* implicit */val<short>) var_7))));
    *var_14 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((((/* implicit */val<bool>) var_9)) || (((/* implicit */val<bool>) var_6)))))))) ? (min((((/* implicit */val<unsigned long long int>) ((val<signed char>) var_8))), (max((((/* implicit */val<unsigned long long int>) (val<signed char>)113)), (var_4))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1)))));
    *var_15 = ((/* implicit */val<signed char>) ((val<int>) var_11));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned long long int var_4 = 1699710429079477767ULL;
unsigned int var_6 = 2584186444U;
unsigned char var_7 = (unsigned char)48;
int var_8 = -172815448;
short var_9 = (short)-24009;
short var_11 = (short)31660;
int zero = 0;
bool var_13 = (bool)1;
long long int var_14 = 3486562222424491393LL;
signed char var_15 = (signed char)63;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 1699710429079477767LL;
    value_mismatch |= var_15 != (signed char)-84;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_6, var_7, var_8, var_9, var_11, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
