/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6097
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6097
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
void test(val<long long int> var_1, val<long long int> var_15, val<int> zero, val<long long int*> var_18, val<signed char*> var_19) {
    *var_18 = var_15;
    *var_19 = ((/* implicit */val<signed char>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1693775071237642587LL;
long long int var_15 = 4386914292237747927LL;
int zero = 0;
long long int var_18 = -2982800028051476085LL;
signed char var_19 = (signed char)-5;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 4386914292237747927LL;
    value_mismatch |= var_19 != (signed char)91;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_15, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
