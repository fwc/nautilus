/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3691
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3691
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
void test(val<long long int> var_1, val<unsigned short> var_5, val<bool> var_8, val<int> zero, val<unsigned long long int*> var_20, val<unsigned short*> var_21, val<unsigned int*> var_22, val<unsigned short*> var_23) {
    *var_20 |= ((/* implicit */val<unsigned long long int>) (!(var_8)));
    *var_21 = ((/* implicit */val<unsigned short>) (+(((/* implicit */val<int>) ((max((17279816213583039587ULL), (((/* implicit */val<unsigned long long int>) -639794104515968692LL)))) == (((/* implicit */val<unsigned long long int>) 0LL)))))));
    *var_22 = ((/* implicit */val<unsigned int>) var_1);
    *var_23 = var_5;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2593481254428982128LL;
unsigned short var_5 = (unsigned short)10295;
bool var_8 = (bool)0;
int zero = 0;
unsigned long long int var_20 = 10822606221082098117ULL;
unsigned short var_21 = (unsigned short)34668;
unsigned int var_22 = 2730790458U;
unsigned short var_23 = (unsigned short)37091;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 10822606221082098117ULL;
    value_mismatch |= var_21 != (unsigned short)0;
    value_mismatch |= var_22 != 975193232U;
    value_mismatch |= var_23 != (unsigned short)10295;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_8, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
