/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1867
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1867
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
void test(val<long long int> var_0, val<long long int> var_7, val<long long int> var_15, val<int> zero, val<signed char*> var_17, val<unsigned int*> var_18) {
    *var_17 = ((/* implicit */val<signed char>) min((*var_17), (((/* implicit */val<signed char>) max((var_15), (max((var_0), (var_7))))))));
    *var_18 ^= ((/* implicit */val<unsigned int>) -793271099);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -594510539158957105LL;
long long int var_7 = -8770550537748620950LL;
long long int var_15 = 2762811253724866821LL;
int zero = 0;
signed char var_17 = (signed char)82;
unsigned int var_18 = 2765772901U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)5;
    value_mismatch |= var_18 != 1953365152U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_15, zero, &var_17, &var_18);
  checksum();
}
