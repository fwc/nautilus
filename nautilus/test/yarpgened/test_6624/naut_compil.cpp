/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6624
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6624
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
void test(val<signed char> var_6, val<bool> var_10, val<unsigned short> var_12, val<int> zero, val<unsigned int*> var_13, val<int*> var_14) {
    *var_13 |= ((/* implicit */val<unsigned int>) var_12);
    *var_14 = ((/* implicit */val<int>) min((((/* implicit */val<signed char>) var_10)), (((val<signed char>) ((((/* implicit */val<bool>) var_6)) ? (-2619063328824622116LL) : ((-9223372036854775807LL - 1LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)90;
bool var_10 = (bool)1;
unsigned short var_12 = (unsigned short)4876;
int zero = 0;
unsigned int var_13 = 1764159421U;
int var_14 = 750125484;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1764163517U;
    value_mismatch |= var_14 != -36;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_10, var_12, zero, &var_13, &var_14);
  checksum();
}
