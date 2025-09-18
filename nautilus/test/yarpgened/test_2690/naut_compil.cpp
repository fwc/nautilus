/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2690
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2690
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
void test(val<signed char> var_8, val<int> zero, val<int*> var_10, val<long long int*> var_11, val<int*> var_12) {
    *var_10 = ((/* implicit */val<int>) ((val<unsigned short>) var_8));
    *var_11 += ((/* implicit */val<long long int>) ((18446744073709551611ULL) != (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 2147483647)) ? (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<unsigned short>)32719))))) : (((1216077900U) & (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)32719))))))))));
    *var_12 |= (-2147483647 - 1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-68;
int zero = 0;
int var_10 = -3180029;
long long int var_11 = 2580297913723308634LL;
int var_12 = -189269881;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 65468;
    value_mismatch |= var_11 != 2580297913723308635LL;
    value_mismatch |= var_12 != -189269881;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, zero, &var_10, &var_11, &var_12);
  checksum();
}
