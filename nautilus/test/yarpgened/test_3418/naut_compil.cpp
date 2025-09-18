/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3418
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3418
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
void test(val<int> var_2, val<int> var_12, val<bool> var_17, val<int> zero, val<unsigned char*> var_20, val<signed char*> var_21, val<unsigned int*> var_22) {
    *var_20 = ((/* implicit */val<unsigned char>) (!(var_17)));
    *var_21 = ((/* implicit */val<signed char>) var_2);
    *var_22 = ((/* implicit */val<unsigned int>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1558650814;
int var_12 = -1622449167;
bool var_17 = (bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)47;
signed char var_21 = (signed char)43;
unsigned int var_22 = 2596341629U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)1;
    value_mismatch |= var_21 != (signed char)-66;
    value_mismatch |= var_22 != 2672518129U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_12, var_17, zero, &var_20, &var_21, &var_22);
  checksum();
}
