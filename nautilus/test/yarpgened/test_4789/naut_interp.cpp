/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4789
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4789
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
void test(val<int> var_1, val<int> var_5, val<unsigned long long int> var_7, val<long long int> var_8, val<signed char> var_10, val<int> zero, val<unsigned int*> var_13, val<unsigned long long int*> var_14, val<bool*> var_15) {
    *var_13 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (-7423774714805903346LL) : (((/* implicit */val<long long int>) var_5))))) ? (((/* implicit */val<int>) (val<short>)-4096)) : (((((/* implicit */val<bool>) 1350310275U)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) (val<bool>)0))))))) ? ((-((+(var_8))))) : (((/* implicit */val<long long int>) (((-(var_1))) / (((/* implicit */val<int>) ((val<signed char>) (val<bool>)1))))))));
    *var_14 = ((/* implicit */val<unsigned long long int>) var_5);
    *var_15 = (!(((/* implicit */val<bool>) var_7)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1631676309;
int var_5 = -68653037;
unsigned long long int var_7 = 12611314597957533842ULL;
long long int var_8 = -1365985669625192628LL;
signed char var_10 = (signed char)30;
int zero = 0;
unsigned int var_13 = 2081623661U;
unsigned long long int var_14 = 2167244417470771456ULL;
bool var_15 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 2923995316U;
    value_mismatch |= var_14 != 18446744073640898579ULL;
    value_mismatch |= var_15 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_7, var_8, var_10, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
