/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9018
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9018
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
void test(val<long long int> var_0, val<short> var_1, val<int> zero, val<int*> var_20, val<int*> var_21, val<long long int*> var_22) {
    *var_20 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 2943114836072699037ULL)) ? (((val<unsigned int>) (val<unsigned short>)3537)) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)3537)))))) : (6641543643971797650ULL)));
    *var_21 = ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned short>)3535)) >= (((/* implicit */val<int>) (val<unsigned short>)62025))));
    *var_22 = var_0;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6127895950763773418LL;
short var_1 = (short)21613;
int zero = 0;
int var_20 = 731616077;
int var_21 = 815946747;
long long int var_22 = -8445088819729465122LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 3537;
    value_mismatch |= var_21 != 0;
    value_mismatch |= var_22 != 6127895950763773418LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, zero, &var_20, &var_21, &var_22);
  checksum();
}
