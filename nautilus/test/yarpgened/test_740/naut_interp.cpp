/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 740
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=740
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
void test(val<unsigned char> var_1, val<signed char> var_4, val<unsigned int> var_5, val<int> var_11, val<unsigned int> var_13, val<int> zero, val<signed char*> var_16, val<signed char*> var_17) {
    *var_16 *= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<unsigned int>) var_11)) : ((~(((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) * (var_5)))))));
    *var_17 &= ((/* implicit */val<signed char>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)196;
signed char var_4 = (signed char)23;
unsigned int var_5 = 1264920553U;
int var_11 = 1098903559;
unsigned int var_13 = 3993403053U;
int zero = 0;
signed char var_16 = (signed char)121;
signed char var_17 = (signed char)12;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)79;
    value_mismatch |= var_17 != (signed char)4;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_11, var_13, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
