/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5468
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5468
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
void test(val<unsigned long long int> var_4, val<bool> var_8, val<unsigned long long int> var_10, val<unsigned long long int> var_15, val<long long int> var_16, val<int> zero, val<signed char*> var_20, val<unsigned int*> var_21, val<unsigned long long int*> var_22) {
    *var_20 = ((/* implicit */val<signed char>) min((max((min((var_15), (((/* implicit */val<unsigned long long int>) var_8)))), (var_4))), ((+(((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) + (0ULL)))))));
    *var_21 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<unsigned long long int>) var_16)), (18446744073709551612ULL)));
    *var_22 = var_10;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7247334758625434503ULL;
bool var_8 = (bool)1;
unsigned long long int var_10 = 4895732122819448496ULL;
unsigned long long int var_15 = 1801404378281627182ULL;
long long int var_16 = 7019116687581472504LL;
int zero = 0;
signed char var_20 = (signed char)24;
unsigned int var_21 = 2237916066U;
unsigned long long int var_22 = 3883765197501812821ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)1;
    value_mismatch |= var_21 != 4294967292U;
    value_mismatch |= var_22 != 4895732122819448496ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, var_10, var_15, var_16, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
