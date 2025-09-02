/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4872
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4872
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
void test(val<short> var_0, val<bool> var_8, val<int> var_9, val<int> zero, val<unsigned long long int*> var_10, val<bool*> var_11, val<bool*> var_12, val<bool*> var_13) {
    *var_10 = ((/* implicit */val<unsigned long long int>) var_0);
    *var_11 = ((/* implicit */val<bool>) ((val<short>) var_9));
    *var_12 = (val<bool>)1;
    *var_13 = ((/* implicit */val<bool>) ((val<short>) var_8));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18001;
bool var_8 = (bool)1;
int var_9 = -2133678207;
int zero = 0;
unsigned long long int var_10 = 609778139127982873ULL;
bool var_11 = (bool)0;
bool var_12 = (bool)0;
bool var_13 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 18001ULL;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
