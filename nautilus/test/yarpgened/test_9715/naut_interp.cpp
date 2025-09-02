/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9715
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9715
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
void test(val<long long int> var_0, val<unsigned long long int> var_5, val<unsigned int> var_8, val<unsigned int> var_10, val<int> zero, val<int*> var_16, val<unsigned char*> var_17) {
    *var_16 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<short>)26256)) ? (((/* implicit */val<int>) (val<short>)-31660)) : (((/* implicit */val<int>) (val<bool>)1))))) >= (((var_8) ^ (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) (val<signed char>)127)))))))));
    *var_17 = ((/* implicit */val<unsigned char>) (~(((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((var_5) > (((/* implicit */val<unsigned long long int>) var_10)))))) : ((((val<bool>)1) ? (var_0) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -521334704110100519LL;
unsigned long long int var_5 = 13334111526040779746ULL;
unsigned int var_8 = 76611344U;
unsigned int var_10 = 4068739712U;
int zero = 0;
int var_16 = -373219675;
unsigned char var_17 = (unsigned char)248;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1;
    value_mismatch |= var_17 != (unsigned char)254;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_8, var_10, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
