/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1005
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1005
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
void test(val<unsigned short> var_1, val<short> var_3, val<int> zero, val<bool*> var_11, val<unsigned int*> var_12) {
    *var_11 = ((/* implicit */val<bool>) min((*var_11), (((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_1)))))));
    *var_12 = ((/* implicit */val<unsigned int>) min((var_3), (((/* implicit */val<short>) (val<unsigned char>)104))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14501;
short var_3 = (short)18661;
int zero = 0;
bool var_11 = (bool)0;
unsigned int var_12 = 1183038947U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)0;
    value_mismatch |= var_12 != 104U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
