/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 791
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=791
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
void test(val<bool> var_11, val<signed char> var_14, val<int> zero, val<long long int*> var_19, val<long long int*> var_20, val<unsigned long long int*> var_21) {
    *var_19 = ((/* implicit */val<long long int>) var_14);
    *var_20 = ((/* implicit */val<long long int>) var_11);
    *var_21 += ((/* implicit */val<unsigned long long int>) (!((val<bool>)1)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_11 = (bool)1;
signed char var_14 = (signed char)-87;
int zero = 0;
long long int var_19 = -1349893213491658509LL;
long long int var_20 = 1979527086094786119LL;
unsigned long long int var_21 = 18362253577266744749ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -87LL;
    value_mismatch |= var_20 != 1LL;
    value_mismatch |= var_21 != 18362253577266744749ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, var_14, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
