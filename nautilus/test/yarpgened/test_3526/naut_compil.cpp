/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3526
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3526
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
void test(val<long long int> var_6, val<unsigned int> var_11, val<unsigned int> var_12, val<int> zero, val<bool*> var_17, val<signed char*> var_18, val<int*> var_19) {
    *var_17 = ((/* implicit */val<bool>) var_12);
    *var_18 ^= ((/* implicit */val<signed char>) var_11);
    *var_19 ^= ((/* implicit */val<int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -1922247084176388919LL;
unsigned int var_11 = 3636875078U;
unsigned int var_12 = 1909784630U;
int zero = 0;
bool var_17 = (bool)0;
signed char var_18 = (signed char)-109;
int var_19 = -1628559556;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (signed char)-43;
    value_mismatch |= var_19 != -1077089291;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_11, var_12, zero, &var_17, &var_18, &var_19);
  checksum();
}
