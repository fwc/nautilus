/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7820
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7820
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
void test(val<signed char> var_8, val<signed char> var_13, val<int> zero, val<signed char*> var_17, val<bool*> var_18) {
    *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((val<signed char>) -400333657))) ? (((((/* implicit */val<bool>) max((((/* implicit */val<signed char>) (val<bool>)1)), ((val<signed char>)58)))) ? (max((18446744073709551615ULL), (((/* implicit */val<unsigned long long int>) (val<signed char>)-59)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned char>)238)) ? (((/* implicit */val<int>) (val<signed char>)46)) : (((/* implicit */val<int>) (val<signed char>)59))))) % (((((/* implicit */val<bool>) (val<signed char>)101)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)17))) : (524287U))))))));
    *var_18 *= ((/* implicit */val<bool>) ((((((val<unsigned int>) (val<unsigned char>)238)) == (min((((/* implicit */val<unsigned int>) (val<signed char>)-101)), (4294967278U))))) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<signed char>)100)) < ((((val<bool>)1) ? (((/* implicit */val<int>) (val<short>)5619)) : (((/* implicit */val<int>) (val<signed char>)-51)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)124;
signed char var_13 = (signed char)76;
int zero = 0;
signed char var_17 = (signed char)111;
bool var_18 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)-1;
    value_mismatch |= var_18 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_13, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
