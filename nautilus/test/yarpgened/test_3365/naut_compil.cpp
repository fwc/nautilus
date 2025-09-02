/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3365
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3365
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
void test(val<bool> var_0, val<bool> var_1, val<long long int> var_5, val<short> var_7, val<signed char> var_8, val<short> var_9, val<unsigned int> var_10, val<unsigned long long int> var_11, val<unsigned int> var_12, val<int> zero, val<int*> var_14, val<bool*> var_15) {
    *var_14 = ((/* implicit */val<int>) var_11);
    *var_15 *= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((var_9), (((/* implicit */val<short>) ((val<signed char>) var_1)))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_7))))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<short>)7680))))) : (max((((/* implicit */val<unsigned int>) (val<signed char>)11)), (var_10)))))) : (((val<long long int>) max((var_8), (((/* implicit */val<signed char>) var_0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
bool var_1 = (bool)0;
long long int var_5 = 6231330917454595065LL;
short var_7 = (short)22637;
signed char var_8 = (signed char)-18;
short var_9 = (short)19593;
unsigned int var_10 = 1172405837U;
unsigned long long int var_11 = 5751948932468667391ULL;
unsigned int var_12 = 1803088135U;
int zero = 0;
int var_14 = -2136013567;
bool var_15 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 905671679;
    value_mismatch |= var_15 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_7, var_8, var_9, var_10, var_11, var_12, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
