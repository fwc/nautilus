/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7430
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7430
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
void test(val<unsigned long long int> var_6, val<unsigned int> var_10, val<unsigned int> var_15, val<int> zero, val<int*> var_19, val<signed char*> var_20) {
    *var_19 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) min((((val<int>) var_6)), (((/* implicit */val<int>) ((val<unsigned short>) var_15)))))) && (((/* implicit */val<bool>) var_10))));
    *var_20 -= ((/* implicit */val<signed char>) ((1730355514) < (((/* implicit */val<int>) (val<unsigned char>)228))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9884901197867320908ULL;
unsigned int var_10 = 1514796573U;
unsigned int var_15 = 1317297775U;
int zero = 0;
int var_19 = 85098716;
signed char var_20 = (signed char)119;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1;
    value_mismatch |= var_20 != (signed char)119;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_10, var_15, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
