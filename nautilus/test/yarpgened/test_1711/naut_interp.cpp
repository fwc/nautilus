/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1711
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1711
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
void test(val<int> zero, val<unsigned char*> var_15, val<unsigned char*> var_16, val<unsigned int*> var_17) {
    *var_15 = ((/* implicit */val<unsigned char>) (((-(0ULL))) == (((/* implicit */val<unsigned long long int>) -4470642))));
    *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 18446744073709551611ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)15))) == (13208877831076278405ULL))))) : ((+(18446744073709551611ULL)))))) || (((((/* implicit */val<bool>) (-(0ULL)))) && (((/* implicit */val<bool>) ((1648643811195083108LL) / (1648643811195083128LL))))))));
    *var_17 += ((/* implicit */val<unsigned int>) 1648643811195083108LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned char var_15 = (unsigned char)140;
unsigned char var_16 = (unsigned char)19;
unsigned int var_17 = 2820482671U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)0;
    value_mismatch |= var_16 != (unsigned char)0;
    value_mismatch |= var_17 != 1602944979U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
