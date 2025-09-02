/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1261
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1261
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
void test(val<bool> var_1, val<unsigned char> var_8, val<int> zero, val<signed char*> var_15, val<unsigned long long int*> var_16, val<short*> var_17) {
    *var_15 *= ((/* implicit */val<signed char>) ((val<bool>) (val<short>)-17058));
    *var_16 ^= ((/* implicit */val<unsigned long long int>) var_1);
    *var_17 += ((/* implicit */val<short>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned char var_8 = (unsigned char)175;
int zero = 0;
signed char var_15 = (signed char)-81;
unsigned long long int var_16 = 6209634927714336846ULL;
short var_17 = (short)-580;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-81;
    value_mismatch |= var_16 != 6209634927714336847ULL;
    value_mismatch |= var_17 != (short)-405;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
