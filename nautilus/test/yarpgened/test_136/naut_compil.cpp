/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 136
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=136
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
void test(val<int> var_2, val<int> var_6, val<int> zero, val<signed char*> var_13, val<signed char*> var_14) {
    *var_13 = ((/* implicit */val<signed char>) (((+((+(5221514078950137838ULL))))) * (5221514078950137838ULL)));
    *var_14 = ((/* implicit */val<signed char>) min((var_6), (var_2)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -749141358;
int var_6 = -1480771331;
int zero = 0;
signed char var_13 = (signed char)1;
signed char var_14 = (signed char)125;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)68;
    value_mismatch |= var_14 != (signed char)-3;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
