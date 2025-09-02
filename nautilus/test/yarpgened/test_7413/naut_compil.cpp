/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7413
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7413
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
void test(val<unsigned short> var_5, val<unsigned int> var_6, val<unsigned int> var_8, val<unsigned short> var_10, val<unsigned short> var_11, val<unsigned short> var_17, val<int> zero, val<unsigned int*> var_18, val<unsigned short*> var_19, val<unsigned short*> var_20, val<unsigned short*> var_21, val<unsigned short*> var_22) {
    *var_18 -= ((/* implicit */val<unsigned int>) var_17);
    *var_19 = (val<unsigned short>)24755;
    *var_20 = var_10;
    *var_21 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)24755)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) (val<unsigned short>)24757))))) || (((/* implicit */val<bool>) var_6))))) >> (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_8)))))));
    *var_22 = ((/* implicit */val<unsigned short>) max((*var_22), (var_5)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)32401;
unsigned int var_6 = 3432493881U;
unsigned int var_8 = 3627850809U;
unsigned short var_10 = (unsigned short)20671;
unsigned short var_11 = (unsigned short)8610;
unsigned short var_17 = (unsigned short)2939;
int zero = 0;
unsigned int var_18 = 1745593098U;
unsigned short var_19 = (unsigned short)17857;
unsigned short var_20 = (unsigned short)49914;
unsigned short var_21 = (unsigned short)62278;
unsigned short var_22 = (unsigned short)11608;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1745590159U;
    value_mismatch |= var_19 != (unsigned short)24755;
    value_mismatch |= var_20 != (unsigned short)20671;
    value_mismatch |= var_21 != (unsigned short)1;
    value_mismatch |= var_22 != (unsigned short)32401;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_8, var_10, var_11, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
