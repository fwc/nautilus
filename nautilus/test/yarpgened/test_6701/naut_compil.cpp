/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6701
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6701
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
void test(val<long long int> var_0, val<unsigned long long int> var_10, val<unsigned short> var_14, val<signed char> var_16, val<long long int> var_18, val<int> zero, val<unsigned long long int*> var_20, val<unsigned long long int*> var_21) {
    *var_20 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 18446744073709551615ULL)) ? (255LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)40272)))))) ? (var_10) : (((/* implicit */val<unsigned long long int>) var_18)))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_18)) && (((/* implicit */val<bool>) var_14)))) ? (var_0) : (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<bool>)0)) >> (((/* implicit */val<int>) (val<bool>)1)))))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<bool>)1)) & (((/* implicit */val<int>) (val<bool>)1))))) : (((val<long long int>) var_16))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5788389586766916506LL;
unsigned long long int var_10 = 10131347267477969586ULL;
unsigned short var_14 = (unsigned short)44373;
signed char var_16 = (signed char)91;
long long int var_18 = -1810485802896531490LL;
int zero = 0;
unsigned long long int var_20 = 8441282509514223530ULL;
unsigned long long int var_21 = 15542473754716244481ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 0ULL;
    value_mismatch |= var_21 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_10, var_14, var_16, var_18, zero, &var_20, &var_21);
  checksum();
}
