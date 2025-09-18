/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7061
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7061
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
void test(val<unsigned int> var_1, val<int> var_2, val<unsigned short> var_3, val<unsigned int> var_6, val<unsigned int> var_9, val<int> zero, val<int*> var_11, val<int*> var_12) {
    *var_11 = ((/* implicit */val<int>) var_6);
    *var_12 = ((/* implicit */val<int>) (+(((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_3))))) ? (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned int>) var_2)) : (var_9))) : (((/* implicit */val<unsigned int>) (-(348921379))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4267741961U;
int var_2 = -267628156;
unsigned short var_3 = (unsigned short)3926;
unsigned int var_6 = 1310864860U;
unsigned int var_9 = 647571288U;
int zero = 0;
int var_11 = -1151357008;
int var_12 = 1250082177;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1310864860;
    value_mismatch |= var_12 != -267628156;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_6, var_9, zero, &var_11, &var_12);
  checksum();
}
