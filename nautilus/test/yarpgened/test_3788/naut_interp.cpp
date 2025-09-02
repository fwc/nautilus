/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3788
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3788
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
void test(val<short> var_0, val<long long int> var_1, val<long long int> var_4, val<bool> var_6, val<bool> var_9, val<unsigned long long int> var_11, val<int> zero, val<bool*> var_13, val<bool*> var_14) {
    *var_13 = ((/* implicit */val<bool>) max((*var_13), (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_4) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9)))))) ? (((/* implicit */val<int>) ((val<bool>) -319822419571850011LL))) : (((/* implicit */val<int>) var_6))))) ? (((((((/* implicit */val<bool>) (val<unsigned short>)8)) && (((/* implicit */val<bool>) -1024604436)))) ? (max((((/* implicit */val<unsigned long long int>) 535331365)), (var_11))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) <= (var_4))))))) : (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) ((((/* implicit */val<int>) var_0)) <= (((/* implicit */val<int>) (val<unsigned short>)3)))))))))))));
    *var_14 = ((/* implicit */val<bool>) ((var_11) << (((var_1) + (5188035773677129748LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25844;
long long int var_1 = -5188035773677129694LL;
long long int var_4 = 412325659865766023LL;
bool var_6 = (bool)0;
bool var_9 = (bool)0;
unsigned long long int var_11 = 7346368393012628169ULL;
int zero = 0;
bool var_13 = (bool)1;
bool var_14 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_6, var_9, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
