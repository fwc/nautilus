/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7478
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7478
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
void test(val<unsigned int> var_0, val<bool> var_1, val<signed char> var_3, val<unsigned int> var_5, val<unsigned short> var_7, val<unsigned int> var_10, val<int> zero, val<int*> var_13, val<unsigned short*> var_14, val<unsigned long long int*> var_15) {
    *var_13 = ((/* implicit */val<int>) max((*var_13), (((((/* implicit */val<bool>) max((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) + (var_0))), ((+(var_10)))))) ? (((((-5238513374933368620LL) <= (-5238513374933368634LL))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 5238513374933368620LL))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned char>)72)) || (((/* implicit */val<bool>) var_7))))))) : (((/* implicit */val<int>) var_1))))));
    *var_14 = ((/* implicit */val<unsigned short>) min((*var_14), (((/* implicit */val<unsigned short>) var_5))));
    *var_15 &= ((/* implicit */val<unsigned long long int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2325473772U;
bool var_1 = (bool)0;
signed char var_3 = (signed char)-88;
unsigned int var_5 = 3279649719U;
unsigned short var_7 = (unsigned short)54065;
unsigned int var_10 = 4049169041U;
int zero = 0;
int var_13 = 1401378137;
unsigned short var_14 = (unsigned short)17836;
unsigned long long int var_15 = 18396713876871799715ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1401378137;
    value_mismatch |= var_14 != (unsigned short)17836;
    value_mismatch |= var_15 != 24208291ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_7, var_10, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
