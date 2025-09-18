/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2211
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2211
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
void test(val<short> var_2, val<unsigned int> var_3, val<unsigned short> var_4, val<unsigned short> var_5, val<short> var_9, val<int> zero, val<long long int*> var_11, val<short*> var_12) {
    *var_11 &= ((/* implicit */val<long long int>) max((var_3), (((/* implicit */val<unsigned int>) (((val<bool>)1) ? (((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_2)), (var_4)))) : (((/* implicit */val<int>) var_9)))))));
    *var_12 = ((/* implicit */val<short>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-30907;
unsigned int var_3 = 2624995827U;
unsigned short var_4 = (unsigned short)35823;
unsigned short var_5 = (unsigned short)40546;
short var_9 = (short)-31701;
int zero = 0;
long long int var_11 = -1922759057894972935LL;
short var_12 = (short)-13451;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 2483044849LL;
    value_mismatch |= var_12 != (short)-24990;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_9, zero, &var_11, &var_12);
  checksum();
}
