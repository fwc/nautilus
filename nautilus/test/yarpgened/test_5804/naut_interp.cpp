/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5804
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5804
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
void test(val<long long int> var_0, val<unsigned int> var_1, val<short> var_2, val<long long int> var_4, val<short> var_9, val<short> var_11, val<int> zero, val<long long int*> var_12, val<short*> var_13, val<bool*> var_14, val<int*> var_15) {
    *var_12 = ((/* implicit */val<long long int>) (val<short>)18);
    *var_13 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) 0ULL)) ? (max((var_4), (((/* implicit */val<long long int>) var_2)))) : (min((((/* implicit */val<long long int>) max((var_11), (var_9)))), ((~(var_0)))))));
    *var_14 = ((/* implicit */val<bool>) var_1);
    *var_15 = ((/* implicit */val<int>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7066620113709564032LL;
unsigned int var_1 = 452338900U;
short var_2 = (short)-21968;
long long int var_4 = 1522398966677696065LL;
short var_9 = (short)-9767;
short var_11 = (short)-2683;
int zero = 0;
long long int var_12 = 7580559227284897798LL;
short var_13 = (short)-908;
bool var_14 = (bool)1;
int var_15 = -544258782;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 18LL;
    value_mismatch |= var_13 != (short)-2683;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != 1329524289;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_9, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
