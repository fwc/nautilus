/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4851
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4851
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
void test(val<short> var_1, val<unsigned short> var_4, val<int> zero, val<signed char*> var_20, val<unsigned short*> var_21, val<signed char*> var_22) {
    *var_20 = ((/* implicit */val<signed char>) ((min((((/* implicit */val<int>) (val<unsigned char>)171)), (((((/* implicit */val<int>) (val<signed char>)-15)) / (((/* implicit */val<int>) (val<unsigned char>)255)))))) * (((/* implicit */val<int>) (val<signed char>)43))));
    *var_21 = ((/* implicit */val<unsigned short>) ((val<unsigned char>) var_4));
    *var_22 = ((/* implicit */val<signed char>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17195;
unsigned short var_4 = (unsigned short)7759;
int zero = 0;
signed char var_20 = (signed char)-51;
unsigned short var_21 = (unsigned short)35756;
signed char var_22 = (signed char)-38;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)0;
    value_mismatch |= var_21 != (unsigned short)79;
    value_mismatch |= var_22 != (signed char)-43;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
