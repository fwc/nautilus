/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4624
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4624
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
void test(val<unsigned int> var_4, val<bool> var_5, val<unsigned char> var_7, val<int> var_8, val<unsigned int> var_10, val<bool> var_12, val<int> zero, val<short*> var_15, val<int*> var_16) {
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((val<short>) ((val<signed char>) var_4)))) ? (((val<unsigned long long int>) ((((/* implicit */val<bool>) var_8)) ? (var_10) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7)))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned short>) ((val<unsigned char>) var_5)))))));
    *var_16 = ((/* implicit */val<int>) ((val<signed char>) ((val<int>) ((val<int>) var_12))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3034319717U;
bool var_5 = (bool)1;
unsigned char var_7 = (unsigned char)129;
int var_8 = -241929305;
unsigned int var_10 = 2834168275U;
bool var_12 = (bool)1;
int zero = 0;
short var_15 = (short)-25383;
int var_16 = 251845469;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)-1581;
    value_mismatch |= var_16 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_7, var_8, var_10, var_12, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
