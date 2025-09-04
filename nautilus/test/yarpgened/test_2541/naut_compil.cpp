/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2541
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2541
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
void test(val<short> var_2, val<unsigned long long int> var_7, val<int> zero, val<int*> var_11, val<int*> var_12, val<short*> var_13) {
    *var_11 = ((/* implicit */val<int>) 18234238079465270659ULL);
    *var_12 |= ((/* implicit */val<int>) max((((/* implicit */val<unsigned long long int>) var_2)), (var_7)));
    *var_13 = ((/* implicit */val<short>) ((val<int>) var_2));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)21911;
unsigned long long int var_7 = 13098622372131337580ULL;
int zero = 0;
int var_11 = -1990381244;
int var_12 = -43186679;
short var_13 = (short)1397;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -1804751485;
    value_mismatch |= var_12 != -33589395;
    value_mismatch |= var_13 != (short)21911;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
