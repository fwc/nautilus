/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 812
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=812
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
void test(val<unsigned short> var_5, val<unsigned long long int> var_6, val<long long int> var_8, val<unsigned int> var_9, val<signed char> var_10, val<int> zero, val<unsigned long long int*> var_14, val<int*> var_15) {
    *var_14 = ((((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)211))) + (2ULL)))) ? (((/* implicit */val<unsigned long long int>) (-(1597831797U)))) : (((((/* implicit */val<unsigned long long int>) var_8)) + (var_6))))) + (((/* implicit */val<unsigned long long int>) (-(((((/* implicit */val<bool>) var_5)) ? (var_9) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10)))))))));
    *var_15 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)31027;
unsigned long long int var_6 = 1645531075113314019ULL;
long long int var_8 = 1408149250771733540LL;
unsigned int var_9 = 3860454161U;
signed char var_10 = (signed char)-79;
int zero = 0;
unsigned long long int var_14 = 16778852318452670735ULL;
int var_15 = 1969007842;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 3131648634ULL;
    value_mismatch |= var_15 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_8, var_9, var_10, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
