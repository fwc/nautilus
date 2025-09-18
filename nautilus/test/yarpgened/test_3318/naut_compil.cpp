/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3318
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3318
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
void test(val<unsigned char> var_5, val<unsigned char> var_6, val<unsigned int> var_13, val<int> zero, val<bool*> var_19, val<unsigned int*> var_20) {
    *var_19 = (!(((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((val<short>) var_13)))))));
    *var_20 = ((/* implicit */val<unsigned int>) (!(((val<bool>) ((((/* implicit */val<int>) var_6)) != (((/* implicit */val<int>) var_5)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)16;
unsigned char var_6 = (unsigned char)28;
unsigned int var_13 = 3124591045U;
int zero = 0;
bool var_19 = (bool)1;
unsigned int var_20 = 500361105U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_13, zero, &var_19, &var_20);
  checksum();
}
