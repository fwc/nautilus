/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7713
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7713
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
void test(val<unsigned char> var_0, val<short> var_3, val<unsigned int> var_4, val<unsigned int> var_10, val<int> zero, val<unsigned short*> var_18, val<unsigned int*> var_19, val<bool*> var_20) {
    *var_18 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned int>) (+((-(((/* implicit */val<int>) var_3))))))), (var_10)));
    *var_19 = ((/* implicit */val<unsigned int>) var_0);
    *var_20 = ((/* implicit */val<bool>) (+(var_4)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
short var_3 = (short)7427;
unsigned int var_4 = 191586645U;
unsigned int var_10 = 1426093346U;
int zero = 0;
unsigned short var_18 = (unsigned short)37744;
unsigned int var_19 = 1422790676U;
bool var_20 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)29986;
    value_mismatch |= var_19 != 232U;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_10, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
