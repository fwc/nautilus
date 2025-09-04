/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1576
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1576
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
void test(val<unsigned char> var_1, val<int> var_2, val<unsigned int> var_7, val<unsigned int> var_9, val<short> var_10, val<signed char> var_12, val<unsigned short> var_13, val<int> zero, val<unsigned short*> var_15, val<unsigned short*> var_16) {
    *var_15 = ((/* implicit */val<unsigned short>) (~((-(((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_12)) : (var_2)))))));
    *var_16 = ((/* implicit */val<unsigned short>) (-(((((((/* implicit */val<bool>) var_10)) ? (var_7) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12))))) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_1)), (var_13)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)118;
int var_2 = 2141360927;
unsigned int var_7 = 865807808U;
unsigned int var_9 = 795950808U;
short var_10 = (short)-32334;
signed char var_12 = (signed char)123;
unsigned short var_13 = (unsigned short)42245;
int zero = 0;
unsigned short var_15 = (unsigned short)8179;
unsigned short var_16 = (unsigned short)8701;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)122;
    value_mismatch |= var_16 != (unsigned short)53706;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, var_9, var_10, var_12, var_13, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
