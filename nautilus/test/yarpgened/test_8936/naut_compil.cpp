/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8936
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8936
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
void test(val<unsigned long long int> var_0, val<bool> var_5, val<long long int> var_10, val<unsigned long long int> var_11, val<unsigned char> var_12, val<bool> var_14, val<unsigned long long int> var_15, val<int> zero, val<unsigned long long int*> var_16, val<unsigned long long int*> var_17) {
    *var_16 = ((/* implicit */val<unsigned long long int>) (+(((val<unsigned int>) max((var_15), (((/* implicit */val<unsigned long long int>) var_14)))))));
    *var_17 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned long long int>) var_10)) >= (min((((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) : (var_0))), (((/* implicit */val<unsigned long long int>) var_12))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16799072204663479664ULL;
bool var_5 = (bool)1;
long long int var_10 = 2747449187596056083LL;
unsigned long long int var_11 = 14140973376151555920ULL;
unsigned char var_12 = (unsigned char)105;
bool var_14 = (bool)0;
unsigned long long int var_15 = 3989117788930591237ULL;
int zero = 0;
unsigned long long int var_16 = 17492647288232985023ULL;
unsigned long long int var_17 = 3900225176005460407ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1751534085ULL;
    value_mismatch |= var_17 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_10, var_11, var_12, var_14, var_15, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
