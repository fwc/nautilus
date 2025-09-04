/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8309
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8309
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
void test(val<unsigned int> var_0, val<unsigned int> var_1, val<unsigned int> var_4, val<unsigned int> var_10, val<short> var_14, val<int> zero, val<long long int*> var_20, val<long long int*> var_21) {
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<unsigned short>)24283))))) ? (((((/* implicit */val<bool>) (+(var_0)))) ? (((((/* implicit */val<bool>) var_1)) ? (var_10) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)41253))))) : (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_14))))))) : (var_4)));
    *var_21 = ((/* implicit */val<long long int>) max((*var_21), (((/* implicit */val<long long int>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1119142849U;
unsigned int var_1 = 956897178U;
unsigned int var_4 = 2981367105U;
unsigned int var_10 = 3910629618U;
short var_14 = (short)12945;
int zero = 0;
long long int var_20 = 6984258919490249045LL;
long long int var_21 = -5614767334705718171LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 3910629618LL;
    value_mismatch |= var_21 != 1119142849LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_10, var_14, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
