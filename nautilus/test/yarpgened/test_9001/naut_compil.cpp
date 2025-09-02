/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9001
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9001
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
void test(val<short> var_3, val<unsigned int> var_8, val<int> zero, val<unsigned short*> var_15, val<signed char*> var_16, val<unsigned char*> var_17) {
    *var_15 = ((/* implicit */val<unsigned short>) ((val<bool>) var_3));
    *var_16 = ((/* implicit */val<signed char>) var_8);
    *var_17 = ((/* implicit */val<unsigned char>) (val<short>)-9582);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)18418;
unsigned int var_8 = 2232331253U;
int zero = 0;
unsigned short var_15 = (unsigned short)11073;
signed char var_16 = (signed char)-1;
unsigned char var_17 = (unsigned char)65;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)1;
    value_mismatch |= var_16 != (signed char)-11;
    value_mismatch |= var_17 != (unsigned char)146;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_8, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
