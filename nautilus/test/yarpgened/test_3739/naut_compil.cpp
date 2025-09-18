/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3739
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3739
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
void test(val<unsigned char> var_0, val<int> var_3, val<int> var_7, val<int> zero, val<bool*> var_13, val<bool*> var_14, val<short*> var_15) {
    *var_13 = ((/* implicit */val<bool>) (val<short>)18187);
    *var_14 = ((/* implicit */val<bool>) (-(((((min((var_3), (((/* implicit */val<int>) (val<short>)-32742)))) + (2147483647))) << (((((/* implicit */val<int>) var_0)) - (48)))))));
    *var_15 = ((/* implicit */val<short>) max((*var_15), (((/* implicit */val<short>) min(((((!(((/* implicit */val<bool>) (val<short>)-32738)))) ? (var_7) : ((~(((/* implicit */val<int>) (val<short>)-18188)))))), (((/* implicit */val<int>) (val<bool>)1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
int var_3 = 1414039782;
int var_7 = -630795594;
int zero = 0;
bool var_13 = (bool)1;
bool var_14 = (bool)0;
short var_15 = (short)24605;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (short)24605;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_7, zero, &var_13, &var_14, &var_15);
  checksum();
}
