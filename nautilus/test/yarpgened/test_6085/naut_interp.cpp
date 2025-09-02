/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6085
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6085
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
void test(val<bool> var_0, val<short> var_1, val<short> var_9, val<int> zero, val<long long int*> var_10, val<short*> var_11, val<short*> var_12) {
    *var_10 = ((/* implicit */val<long long int>) max((((/* implicit */val<int>) var_0)), (((((/* implicit */val<int>) (val<bool>)1)) + (((((/* implicit */val<int>) var_0)) << (0U)))))));
    *var_11 = ((/* implicit */val<short>) ((((/* implicit */val<int>) (val<bool>)1)) >> (((((/* implicit */val<int>) (val<unsigned short>)127)) - (106)))));
    *var_12 ^= ((/* implicit */val<short>) min((((/* implicit */val<long long int>) var_1)), (min((((/* implicit */val<long long int>) ((val<int>) var_9))), (((val<long long int>) 10258140841898874449ULL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
short var_1 = (short)-26910;
short var_9 = (short)18864;
int zero = 0;
long long int var_10 = 2908097347208839046LL;
short var_11 = (short)-15232;
short var_12 = (short)-4135;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1LL;
    value_mismatch |= var_11 != (short)0;
    value_mismatch |= var_12 != (short)-1656;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
