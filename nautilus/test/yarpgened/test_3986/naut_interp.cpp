/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3986
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3986
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
void test(val<unsigned int> var_0, val<long long int> var_7, val<unsigned int> var_9, val<int> zero, val<long long int*> var_14, val<long long int*> var_15, val<long long int*> var_16) {
    *var_14 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (((+(525361349U))) != (((val<unsigned int>) 9223372036854775807LL)))))) : ((~(((4095U) | (4095U)))))));
    *var_15 |= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_7)) ? ((+((+(4095U))))) : (var_0)));
    *var_16 = ((/* implicit */val<long long int>) ((var_9) < (504811834U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1262928725U;
long long int var_7 = 8542238860697679559LL;
unsigned int var_9 = 2593929099U;
int zero = 0;
long long int var_14 = 6714505250548323870LL;
long long int var_15 = 5157815575677032754LL;
long long int var_16 = 1471016111840683184LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1LL;
    value_mismatch |= var_15 != 5157815575677034495LL;
    value_mismatch |= var_16 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_9, zero, &var_14, &var_15, &var_16);
  checksum();
}
