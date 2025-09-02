/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2276
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2276
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
void test(val<short> var_1, val<int> zero, val<unsigned short*> var_11, val<short*> var_12, val<bool*> var_13) {
    *var_11 = ((/* implicit */val<unsigned short>) ((val<signed char>) 3464277975U));
    *var_12 &= ((/* implicit */val<short>) ((9223372036854775802LL) != (((/* implicit */val<long long int>) -475937883))));
    *var_13 = ((/* implicit */val<bool>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12031;
int zero = 0;
unsigned short var_11 = (unsigned short)58056;
short var_12 = (short)-6009;
bool var_13 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)65495;
    value_mismatch |= var_12 != (short)1;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
