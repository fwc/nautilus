/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5992
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5992
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
void test(val<short> var_0, val<unsigned char> var_3, val<short> var_6, val<int> zero, val<bool*> var_11, val<unsigned int*> var_12, val<int*> var_13) {
    *var_11 = ((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_0))));
    *var_12 = ((/* implicit */val<unsigned int>) ((val<short>) (+(((/* implicit */val<int>) max((((/* implicit */val<short>) var_3)), ((val<short>)-19958)))))));
    *var_13 = ((/* implicit */val<int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28842;
unsigned char var_3 = (unsigned char)204;
short var_6 = (short)-17001;
int zero = 0;
bool var_11 = (bool)0;
unsigned int var_12 = 1990809233U;
int var_13 = -1081640258;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 204U;
    value_mismatch |= var_13 != -17001;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
