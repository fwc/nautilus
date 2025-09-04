/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4001
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4001
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
void test(val<signed char> var_0, val<signed char> var_1, val<signed char> var_6, val<signed char> var_8, val<signed char> var_11, val<int> zero, val<signed char*> var_13, val<signed char*> var_14, val<signed char*> var_15) {
    *var_13 = ((/* implicit */val<signed char>) min((*var_13), (((/* implicit */val<signed char>) min(((+((+(((/* implicit */val<int>) var_0)))))), (((/* implicit */val<int>) var_0)))))));
    *var_14 -= ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) min((((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) (val<signed char>)3)) : (((/* implicit */val<int>) (val<signed char>)-90)))), (((/* implicit */val<int>) var_1)))))));
    *var_15 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)89)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) (val<signed char>)20))))) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_6))))) ? (((/* implicit */val<int>) max((((val<signed char>) (val<signed char>)65)), ((val<signed char>)-38)))) : (((/* implicit */val<int>) (val<signed char>)(-127 - 1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
signed char var_1 = (signed char)17;
signed char var_6 = (signed char)-95;
signed char var_8 = (signed char)-47;
signed char var_11 = (signed char)85;
int zero = 0;
signed char var_13 = (signed char)34;
signed char var_14 = (signed char)117;
signed char var_15 = (signed char)-95;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)-52;
    value_mismatch |= var_14 != (signed char)117;
    value_mismatch |= var_15 != (signed char)65;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, var_8, var_11, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
