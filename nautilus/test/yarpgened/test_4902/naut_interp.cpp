/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4902
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4902
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
void test(val<unsigned int> var_0, val<unsigned short> var_2, val<unsigned char> var_11, val<unsigned int> var_14, val<unsigned short> var_15, val<unsigned short> var_18, val<int> zero, val<unsigned int*> var_19, val<bool*> var_20, val<short*> var_21) {
    *var_19 = max((((/* implicit */val<unsigned int>) var_2)), (((((val<bool>) var_18)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11))) : (max((((/* implicit */val<unsigned int>) (val<unsigned char>)245)), (var_14))))));
    *var_20 *= ((/* implicit */val<bool>) var_0);
    *var_21 = ((/* implicit */val<short>) ((((/* implicit */val<int>) var_15)) < (min(((((val<bool>)1) ? (((/* implicit */val<int>) (val<short>)9752)) : (((/* implicit */val<int>) var_15)))), (((/* implicit */val<int>) (val<short>)16374))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2631814618U;
unsigned short var_2 = (unsigned short)51807;
unsigned char var_11 = (unsigned char)199;
unsigned int var_14 = 1155351651U;
unsigned short var_15 = (unsigned short)43439;
unsigned short var_18 = (unsigned short)439;
int zero = 0;
unsigned int var_19 = 1380842347U;
bool var_20 = (bool)1;
short var_21 = (short)11585;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 51807U;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_11, var_14, var_15, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
