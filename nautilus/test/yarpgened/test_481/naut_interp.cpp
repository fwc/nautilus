/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 481
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=481
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
void test(val<short> var_5, val<signed char> var_13, val<int> zero, val<unsigned int*> var_14, val<bool*> var_15, val<int*> var_16) {
    *var_14 |= ((/* implicit */val<unsigned int>) ((val<unsigned long long int>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) ((val<unsigned short>) var_5))))));
    *var_15 = ((/* implicit */val<bool>) max((*var_15), (((/* implicit */val<bool>) ((((val<long long int>) (+(618976202033720493LL)))) | (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))))))));
    *var_16 = ((/* implicit */val<int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-32029;
signed char var_13 = (signed char)100;
int zero = 0;
unsigned int var_14 = 3910067604U;
bool var_15 = (bool)1;
int var_16 = 1632455660;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 3910067700U;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != -32029;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
}
