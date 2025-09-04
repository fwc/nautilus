/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2582
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2582
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
void test(val<short> var_1, val<bool> var_12, val<int> zero, val<int*> var_20, val<bool*> var_21, val<bool*> var_22, val<unsigned char*> var_23, val<unsigned short*> var_24) {
    *var_20 = ((/* implicit */val<int>) var_1);
    *var_21 = ((/* implicit */val<bool>) 1185247711);
    *var_22 = ((/* implicit */val<bool>) (+(max((3494718015U), (11U)))));
    *var_23 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) (val<signed char>)-57)) < (((/* implicit */val<int>) (val<unsigned short>)3))));
    *var_24 = ((/* implicit */val<unsigned short>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25505;
bool var_12 = (bool)1;
int zero = 0;
int var_20 = -17242209;
bool var_21 = (bool)0;
bool var_22 = (bool)1;
unsigned char var_23 = (unsigned char)102;
unsigned short var_24 = (unsigned short)36015;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -25505;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != (unsigned char)1;
    value_mismatch |= var_24 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_12, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
