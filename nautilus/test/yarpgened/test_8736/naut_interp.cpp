/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8736
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8736
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
void test(val<unsigned short> var_0, val<unsigned char> var_3, val<signed char> var_8, val<unsigned int> var_9, val<unsigned char> var_10, val<bool> var_11, val<unsigned int> var_13, val<int> zero, val<int*> var_17, val<int*> var_18, val<unsigned int*> var_19) {
    *var_17 = ((/* implicit */val<int>) var_11);
    *var_18 = (~(((/* implicit */val<int>) (!(((/* implicit */val<bool>) 16744448U))))));
    *var_19 = ((/* implicit */val<unsigned int>) max((min((((/* implicit */val<unsigned long long int>) var_13)), ((+(7829917392269314826ULL))))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_3))))) ? (((((/* implicit */val<bool>) var_3)) ? (var_13) : (var_9))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_0))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40012;
unsigned char var_3 = (unsigned char)226;
signed char var_8 = (signed char)113;
unsigned int var_9 = 2786698688U;
unsigned char var_10 = (unsigned char)178;
bool var_11 = (bool)0;
unsigned int var_13 = 3306815689U;
int zero = 0;
int var_17 = -560432568;
int var_18 = 1360205942;
unsigned int var_19 = 3607289661U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 0;
    value_mismatch |= var_18 != -1;
    value_mismatch |= var_19 != 3306815689U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_8, var_9, var_10, var_11, var_13, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
