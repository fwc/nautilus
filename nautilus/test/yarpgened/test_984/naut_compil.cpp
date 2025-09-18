/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 984
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=984
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
void test(val<unsigned int> var_11, val<int> zero, val<bool*> var_12, val<unsigned int*> var_13, val<unsigned char*> var_14) {
    *var_12 = ((/* implicit */val<bool>) ((val<unsigned int>) var_11));
    *var_13 = var_11;
    *var_14 = ((/* implicit */val<unsigned char>) min((*var_14), (((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (val<signed char>)4)) ? (((/* implicit */val<int>) (val<short>)0)) : (-1684490032))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 61981962U;
int zero = 0;
bool var_12 = (bool)1;
unsigned int var_13 = 3982309777U;
unsigned char var_14 = (unsigned char)248;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 61981962U;
    value_mismatch |= var_14 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, zero, &var_12, &var_13, &var_14);
  checksum();
}
