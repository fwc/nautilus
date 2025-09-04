/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1292
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1292
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
void test(val<unsigned long long int> var_3, val<long long int> var_10, val<int> var_12, val<int> zero, val<long long int*> var_16, val<unsigned long long int*> var_17) {
    *var_16 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_3)) ? (max((((/* implicit */val<long long int>) (val<unsigned char>)57)), (var_10))) : (((/* implicit */val<long long int>) min((var_12), (((/* implicit */val<int>) (val<signed char>)-1)))))))) : ((~(max((((/* implicit */val<unsigned long long int>) (val<short>)837)), (3149299253322623380ULL)))))));
    *var_17 = ((/* implicit */val<unsigned long long int>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11979955823787667675ULL;
long long int var_10 = 7589946950202485591LL;
int var_12 = 915374376;
int zero = 0;
long long int var_16 = 5773187056398282177LL;
unsigned long long int var_17 = 9066948926372254176ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 7589946950202485591LL;
    value_mismatch |= var_17 != 915374376ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_10, var_12, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
