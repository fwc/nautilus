/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7919
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7919
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
void test(val<unsigned char> var_2, val<int> var_4, val<unsigned char> var_5, val<long long int> var_9, val<unsigned int> var_11, val<unsigned short> var_13, val<int> zero, val<long long int*> var_17, val<unsigned char*> var_18, val<signed char*> var_19) {
    *var_17 = ((/* implicit */val<long long int>) var_2);
    *var_18 -= ((/* implicit */val<unsigned char>) min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (var_9) : (((/* implicit */val<long long int>) var_4))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_13))) : (var_11)))), ((~(1600422955639989768LL)))));
    *var_19 = ((/* implicit */val<signed char>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)63;
int var_4 = -548578335;
unsigned char var_5 = (unsigned char)172;
long long int var_9 = -680431694859483007LL;
unsigned int var_11 = 3394805598U;
unsigned short var_13 = (unsigned short)33286;
int zero = 0;
long long int var_17 = -1485091659472486685LL;
unsigned char var_18 = (unsigned char)32;
signed char var_19 = (signed char)33;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 63LL;
    value_mismatch |= var_18 != (unsigned char)41;
    value_mismatch |= var_19 != (signed char)-84;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_9, var_11, var_13, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
