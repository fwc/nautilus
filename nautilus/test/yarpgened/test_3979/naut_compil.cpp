/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3979
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3979
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
void test(val<short> var_3, val<bool> var_5, val<int> var_12, val<int> zero, val<int*> var_13, val<unsigned long long int*> var_14, val<long long int*> var_15) {
    *var_13 = ((/* implicit */val<int>) ((((val<int>) var_5)) <= (8176)));
    *var_14 = ((/* implicit */val<unsigned long long int>) var_12);
    *var_15 = ((/* implicit */val<long long int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28324;
bool var_5 = (bool)1;
int var_12 = -721226688;
int zero = 0;
int var_13 = -1098184055;
unsigned long long int var_14 = 1031947281659569927ULL;
long long int var_15 = 6236395477746977240LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1;
    value_mismatch |= var_14 != 18446744072988324928ULL;
    value_mismatch |= var_15 != -28324LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
