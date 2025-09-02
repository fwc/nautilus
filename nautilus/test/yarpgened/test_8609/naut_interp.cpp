/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8609
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8609
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
void test(val<unsigned long long int> var_2, val<bool> var_7, val<signed char> var_9, val<int> zero, val<bool*> var_13, val<bool*> var_14, val<signed char*> var_15) {
    *var_13 = ((/* implicit */val<bool>) ((val<unsigned char>) var_2));
    *var_14 &= var_7;
    *var_15 = ((/* implicit */val<signed char>) max((*var_15), (var_9)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2874038136585953114ULL;
bool var_7 = (bool)1;
signed char var_9 = (signed char)75;
int zero = 0;
bool var_13 = (bool)0;
bool var_14 = (bool)0;
signed char var_15 = (signed char)60;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (bool)0;
    value_mismatch |= var_15 != (signed char)75;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_9, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
