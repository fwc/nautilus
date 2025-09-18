/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3750
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3750
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
void test(val<int> var_0, val<unsigned int> var_4, val<unsigned char> var_13, val<int> zero, val<short*> var_14, val<short*> var_15, val<int*> var_16, val<short*> var_17) {
    *var_14 = ((/* implicit */val<short>) ((val<bool>) var_13));
    *var_15 = ((/* implicit */val<short>) var_0);
    *var_16 = (~(((/* implicit */val<int>) (val<bool>)0)));
    *var_17 = ((/* implicit */val<short>) max((((/* implicit */val<unsigned long long int>) min(((+(((/* implicit */val<int>) (val<short>)(-32767 - 1))))), (((/* implicit */val<int>) ((((/* implicit */val<bool>) 144121727U)) || (((/* implicit */val<bool>) var_4)))))))), (((((/* implicit */val<unsigned long long int>) (~(4150845568U)))) - (max((18014398509473792ULL), (((/* implicit */val<unsigned long long int>) (val<bool>)0))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -511363612;
unsigned int var_4 = 3188155265U;
unsigned char var_13 = (unsigned char)231;
int zero = 0;
short var_14 = (short)6642;
short var_15 = (short)-20749;
int var_16 = -158084728;
short var_17 = (short)-25545;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)1;
    value_mismatch |= var_15 != (short)13796;
    value_mismatch |= var_16 != -1;
    value_mismatch |= var_17 != (short)(-32767 - 1);
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
