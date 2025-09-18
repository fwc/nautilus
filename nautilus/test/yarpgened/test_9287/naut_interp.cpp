/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9287
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9287
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
void test(val<signed char> var_2, val<short> var_6, val<unsigned int> var_7, val<unsigned short> var_9, val<long long int> var_13, val<signed char> var_19, val<int> zero, val<unsigned int*> var_20, val<unsigned int*> var_21, val<unsigned int*> var_22) {
    *var_20 = ((/* implicit */val<unsigned int>) min((*var_20), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) & (min((8660387484866619126LL), (((/* implicit */val<long long int>) 1527622404))))))) ? (((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_13))))) * (((/* implicit */val<int>) var_2)))) : (((/* implicit */val<int>) var_19)))))));
    *var_21 |= min((((/* implicit */val<unsigned int>) (~(1527622391)))), (var_7));
    *var_22 = ((/* implicit */val<unsigned int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-27;
short var_6 = (short)18661;
unsigned int var_7 = 2440336593U;
unsigned short var_9 = (unsigned short)23306;
long long int var_13 = -88343874065892548LL;
signed char var_19 = (signed char)44;
int zero = 0;
unsigned int var_20 = 4258601514U;
unsigned int var_21 = 3093381899U;
unsigned int var_22 = 4146902544U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 0U;
    value_mismatch |= var_21 != 3111507931U;
    value_mismatch |= var_22 != 18661U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_7, var_9, var_13, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
}
