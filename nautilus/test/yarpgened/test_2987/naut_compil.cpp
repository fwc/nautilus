/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2987
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2987
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
void test(val<unsigned int> var_0, val<unsigned int> var_4, val<unsigned int> var_5, val<signed char> var_6, val<unsigned long long int> var_14, val<int> var_18, val<int> zero, val<unsigned long long int*> var_20, val<int*> var_21, val<short*> var_22) {
    *var_20 ^= ((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_6))));
    *var_21 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (((val<bool>)1) ? (((/* implicit */val<int>) (val<signed char>)62)) : (((/* implicit */val<int>) (val<bool>)1))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)96))) : (min((((/* implicit */val<unsigned int>) var_18)), (var_0)))))) ? (((/* implicit */val<unsigned long long int>) var_4)) : ((-(var_14)))));
    *var_22 &= ((/* implicit */val<short>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) (-(1936890388)))), (((8544171275480678980ULL) % (((/* implicit */val<unsigned long long int>) var_5))))))) ? (((/* implicit */val<int>) var_6)) : (max((-36078532), (((/* implicit */val<int>) (val<unsigned char>)197))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4213231386U;
unsigned int var_4 = 2280443455U;
unsigned int var_5 = 3152671258U;
signed char var_6 = (signed char)40;
unsigned long long int var_14 = 3336598912987840384ULL;
int var_18 = 720398527;
int zero = 0;
unsigned long long int var_20 = 157447600827030967ULL;
int var_21 = 1233212401;
short var_22 = (short)11351;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 18289296472882520687ULL;
    value_mismatch |= var_21 != -2014523841;
    value_mismatch |= var_22 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_6, var_14, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
}
